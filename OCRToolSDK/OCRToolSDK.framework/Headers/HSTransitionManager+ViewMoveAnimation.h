//
//  HSTransitionManager+ViewMoveAnimation.h
//  HSTransition
//
//  Created by AlanWang on 16/9/22.
//  Copyright © 2016年 王小树. All rights reserved.
//

#import "HSTransitionManager.h"

@interface HSTransitionManager (ViewMoveAnimation)
- (void)viewMoveNextWithType:(HSTransitionAnimationType )type andContext:(id<UIViewControllerContextTransitioning>)transitionContext;
- (void)viewMoveBackWithType:(HSTransitionAnimationType )type andContext:(id<UIViewControllerContextTransitioning>)transitionContext;


@end
