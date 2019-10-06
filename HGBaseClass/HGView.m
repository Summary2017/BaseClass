//
//  HGView.m
//  HGKitManager
//
//  Created by  ZhuHong on 2017/9/3.
//  Copyright © 2017年 EasyMoveMobile. All rights reserved.
//

#import "HGView.h"

@implementation HGView

/// 获取一个xib关联的对象（保证xib文件名与类名一致）
+ (instancetype)xibView {
    NSString* nibName = NSStringFromClass(self);
    
    NSArray* views = [[NSBundle mainBundle] loadNibNamed:nibName owner:nibName options:nil];
    for (UIView* view in views) {
        if ([nibName isEqualToString:NSStringFromClass(view.class)]) {
            return (HGView*)view;
        }
    }
    
    return nil;
}

@end
