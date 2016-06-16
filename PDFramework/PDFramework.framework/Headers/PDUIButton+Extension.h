//
//  PDUIButton+Extension.h
//  PDFramework
//
//  Created by danggui on 16/6/16.
//  Copyright © 2016年 danggui. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^PDButtonActionBlock) (UIButton *button);

@interface UIButton (Extension)

/**
 *  创建文字Button
 *
 *  @param frame           frame
 *  @param title           title
 *  @param backgroundColor 背景颜色
 *  @param titleColor      文字颜色
 *  @param actionSel       block回调
 */
+(instancetype)PD_ButtonCustom:(CGRect)frame
                         title:(NSString *)title
             currentTtileColor:(UIColor *)titleColor
                     actionSel:(PDButtonActionBlock)actionSel;



/**
 *  创建图片Button
 *
 *  @param frame             frame
 *  @param normalImgString   按钮的正常状态图片
 *  @param actionSel         block回调
 */
+(instancetype)PD_ButtonImage:(CGRect)frame
            normalImageString:(NSString *)normalImgString
                    actionSel:(PDButtonActionBlock)actionSel;


/**
 *  创建带图片和文字的按钮
 *
 *  @param frame           frame
 *  @param title           title
 *  @param titleColor      文字颜色
 *  @param normalImgString 图片名称
 *  @param actionSel       block回调
 *
 *  @return button
 */
+(instancetype)PD_ButtonImageString:(CGRect)frame
                              title:(NSString *)title
                  currentTtileColor:(UIColor *)titleColor
                  normalImageString:(NSString *)normalImgString
                          actionSel:(PDButtonActionBlock)actionSel;




@end
