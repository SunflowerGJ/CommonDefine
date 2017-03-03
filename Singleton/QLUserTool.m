//
//  QLUserTool.m
//  TianXingJian
//
//  Created by Shrek on 15/7/13.
//  Copyright (c) 2015年 xidian. All rights reserved.
//

#import "QLUserTool.h"

@implementation QLUserTool

- (instancetype)init {
    if(self = [super init]) {
        BOOL isLogin = [[NSUserDefaults standardUserDefaults] boolForKey:QLLoginStatus];
        if (isLogin) {
            _userModel = [NSKeyedUnarchiver unarchiveObjectWithFile:QLUserModelPath];
        }
    }
    return self;
}

- (void)saveUserModel:(QLUserModel *)userModel {
    _userModel = userModel;
    [NSKeyedArchiver archiveRootObject:_userModel toFile:QLUserModelPath];
}

- (void)clearUserModel {
    NSString *userDataPath = QLUserModelPath;
    NSFileManager *fileManager = [NSFileManager defaultManager];
    BOOL isUserDataExist = [fileManager fileExistsAtPath:userDataPath];
    if (isUserDataExist) {
        NSError *error;
        [fileManager removeItemAtPath:userDataPath error:&error];
        if (error) {
            QLLog(@"%s-userData Delete Failed:%@", __FUNCTION__, error);
        } else {
            _userModel = nil;
        }
    }
}

QLSingletonImplementation(UserTool)

@end
