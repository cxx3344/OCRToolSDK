//
//  HSIDCardScaningView.h
//  CustomCameraDemo
//
//  Created by Farben on 2021/5/24.
//  Copyright © 2021 farben. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface HSIDCardScaningView : UIView
@property (nonatomic) UIInterfaceOrientation scanDirection;    //扫描方向,默认向下
@property (nonatomic, strong) UIColor *focusColor;    //焦点颜色,默认蓝色
@property (nonatomic, readonly) BOOL isScanning;
@property (nonatomic) float duration;    //单次扫描时间
@property (nonatomic) unsigned repeatCount;    //扫描次数,默认为9999
@property (nonatomic, weak) UIImage *photoImage;    //图像

- (void)startScanning;
- (void)stopScanning;
- (void)pauseScanning;

@end

NS_ASSUME_NONNULL_END
