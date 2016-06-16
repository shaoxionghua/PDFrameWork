//
//  UIButton+UIButtonImageWithLable.h
//  PDFramework
//
//  Created by danggui on 16/6/13.
//  Copyright © 2016年 danggui. All rights reserved.
//
#import <UIKit/UIKit.h>

@interface UIButton (UIButtonImageWithLable)

- (void) setImage:(UIImage *)image withTitle:(NSString *)title forState:(UIControlState)stateType;

- (void) setIcon:(NSString *)iconString withTitle:(NSString *)title forState:(UIControlState)stateType;


@end
