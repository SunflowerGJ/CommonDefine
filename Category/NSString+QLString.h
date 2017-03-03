//
//  NSString+QLString.h
//  WorkAssistant
//
//  Created by Shrek on 15/5/29.
//  Copyright (c) 2015年 com.homelife.manager.mobile. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (QLString)

+ (instancetype)getValidStringWithObject:(id)obj;
- (BOOL)isEmptyString;
+ (BOOL)isEmptyString:(id)obj;
+ (NSString *)jsonStringWithNSDictionary:(NSDictionary *)dict;
+ (NSData *)jsonDataWithNSDictionary:(NSDictionary *)dict;

+ (BOOL)isPhoneNumber:(NSString *)string;
+ (BOOL)validateMobile:(NSString *)mobileNum;
+ (BOOL)isBankCard:(NSString *)string;
+ (NSString *)bankOfCard:(NSString *)cardNum;
+ (BOOL)isValidateEmail:(NSString *)email;
- (NSString*)md532BitUpper;
- (NSString *)subStringFrom:(NSString *)startString to:(NSString *)endString;
//身份证识别
+(BOOL)checkIdentityCardNo:(NSString*)cardNo;
+(BOOL) validateCarNo:(NSString*)carNo;

@end
