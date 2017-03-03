//
//  UIImage+QLImage.h
//  TianXingJian
//
//  Created by Shrek on 15/7/15.
//  Copyright (c) 2015年 xidian. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, QLCurrentDeviceClass) {
    QLCurrentDeviceClass_iPhone,
    QLCurrentDeviceClass_iPhoneRetina,
    QLCurrentDeviceClass_iPhone5,
    QLCurrentDeviceClass_iPhone6,
    QLCurrentDeviceClass_iPhone6plus,
    
    // we can add new devices when we become aware of them
    
    QLCurrentDeviceClass_iPad,
    QLCurrentDeviceClass_iPadRetina,
    
    QLCurrentDeviceClass_unknown
};

@interface UIImage (QLImage)

+ (instancetype )imageForDeviceWithName:(NSString *)fileName;

/**
 *  @brief  截取指定矩形区域的图片
 *
 *  @param rect 指定的区域
 *
 *  @return 返回指定矩形区域的图片
 */
- (UIImage *)imageAtRect:(CGRect)rect;
- (UIImage *)imageByScalingProportionallyToMinimumSize:(CGSize)targetSize;
- (UIImage *)imageByScalingProportionallyToSize:(CGSize)targetSize;
- (UIImage *)imageByScalingToSize:(CGSize)targetSize;
- (UIImage *)imageRotatedByRadians:(CGFloat)radians;
- (UIImage *)imageRotatedByDegrees:(CGFloat)degrees;

@end
