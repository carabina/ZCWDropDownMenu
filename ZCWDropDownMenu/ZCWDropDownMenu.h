//
//  ZCWDropDownMenu.h
//  ZCWDropDownMenu
//
//  Created by 张朝伟 on 2017/7/14.
//  Copyright © 2017年 zcw. All rights reserved.
//

#import <UIKit/UIKit.h>
//#import "ZCWDropDownMenuDelegate.h"
@class ZCWDropDownMenu;

@protocol ZCWDropDownMenuDelegate <NSObject>
/**
 *  选中某一行的事件响应
 *
 *  @param menu
 *  @param indexPath
 */
- (void)ZCWDropDownMenu:(ZCWDropDownMenu *)menu didSelectAtIndexPath:(NSIndexPath *)indexPath;

@end

@interface ZCWDropDownMenu : UIView

/**
 *  使用数剧初始化
 *
 *  @param frame      大小
 *  @param menuTitle  菜单名称
 *  @param dataSource 菜单选项数据
 *
 *  @return self
 */
- (instancetype)initWithFrame:(CGRect)frame
                    menuTitle:(NSString *)title
         maxDisplayMenuNumber:(NSUInteger)maxDisplayMenuNumber;
- (void)setDataSource:(NSArray *)dataSource;

#pragma mark - Other Property
@property (nonatomic, readonly, strong) NSArray *dataSource;
@property (nonatomic, weak) id<ZCWDropDownMenuDelegate> delegate;

@property (nonatomic, copy) NSString *selectedString;
@property (nonatomic, strong) UIColor *sectionColor;
@property (nonatomic, strong) UIFont *font;

#pragma mark - MenuName Property
@property (nonatomic, strong) UIColor *meneNameTextColor;
@property (nonatomic, strong) UIFont *meneNameTextFont;
@property (nonatomic, strong) UIColor *menuNameBackgroundColor;
@property (nonatomic, assign) CGRect menuNameFrame;

#pragma mark - Menu Indicator icon Property
@property (nonatomic, strong) UIImage *indicatorIconImage;
@property (nonatomic, assign) CGRect indicatorIconFrame;

#pragma mark - MenuItems Property
@property (nonatomic, strong) UIColor *separationLineColor;
@property (nonatomic, assign) UIEdgeInsets separationLineInsets;

@property (nonatomic, strong) UIColor *meneItemTextColor;
@property (nonatomic, strong) UIFont *meneItemTextFont;
@property (nonatomic, strong) UIColor *menuItemBackgroundColor;
@property (nonatomic, assign) CGRect menuItemTextFrame;
@property (nonatomic, assign) CGFloat menuItemHeight;

#pragma mark - BackgroundView Property
@property (nonatomic, strong) UIColor *backgroundViewColor;
@property (nonatomic, assign) CGFloat backgoundViewAlpha;

@end
