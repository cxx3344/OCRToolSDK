//
//  HSTransitionManager+CoverAnimation.h
//  HSTransition
//
//  Created by AlanWang on 16/9/22.
//  Copyright © 2016年 王小树. All rights reserved.
//

#import "HSTransitionManager.h"

@interface HSTransitionManager (CoverAnimation)


-(void)coverTransitionNextAnimationWithContext:(id<UIViewControllerContextTransitioning>)transitionContext;
-(void)coverTransitionBackAnimationWithContext:(id<UIViewControllerContextTransitioning>)transitionContext;


@end
