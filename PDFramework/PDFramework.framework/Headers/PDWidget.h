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
@end
