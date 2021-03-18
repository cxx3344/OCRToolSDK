//
//  HSUtil.h
//  ReportSubscribe
//
//  Created by farben on 2020/7/22.
//  Copyright © 2020 farben. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import <CoreMedia/CoreMedia.h>
#import <CoreVideo/CoreVideo.h>


NS_ASSUME_NONNULL_BEGIN

@interface HSUtil : NSObject
///格式化接口上传参数
+ (NSDictionary*)formatUploadPropertyWith:(NSDictionary*)dic;
///判断本地文件是否存在
+ (BOOL)checkFileExist:(NSString*)filePath;
///中文网址编码
+ (NSString*)chineseUrlEncodeWith:(NSString*)urlStr;
///中文网址反编码
+ (NSString*)chineseUrlRemoveEncodeWith:(NSString*)urlStr;




@end

NS_ASSUME_NONNULL_END
