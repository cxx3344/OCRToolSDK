//
//  HSViewController.m
//  OCRToolSDK
//
//  Created by cxx3344 on 12/09/2020.
//  Copyright (c) 2020 cxx3344. All rights reserved.
//

#import "HSViewController.h"
#import <OCRToolSDK/OCRToolSDK.h>
@interface HSViewController ()
<
HSIDCardScannerViewControllerDelegate
>


@end

@implementation HSViewController
{
    NSInteger selectIndex;
}
- (void)viewDidLoad
{
    [super viewDidLoad];
    self.view.backgroundColor = [UIColor whiteColor];
}


- (IBAction)frontBtnAction:(UIButton *)sender {
    [self takePicActionWithType:1];
}


///拍照
- (void)takePicActionWithType:(NSInteger)type{
    selectIndex = type;

    HSIDCardScannerViewController *vc = [[HSIDCardScannerViewController alloc] initWithName:@"123" idCardNum:@"321"];
    vc.idCardScannerViewDelegate = self;
    //设置OCR使用环境
    vc.networkType = HSIDOCRNetworkStateTestType;
    //设置OCR拍照正反面
    vc.scanType = HSIDCardQualityScanTypeFront;
    if (type != 1) {
        vc.scanType = HSIDCardQualityScanTypeBack;
    }
    [self.navigationController pushViewController:vc animated:YES];
    

}

#pragma mark -- HSIDCardScannerViewControllerDelegate
- (void)idCardScannerInfoImage:(UIImage*)image result:(nonnull HSIDCardScannerInfo *)result{
    UIImage *scaleImage = image;//[UIImage imageCompressForWidth:image targetWidth:320];
    NSString *resultStr = nil;
    if (selectIndex == 1) {
        resultStr = [NSString stringWithFormat:@"姓名:%@\n号码:%@\n详细:%@\n",result.name,result.idCardNum,[self stringFromDict:result.allInfo]];
    }else{
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

@end
