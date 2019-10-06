//
//  HGCell.h
//  HGKitManager
//
//  Created by  ZhuHong on 2017/9/3.
//  Copyright © 2017年 EasyMoveMobile. All rights reserved.
//

#import <UIKit/UIKit.h>

/// 内部已考虑重用机制
@interface HGCell : UITableViewCell

/**
 返回一个Cell实例, 通常用于纯代码编写的子类

 @param tableView 当前表视图视图
 @return 返回Cell
 */
+ (instancetype)cellWithTableView:(UITableView*)tableView;

/**
 返回一个Cell实例, 通常用于XIB
 
 @param tableView 当前表视图视图
 @return 返回Cell
 */
+ (instancetype)xibCellWithTableView:(UITableView*)tableView;

/**
 返回一个空白Cell, 主要用于占位Cell
 
 @param tableView 当前表视图视图
 @return 返回Cell
 */
+ (id)blankCell:(UITableView*)tableView;

@end
