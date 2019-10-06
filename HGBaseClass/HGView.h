//
//  HGView.h
//  HGKitManager
//
//  Created by  ZhuHong on 2017/9/3.
//  Copyright © 2017年 EasyMoveMobile. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HGView : UIView

/**
 获取一个xib关联的对象（保证xib文件名与类名一致）

 @return 返回对象
 */
+ (instancetype)xibView;

@end
