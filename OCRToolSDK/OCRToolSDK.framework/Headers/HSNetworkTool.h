//
//  HSNetworkTool.h
//  IDCardDemo
//
//  Created by farben on 2020/8/12.
//  Copyright © 2020 farben. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "HSUtil.h"
#import "WebAPI.h"

//MARK:旧的测试环境
///http://10.101.76.2:8868/predict/ocr_system"
///#define BASE_TEST_URL @"http://10.101.76.2:8868"
///http://hdb-sit-api.test.h.cn/backapi/bigdata/ocr/v1/veriface  测试
///broker-sit-api.fcb.com.cn
///https://broker-sit-api.fcb.com.cn/backapi/bigdata/ocr/v1/veriface
//#define BASE_TEST_URL  @"https://broker-sit-api.fcb.com.cn" //测试
///https://hdb-api.evergrandebao.com/backapi/bigdata/ocr/v1/veriface  正式
///broker-api.fcb.com.cn
//#define BASE_PRODUCE_URL @"https://broker-api.fcb.com.cn" //正式
///生产地址:https://hdb-admin.evergrandebao.com/omc/bigdata/ocr/v1/veriface
///#define BASE_PRODUCE_URL @"https://hdb-admin.evergrandebao.com/omc/bigdata"


//MARK:新的环境地址 -- 2021.02.25
//MARK: 测试环境
///http://customer-sit-api.fcb.com.cn/backapi/ocr/v1/veriface
#define BASE_TEST_URL  @"https://customer-sit-api.fcb.com.cn"

//MARK: UAT环境
///https://customer-uat-api.fcb.com.cn/backapi/ocr/v1/veriface
#define BASE_UAT_URL  @"https://customer-uat-api.fcb.com.cn"

//MARK: 正式环境
///https://customer-api.fcb.com.cn/backapi/ocr/v1/veriface
#define BASE_PRODUCE_URL @"https://customer-api.fcb.com.cn"


typedef void(^resultBlock)(id _Nullable result,UIImage * _Nonnull image,NSError * _Nullable error);

NS_ASSUME_NONNULL_BEGIN

@interface HSNetworkTool : NSObject
<
NSURLSessionDelegate
>

- (void)uploadRequest:(NSInteger)type
             WithPath:(NSString*)path
               params:(NSDictionary*)params
                image:(UIImage*)image
           completion:(resultBlock)resultBlock;
@end

NS_ASSUME_NONNULL_END
