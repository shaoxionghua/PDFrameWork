//
//  PDUIImageView+Extension.h
//  PDFramework
//
//  Created by danggui on 16/6/16.
//  Copyright © 2016年 danggui. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^PDImageViewButtonClickBlock) (UIButton *imageBlock);

@interface UIImageView (Extension)

/**
 *  创建 UIImageView
 *  @param frame    尺寸
 *  @param imageStr 图片名字
 */
+(instancetype)PD_CreateImageView:(CGRect)frame
                      imageString:(NSString *)imageString;

/**
 *  创建可点击 UIImageView
 *  @param frame    尺寸
 *  @param imageStr 图片名字
 *  @param action   回调block
 */
+(instancetype)PD_CreateImageViewAction:(CGRect)frame
                               imageString:(NSString *)imageString
                                 actionSel:(PDImageViewButtonClickBlock)action;
@end
