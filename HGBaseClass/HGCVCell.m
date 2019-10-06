//
//  HGCVCell.m
//  BaseClass
//
//  Created  by hong.zhu on 2019/10/6
//  Copyright © 2019 CoderHG. All rights reserved.
//  

#import "HGCVCell.h"

@implementation HGCVCell

// 返回cell
+ (instancetype)cellWithCollectionView:(UICollectionView*)collectionView indexPath:(NSIndexPath*)indexPath {
    // 以 class 名作为唯一标识
    NSString* ID = NSStringFromClass(self);
    HGCVCell *cell;
    @try {
        // 获取 cell : 如果在未注册的情况下, 会 crash 所以需要进行异常处理
        // 目前发现在控制器中已经提前注册, 但在飞快刷新的情况下还是会有异常, 在 UICollectionView 内部应该有异步操作, 故在此还需判断
        cell = [collectionView dequeueReusableCellWithReuseIdentifier:ID forIndexPath:indexPath];
    }
    @catch (NSException* e) {
        // TODO: 异常处理
    }
    @finally  {
        // class 注册
        [collectionView registerClass:self forCellWithReuseIdentifier:ID];
        
        // 再次获取 cell
        cell = [collectionView dequeueReusableCellWithReuseIdentifier:ID forIndexPath:indexPath];
    }
    
    return cell;
}

@end
