//
//  HSTransitionManager+FragmentAnimation.h
//  HSTransition
//
//  Created by AlanWang on 16/9/20.
//  Copyright © 2016年 王小树. All rights reserved.
//

#import "HSTransitionManager.h"

@interface HSTransitionManager (FragmentAnimation)

-(void)fragmentShowNextType:(HSTransitionAnimationType)type andContext:(id<UIViewControllerContextTransitioning>)transitionContext;
-(void)fragmentShowBackType:(HSTransitionAnimationType)type andContext:(id<UIViewControllerContextTransitioning>)transitionContext;
-(void)fragmentHideNextType:(HSTransitionAnimationType)type andContext:(id<UIViewControllerContextTransitioning>)transitionContext;
-(void)fragmentHideBackType:(HSTransitionAnimationType)type andContext:(id<UIViewControllerContextTransitioning>)transitionContext;

@end
