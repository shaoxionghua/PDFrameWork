//
//  PDTagsView.h
//  PDFramework
//
//  Created by danggui on 16/6/16.
//  Copyright © 2016年 danggui. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PDTagsView : UIView

///设置整个View的背景颜色
@property (nonatomic, retain) UIColor *PDbackgroundColor;
/**
 *  设置单一颜色
 */
@property (nonatomic) UIColor *PDSignalTagColor;

/**
 *  开放标签点击功能
 */
@property (nonatomic, retain)  NSMutableArray *MyTags;


/**
 *  标签 文本赋值
 */

- (void)setArrayTagWithLabelArray:(NSArray *)array;

@end
