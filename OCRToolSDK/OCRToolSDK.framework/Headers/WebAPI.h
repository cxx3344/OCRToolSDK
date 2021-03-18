//
//  WebAPI.h
//  IDCardDemo
//
//  Created by farben on 2020/8/12.
//  Copyright © 2020 farben. All rights reserved.
//

#ifndef WebAPI_h
#define WebAPI_h

///
/** 上传图片 测试网接口 */
static NSString * const ApiPredictOcrSystemCode = @"/predict/ocr_system";


/// 测试:
/// http://customer-sit-api.fcb.com.cn/backapi/ocr/v1/veriface
static NSString * const ApiBigdataOcrVerifaceCode = @"/backapi/ocr/v1/veriface";

/** 上传图片 加网关测试接口
 http://hdb-sit-api.test.h.cn/backapi/bigdata/ocr/v1/veriface
 //正式
 url = "https:hdb-api.evergrandebao.com/backapi/bigdata/ocr/v1/veriface"
*/


//static NSString * const ApiBigdataOcrVerifaceCode = @"/backapi/bigdata/ocr/v1/veriface";

#endif /* WebAPI_h */
