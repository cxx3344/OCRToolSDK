//
//  HSScannerItemInfo.h
//  CocospodTest
//
//  Created by farben on 2020/11/18.
//  Copyright © 2020 farben. All rights reserved.
//

#import "HSBaseInfo.h"

NS_ASSUME_NONNULL_BEGIN

@interface HSScannerItemInfo : HSBaseInfo
/** 解析数据 */
@property (nonatomic, strong) NSString * text;
/** 数据识别度 */
@property (nonatomic, assign) float  confidence;
/** 数据所在索引 */
@property (nonatomic, assign) NSUInteger  index;


#pragma mark -- 正面识别
/** 是否包含"姓名" */
@property (nonatomic, assign) BOOL  isCName;
/** 是否包含"性别" */
@property (nonatomic, assign) BOOL  isCSex;

/** 数据长度 */
@property (nonatomic, assign) NSUInteger  length;
/** "姓名"所在位置 */
@property (nonatomic, assign) NSRange  range;
/** 包含"姓名"数据是否包含姓名数据 */
@property (nonatomic, assign) BOOL  isName;
/** 截取姓名 */
@property (nonatomic, strong) NSString * name;

/** 是否包含"号码" */
@property (nonatomic, assign) BOOL  isCID;

/** 是否是身份证号码 */
@property (nonatomic, assign) BOOL  isIDCard;
/** 截取身份证号码 */
@property (nonatomic, strong) NSString * idCardNum;

/** 是否包含字母或数字 */
@property (nonatomic, assign) BOOL  isCNumLetter;

#pragma mark -- 背面识别

/** 是否是包含"有效期限" */
@property (nonatomic, assign) BOOL  isCLimit;
/** 是否是包含"中华人民共和国" */
@property (nonatomic, assign) BOOL  isCGroup;


@end

NS_ASSUME_NONNULL_END
