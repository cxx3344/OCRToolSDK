//
//  UINavigationController+HSTransition.h
//  HSTransition
//
//  Created by 王小树 on 16/6/3.
//  Copyright © 2016年 王小树. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HSTypedefConfig.h"
#import "UIViewController+HSTransition.h"


@interface UINavigationController (HSTransition)

/*
 * 
 */
- (void)HS_pushViewController:(UIViewController *)viewController animationType:(HSTransitionAnimationType) animationType;
- (void)HS_pushViewController:(UIViewController *)viewController makeTransition:(HSTransitionBlock) transitionBlock;


@end
