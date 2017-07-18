//
//  ViewController.m
//  ZCWDropDownMenu
//
//  Created by 张朝伟 on 2017/7/14.
//  Copyright © 2017年 zcw. All rights reserved.
//

#import "ViewController.h"
#import "ZCWDropDownMenu.h"

@interface ViewController ()<ZCWDropDownMenuDelegate>


@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    ZCWDropDownMenu *menu = [[ZCWDropDownMenu alloc] initWithFrame:CGRectMake(100, 100, self.view.bounds.size.width - 200, 30) menuTitle:@"类型" maxDisplayMenuNumber:5];
    [menu setDataSource:@[@"0", @"1",@"2"]];
    menu.separationLineInsets = UIEdgeInsetsMake(0, 0, 0, 0);
    menu.separationLineColor = [UIColor whiteColor];
    [menu setMenuNameBackgroundColor:[UIColor whiteColor]];
    [menu setMenuItemBackgroundColor:[UIColor lightGrayColor]];
    [menu setMeneItemTextColor:[UIColor whiteColor]];
    menu.delegate = self;
    [self.view addSubview:menu];
}
-  (void)ZCWDropDownMenu:(ZCWDropDownMenu *)menu didSelectAtIndexPath:(NSIndexPath *)indexPath{
    
    NSLog(@"%@",menu.dataSource[indexPath.row]);
}


@end
