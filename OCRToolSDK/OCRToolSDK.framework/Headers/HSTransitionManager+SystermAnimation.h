//
//  HSTransitionManager+SystermAnimation.h
//  HSTransition
//
//  Created by AlanWang on 16/9/22.
//  Copyright © 2016年 王小树. All rights reserved.
//

#import "HSTransitionManager.h"

@interface  HSTransitionManager (SystermAnimation)

-(void)sysTransitionNextAnimationWithType:(HSTransitionAnimationType) type context:(id<UIViewControllerContextTransitioning>)transitionContext;
-(void)sysTransitionBackAnimationWithType:(HSTransitionAnimationType) type context:(id<UIViewControllerContextTransitioning>)transitionContext;

@end
