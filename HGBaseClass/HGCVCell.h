//
//  HGCVCell.h
//  BaseClass
//
//  Created  by hong.zhu on 2019/10/6
//  Copyright © 2019 CoderHG. All rights reserved.
//  

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/// 内部已考虑重用机制
@interface HGCVCell : UICollectionViewCell

/**
 返回一个Cell实例, 通常用于纯代码编写的子类
 
 @param collectionView 当前表视图视图
 @return 返回Cell
 
 @note 内部已做异常处理, 可以不用提前注册 (在特殊情况下, 提前注册依然会 crash)
 */
+ (instancetype)cellWithCollectionView:(UICollectionView*)collectionView indexPath:(NSIndexPath*)indexPath;

@end

NS_ASSUME_NONNULL_END
