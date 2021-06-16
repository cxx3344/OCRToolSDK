//
//  HSTransitionManager+FlipAnimation.h
//  HSTransition
//
//  Created by AlanWang on 2017/6/12.
//  Copyright © 2017年 王小树. All rights reserved.
//

#import "HSTransitionManager.h"

@interface HSTransitionManager (FlipAnimation)

- (void)tipFlipToNextAnimationContext:(id<UIViewControllerContextTransitioning>)transitionContext;
- (void)tipFlipBackAnimationContext:(id<UIViewControllerContextTransitioning>)transitionContext;

@end
