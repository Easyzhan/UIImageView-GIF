//
//  UIImageView+GIF.h
//
//
//  Created by Zin_戦 on 17/2/7.
//  Copyright © 2017年 Zin_戦. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImageView (GIF)

// 从指定的路径加载GIF并创建UIImageView
+ (UIImageView *)imageViewWithGIFFile:(NSString *)file frame:(CGRect)frame;

@end
