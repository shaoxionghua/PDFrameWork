//
//  PDObject.h
//  PDFramework
//
//  Created by danggui on 16/6/13.
//  Copyright © 2016年 danggui. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


@interface PDObject : NSObject

+(PDObject *)getInstance;

/**
 *  字符串格式化
 */


//数据转换把单位为分的价格转成价格为元的价格，保留两位小数
- (NSString *)changePrice:(NSString *)price;

//返回字符串所占用的尺寸
- (CGSize)sizeWithString:(NSString *)str :(UIFont *)font maxSize:(CGSize)maxSize;

//价格展示问题，价格展示￥变小，小数点后面的数值变小
- (NSMutableAttributedString *)changeText:(NSString *)sender :(UIFont *)font :(UIColor *)color;

//手机号码格式化 比如：13456789087 ->134-5678-9087
- (NSString *)PhoneNumFormat:(NSString *)phone;

//判断是否有效邮箱
- (BOOL)isEmail:(NSString *)email;

//判断是否有效手机号码
- (BOOL)isPhoneNum:(NSString *)phoneNum;

//判断是否身份证号码
- (BOOL)isUserIdCard:(NSString *)UserIdCard;

//判断是否网址
- (BOOL)isURL:(NSString *)url;



/**
 *  判断网络
 */

//是否连接网络
- (BOOL)isNetworkEnabled;

/**
 *  颜色设置
 */

// 颜色转换 IOS中十六进制的颜色转换为UIColor
- (UIColor *)colorWithHexString:(NSString *)color;






@end
