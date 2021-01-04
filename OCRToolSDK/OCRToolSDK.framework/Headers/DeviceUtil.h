//
//  DeviceUtil.h
//  CustomCameraDemo
//
//  Created by farben on 2020/12/28.
//  Copyright © 2020 farben. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface DeviceUtil : NSObject
// 获得设备型号
+ (NSString *)getiPhoneType;

// 获取系统版本号
+ (NSString* )getiPhoneVersion;
@end

NS_ASSUME_NONNULL_END
