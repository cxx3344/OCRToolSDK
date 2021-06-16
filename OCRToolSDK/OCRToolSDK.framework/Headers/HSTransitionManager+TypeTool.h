//
//  HSTransitionManager+TypeTool.h
//  HSTransition
//
//  Created by AlanWang on 16/9/20.
//  Copyright © 2016年 王小树. All rights reserved.
//

#import "HSTransitionManager.h"

@interface HSTransitionManager (TypeTool)<CAAnimationDelegate>
-(void)backAnimationTypeFromAnimationType:(HSTransitionAnimationType)type;
-(CATransition *)getSysTransitionWithType:(HSTransitionAnimationType )type;
@end
