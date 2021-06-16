//
//  HSTransitionManager+InsideThenPushAnimation.h
//  HSTransition
//
//  Created by AlanWang on 16/9/22.
//  Copyright © 2016年 王小树. All rights reserved.
//

#import "HSTransitionManager.h"

@interface HSTransitionManager (InsideThenPushAnimation)
-(void)insideThenPushNextAnimationWithContext:(id<UIViewControllerContextTransitioning>)transitionContext;
-(void)insideThenPushBackAnimationWithContext:(id<UIViewControllerContextTransitioning>)transitionContext;
@end
