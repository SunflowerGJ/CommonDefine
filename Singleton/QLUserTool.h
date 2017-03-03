//
//  QLUserTool.h
//  TianXingJian
//
//  Created by Shrek on 15/7/13.
//  Copyright (c) 2015年 xidian. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "QLSingleton.h"
#import "QLUserModel.h"
#import "QLConst.h"

@interface QLUserTool : NSObject

@property (nonatomic, strong, readonly) QLUserModel *userModel;

- (void)saveUserModel:(QLUserModel *)userModel;
- (void)clearUserModel;

QLSingletonInterface(UserTool)

@end
