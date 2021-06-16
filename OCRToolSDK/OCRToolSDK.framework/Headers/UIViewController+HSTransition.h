
#import <UIKit/UIKit.h>
#import "HSTransitionManager.h"
#import "HSTransitionProperty.h"
#import "HSPercentDrivenInteractiveTransition.h"

typedef void(^HSTransitionBlock)(HSTransitionProperty *transition);

@interface UIViewController (HSTransition) <UIViewControllerTransitioningDelegate,UINavigationControllerDelegate>


- (void)HS_presentViewController:(UIViewController *)viewControllerToPresent animationType:(HSTransitionAnimationType )animationType completion:(void (^)(void))completion;
- (void)HS_presentViewController:(UIViewController *)viewControllerToPresent makeTransition:(HSTransitionBlock)transitionBlock;
- (void)HS_presentViewController:(UIViewController *)viewControllerToPresent makeTransition:(HSTransitionBlock)transitionBlock completion:(void (^)(void))completion;


@end


