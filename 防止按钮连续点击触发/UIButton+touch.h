//
//  UIButton+touch.h
//  PDFramework
//
//  Created by danggui on 16/6/13.
//  Copyright © 2016年 danggui. All rights reserved.
//


#import <UIKit/UIKit.h>
#define defaultInterval 0.5// 默认间隔时间
@interface UIButton (touch)
/**
 *  设置点击时间间隔
 */
@property (nonatomic, assign) NSTimeInterval timeInterVal;
@end
