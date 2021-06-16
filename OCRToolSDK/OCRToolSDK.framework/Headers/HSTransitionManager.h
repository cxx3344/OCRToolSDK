

#import <UIKit/UIKit.h>
#import "HSTypedefConfig.h"
@interface HSTransitionManager : NSObject<UIViewControllerAnimatedTransitioning>


@property (nonatomic, assign) NSTimeInterval                    animationTime;
@property (nonatomic, assign) HSTransitionType                 transitionType;
@property (nonatomic, assign) HSTransitionAnimationType        animationType;
@property (nonatomic, assign) HSTransitionAnimationType        backAnimationType;
@property (nonatomic, assign) HSGestureType                    backGestureType;

@property (nonatomic, weak) UIView                              *startView;
@property (nonatomic, weak) UIView                              *targetView;

@property (nonatomic, assign) BOOL                              isSysBackAnimation;
@property (nonatomic, assign) BOOL                              autoShowAndHideNavBar;
@property (nonatomic, assign) BOOL                              backGestureEnable;

@property (nonatomic, copy) void(^willEndInteractiveBlock)(BOOL success);
@property (nonatomic, copy) void(^completionBlock)();


+(HSTransitionManager *)copyPropertyFromObjcet:(id)object toObjcet:(id)targetObjcet;

- (UIImage *)imageFromView: (UIView *)view atFrame:(CGRect)rect;


@end
