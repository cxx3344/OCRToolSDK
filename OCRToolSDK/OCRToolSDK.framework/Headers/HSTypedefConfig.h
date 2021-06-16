//
//  HSTypedefConfig.h
//  HSTransition
//
//  Created by 王小树 on 16/6/3.
//  Copyright © 2016年 王小树. All rights reserved.
//

#ifndef HSTypedefConfig_h
#define HSTypedefConfig_h


// ************** Enum **************
typedef NS_ENUM(NSInteger,HSTransitionAnimationType){
    //----------- 系统 ------------
    HSTransitionAnimationTypeSysFade = 1,                   //淡入淡出
    
    HSTransitionAnimationTypeSysPushFromRight,
    HSTransitionAnimationTypeSysPushFromLeft,
    HSTransitionAnimationTypeSysPushFromTop,
    HSTransitionAnimationTypeSysPushFromBottom,//Push
    
    HSTransitionAnimationTypeSysRevealFromRight,
    HSTransitionAnimationTypeSysRevealFromLeft,
    HSTransitionAnimationTypeSysRevealFromTop,
    HSTransitionAnimationTypeSysRevealFromBottom,//揭开
    
    HSTransitionAnimationTypeSysMoveInFromRight,
    HSTransitionAnimationTypeSysMoveInFromLeft,
    HSTransitionAnimationTypeSysMoveInFromTop,
    HSTransitionAnimationTypeSysMoveInFromBottom,//覆盖
    
    HSTransitionAnimationTypeSysCubeFromRight,
    HSTransitionAnimationTypeSysCubeFromLeft,
    HSTransitionAnimationTypeSysCubeFromTop,
    HSTransitionAnimationTypeSysCubeFromBottom,//立方体
    
    HSTransitionAnimationTypeSysSuckEffect,                 //吮吸
    
    HSTransitionAnimationTypeSysOglFlipFromRight,
    HSTransitionAnimationTypeSysOglFlipFromLeft,
    HSTransitionAnimationTypeSysOglFlipFromTop,
    HSTransitionAnimationTypeSysOglFlipFromBottom, //翻转
    
    HSTransitionAnimationTypeSysRippleEffect,               //波纹
    
    HSTransitionAnimationTypeSysPageCurlFromRight,
    HSTransitionAnimationTypeSysPageCurlFromLeft,
    HSTransitionAnimationTypeSysPageCurlFromTop,
    HSTransitionAnimationTypeSysPageCurlFromBottom,//翻页
    
    HSTransitionAnimationTypeSysPageUnCurlFromRight,
    HSTransitionAnimationTypeSysPageUnCurlFromLeft,
    HSTransitionAnimationTypeSysPageUnCurlFromTop,
    HSTransitionAnimationTypeSysPageUnCurlFromBottom,//反翻页
    
    HSTransitionAnimationTypeSysCameraIrisHollowOpen,       //开镜头
    
    HSTransitionAnimationTypeSysCameraIrisHollowClose,      //关镜头
    
    //----------- 自定义 ------------
    HSTransitionAnimationTypeDefault,
    
    HSTransitionAnimationTypePageTransition,
    
    HSTransitionAnimationTypeViewMoveToNextVC,
    HSTransitionAnimationTypeViewMoveNormalToNextVC,
    
    HSTransitionAnimationTypeCover,
    
    HSTransitionAnimationTypeSpreadFromRight,
    HSTransitionAnimationTypeSpreadFromLeft,
    HSTransitionAnimationTypeSpreadFromTop,
    HSTransitionAnimationTypeSpreadFromBottom,
    HSTransitionAnimationTypePointSpreadPresent,
    
    HSTransitionAnimationTypeBoom,
    
    HSTransitionAnimationTypeBrickOpenVertical,
    HSTransitionAnimationTypeBrickOpenHorizontal,
    HSTransitionAnimationTypeBrickCloseVertical,
    HSTransitionAnimationTypeBrickCloseHorizontal,
    
    HSTransitionAnimationTypeInsideThenPush,
    
    HSTransitionAnimationTypeFragmentShowFromRight,
    HSTransitionAnimationTypeFragmentShowFromLeft,
    HSTransitionAnimationTypeFragmentShowFromTop,
    HSTransitionAnimationTypeFragmentShowFromBottom,
    
    HSTransitionAnimationTypeFragmentHideFromRight,
    HSTransitionAnimationTypeFragmentHideFromLeft,
    HSTransitionAnimationTypeFragmentHideFromTop,
    HSTransitionAnimationTypeFragmentHideFromBottom,
    HSTransitionAnimationTypeTipFlip,
    
};

typedef NS_ENUM(NSInteger,HSTransitionType){
    
    HSTransitionTypePop,
    HSTransitionTypePush,
    HSTransitionTypePresent,
    HSTransitionTypeDismiss,
};


typedef NS_ENUM(NSInteger,HSGestureType){

    HSGestureTypeNone,
    HSGestureTypePanLeft,
    HSGestureTypePanRight,
    HSGestureTypePanUp,
    HSGestureTypePanDown,
    
};
//系统动画类型
typedef NS_ENUM(NSInteger,HSTransitionSysAnimationType){
    
    HSTransitionSysAnimationTypeFade = 1,                   //淡入淡出
    HSTransitionSysAnimationTypePush,                       //推挤
    HSTransitionSysAnimationTypeReveal,                     //揭开
    HSTransitionSysAnimationTypeMoveIn,                     //覆盖
    HSTransitionSysAnimationTypeCube,                       //立方体
    HSTransitionSysAnimationTypeSuckEffect,                 //吮吸
    HSTransitionSysAnimationTypeOglFlip,                    //翻转
    HSTransitionSysAnimationTypeRippleEffect,               //波纹
    HSTransitionSysAnimationTypePageCurl,                   //翻页
    HSTransitionSysAnimationTypePageUnCurl,                 //反翻页
    HSTransitionSysAnimationTypeCameraIrisHollowOpen,       //开镜头
    HSTransitionSysAnimationTypeCameraIrisHollowClose,      //关镜头
    HSTransitionSysAnimationTypeCurlDown,                   //下翻页
    HSTransitionSysAnimationTypeCurlUp,                     //上翻页
    HSTransitionSysAnimationTypeFlipFromLeft,               //左翻转
    HSTransitionSysAnimationTypeFlipFromRight,              //右翻转
    
};



#endif /* HSTypedefConfig_h */
