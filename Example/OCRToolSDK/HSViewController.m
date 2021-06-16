//
//  HSViewController.m
//  OCRToolSDK
//
//  Created by cxx3344 on 12/09/2020.
//  Copyright (c) 2020 cxx3344. All rights reserved.
//

#import "HSViewController.h"
#import <Photos/Photos.h>
#import <OCRToolSDK/OCRToolSDK.h>



@interface HSViewController ()
<
HSIDCardScannerViewControllerDelegate
>
{
    HSIDOCRNetworkStateType stateType;
}

@property (weak, nonatomic) IBOutlet UIImageView *frontIV;

@property (weak, nonatomic) IBOutlet UIImageView *backIV;

@property (weak, nonatomic) IBOutlet UITextField *nameTF;

@property (weak, nonatomic) IBOutlet UITextField *idCardTF;

@end

@implementation HSViewController
{
    NSInteger selectIndex;
}
- (void)viewDidLoad
{
    [super viewDidLoad];
    stateType = HSIDOCRNetworkStateTestType;
    self.view.backgroundColor = [UIColor whiteColor];
    
    NSLog(@"SDKVersion: %@",HSIDCardVersion);
    self.nameTF.text = @"iOS测试姓名";
    self.idCardTF.text = @"iOS测试身份证";
}


- (IBAction)frontBtnAction:(UIButton *)sender {
    [self takePicActionWithType:1];
}

- (IBAction)backBtnAction:(UIButton *)sender {
    [self takePicActionWithType:2];
}

- (IBAction)segmentAction:(UISegmentedControl *)sender {
    if (sender.selectedSegmentIndex == 0) {
        stateType = HSIDOCRNetworkStateTestType;
    }else if (sender.selectedSegmentIndex == 1){
        stateType = HSIDOCRNetworkStateUatType;
    }else{
        stateType = HSIDOCRNetworkStateProductionType;
    }
}


///拍照
- (void)takePicActionWithType:(NSInteger)type{
    selectIndex = type;

    HSIDCardScannerViewController *vc = [[HSIDCardScannerViewController alloc] initWithName:SAFE_STRING(self.nameTF.text) idCardNum:SAFE_STRING(self.idCardTF.text)];
    vc.idCardScannerViewDelegate = self;
    //设置OCR使用环境
    vc.networkType = stateType;
    //设置OCR拍照正反面
    vc.scanType = HSIDCardQualityScanTypeFront;
    if (type != 1) {
        vc.scanType = HSIDCardQualityScanTypeBack;
    }
    [self.navigationController HS_pushViewController:vc makeTransition:^(HSTransitionProperty *transition) {
        transition.transitionType = HSTransitionTypePop;
        transition.backGestureType = HSGestureTypePanRight;
        transition.animationType = HSTransitionAnimationTypeBrickCloseVertical;
    }];
//    [self.navigationController pushViewController:vc animated:YES];
}

#pragma mark -- HSIDCardScannerViewControllerDelegate
- (void)idCardScannerInfoImage:(UIImage*)image result:(nonnull HSIDCardScannerInfo *)result{
    [self saveImageToLocalWithImage:image];
    UIImage *scaleImage = image;//[UIImage imageCompressForWidth:image targetWidth:320];
    NSString *resultStr = nil;
    if (selectIndex == 1) {
        self.frontIV.image = scaleImage;
        resultStr = [NSString stringWithFormat:@"姓名:%@\n号码:%@\n详细:%@\n",result.name,result.idCardNum,[self stringFromDict:result.allInfo]];
    }else{
        self.backIV.image = scaleImage;
        resultStr = [NSString stringWithFormat:@"开始:%@\n结束:%@\n详细:%@\n",result.validStartDate,result.validEndDate,[self stringFromDict:result.allInfo]];
    }
    NSLog(@"名称: %@ \n身份证: %@ \n有效期(始): %@ \n有效期(终): %@",result.name,result.idCardNum,result.validStartDate,result.validEndDate);
    
    
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"结果" message:resultStr preferredStyle:(UIAlertControllerStyleAlert)];
    NSMutableParagraphStyle *paraStyle = [[NSMutableParagraphStyle alloc] init];
    paraStyle.alignment = NSTextAlignmentLeft;
    NSMutableAttributedString *atrStr = [[NSMutableAttributedString alloc] initWithString:resultStr attributes:@{NSParagraphStyleAttributeName:paraStyle,NSFontAttributeName:[UIFont systemFontOfSize:13.0]}];

    [alert setValue:atrStr forKey:@"attributedMessage"];
    UIAlertAction *action = [UIAlertAction actionWithTitle:@"确定" style:(UIAlertActionStyleDefault) handler:^(UIAlertAction * _Nonnull action) {
       //
    }];
    [alert addAction:action];
    [self presentViewController:alert animated:YES completion:nil];
    
//    UIAlertController *alertCtrl = [UIAlertController alertControllerWithTitle:@"结果" message:resultStr preferredStyle:UIAlertControllerStyleAlert];
//    UIAlertAction *ok = [UIAlertAction actionWithTitle:@"OK" style:UIAlertActionStyleDefault handler:^(UIAlertAction * _Nonnull action) {
//    }];
//
//    [alertCtrl addAction:ok];
//    [self presentViewController:alertCtrl animated:YES completion:nil];
}

///字典转JSON字符串
- (NSString*)stringFromDict:(NSDictionary*)dict{
    NSData *jsonData = [NSJSONSerialization dataWithJSONObject:dict options:0 error:0];
    NSString *dataStr = [[NSString alloc] initWithData:jsonData encoding:NSUTF8StringEncoding];
    return dataStr;
}
///JSON字符串转字典
+ (NSDictionary *)dictionaryFromString:(NSString *)jsonString {
    if (jsonString == nil) {
        return nil;
    }
    NSData *jsonData = [jsonString dataUsingEncoding:NSUTF8StringEncoding];
    NSError *err;
    NSDictionary *dic = [NSJSONSerialization JSONObjectWithData:jsonData
                                                        options:NSJSONReadingMutableContainers
                                                          error:&err];
    if(err) {
        NSLog(@"json解析失败：%@",err);
        return nil;
    }
    return dic;
}

///保存图片到本地
- (void)saveImageToLocalWithImage:(UIImage*)photoImage{
    //保存图片到【相机胶卷】
    /// 异步执行修改操作
    [[PHPhotoLibrary sharedPhotoLibrary]performChanges:^{
        [PHAssetChangeRequest creationRequestForAssetFromImage:photoImage];
    } completionHandler:^(BOOL success, NSError * _Nullable error) {
        if (error) {
            NSLog(@"%@",@"保存失败");
        } else {
            NSLog(@"%@",@"保存成功");
        }
    }];
}


@end
