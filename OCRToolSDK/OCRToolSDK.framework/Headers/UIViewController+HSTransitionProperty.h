//
//  UIViewController+HSTransitionProperty.h
//  HSTransition
//
//  Created by AlanWang on 16/9/21.
//  Copyright © 2016年 王小树. All rights reserved.
//

#import <UIKit/UIKit.h>

@class HSTransitionProperty;


@interface UIViewController (HSTransitionProperty)


typedef void(^HSTransitionBlock)(HSTransitionProperty *transition);

@property (nonatomic, copy  ) HSTransitionBlock            HS_callBackTransition;
@property (nonatomic, assign) BOOL                          HS_delegateFlag;
@property (nonatomic, assign) BOOL                          HS_addTransitionFlag;
@property (nonatomic, assign) BOOL                          HS_backGestureEnable;

@property (nonatomic, weak  ) id                            HS_transitioningDelegate;
@property (nonatomic, weak  ) id                            HS_tempNavDelegate;


@end
