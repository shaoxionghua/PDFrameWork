//
//  PDWidget.h
//  PDFramework
//
//  Created by danggui on 16/6/13.
//  Copyright © 2016年 danggui. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "MYLab.h"
#import "PDTagsView.h"


@interface PDWidget : NSObject

/**
 *  带阴影的View
 */
+ (UIView *)CreatShadwView:(CGRect)frame;

/**
 *  带图片和文字的Button
 */
+ (UIButton *)CreatImageButton:(CGRect)frame :(UIImage *)image :(NSString *)title;

/**
 *  创建UILabel 文字内容居中或者靠上或者靠下显示,其他lab的属性都不变
 *  VerticalAlignment =VerticalAlignmentTop 居上
 *  VerticalAlignment =VerticalAlignmentMiddle 居中（默认）
 *  VerticalAlignment =VerticalAlignmentBottom 居下
 */
+ (MYLab *)CreatMyLab:(CGRect)frame :(VerticalAlignment)VerticalAlignment;



/**
 *  0:普通带边框UILabel
 *  1:带虚线边框UILabel
 */
+ (UILabel*) CreatMyLab:(CGRect)frame :(NSString *)str :(UIColor *)bgcolor :(UIColor *)linecolor :(int)Type;

/**
 *  0:普通带边框UIButton
 *  1:带虚线边框UIButton
 */
+ (UIButton*) CreatMyBtn:(CGRect)frame :(NSString *)str :(UIColor *)bgcolor :(UIColor *)linecolor :(int)Type;


/**
 *  0:fontello_UILabel
 */
+ (UILabel*) CreatFontelloLab:(CGRect)frame :(NSString *)str :(UIFont *)font :(UIColor *)fontColor :(int)Type;

/**
 *  fontello_UIButton
 */
+ (UIButton*) CreatFontelloBtn:(CGRect)frame :(NSString *)str :(UIFont *)font :(UIColor *)fontColor :(int)Type;



/**
 *  带小红点的UIButton
 */

+ (void)UIButtonShowBadgeOnItemIndex:(id)sender; //显示小红点
+ (void)UIButtonHideBadgeOnItemIndex:(id)sender; //隐藏小红点

/**
 *  带小红点的UITabBar
 */

+ (void)UITabBarShowBadgeOnItemIndex:(id)sender :(int)index :(int)Num;   //UITabBar显示小红点
+ (void)UITabBarHideBadgeOnItemIndex:(id)sender :(int)index :(int)Num;  //UITabBar隐藏小红点


/**
 *  创建标签
 */

+ (PDTagsView *)CreatPDTagsView:(CGRect)frame :(NSArray *)dataSource :(UIColor *)color;









@end
