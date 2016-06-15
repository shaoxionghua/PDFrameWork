//
//  PDToast.h
//  PDFramework
//
//  Created by danggui on 16/6/14.
//  Copyright © 2016年 danggui. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <QuartzCore/QuartzCore.h>
#import <UIKit/UIKit.h>

#define DEFAULT_DISPLAY_DURATION 3.0f

@interface PDToast : NSObject
{
    NSString *text;
    UIButton *contentView;
    CGFloat  duration;
    UIActivityIndicatorView *activityIndicatorView;
}

@property (nonatomic, assign) CFTimeInterval animationDuration;

//正常的中间显示，默认3秒消失
+ (void)showWithText:(NSString *) text_;
//指定时间消失的中间显示
+ (void)showWithText:(NSString *) text_
            duration:(CGFloat)duration_;
//向上指定位置的显示
+ (void)showWithText:(NSString *) text_
           topOffset:(CGFloat) topOffset_;
//向上指定位置和时间的显示
+ (void)showWithText:(NSString *) text_
           topOffset:(CGFloat) topOffset
            duration:(CGFloat) duration_;
//向下指定位置的显示
+ (void)showWithText:(NSString *) text_
        bottomOffset:(CGFloat) bottomOffset_;
//向下指定位置和时间的显示
+ (void)showWithText:(NSString *) text_
        bottomOffset:(CGFloat) bottomOffset_
            duration:(CGFloat) duration_;
//带菊花的显示
+ (void)showActivity:(NSString *)text_;
//隐藏菊花的显示
+ (void)hiddenActivity;


@end
