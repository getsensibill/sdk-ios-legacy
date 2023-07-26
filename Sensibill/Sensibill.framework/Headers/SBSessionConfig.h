//
//  SBSessionConfig.h
//  SensibillAPI
//
//  Created by Megha Bambra on 2015-09-02.
//  Copyright (c) 2015 B House Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

/// Used for muti-part configuration
#define BOUNDARY @"----------V2ymHFg03ehbqgZCaKO6jy"

@interface SBSessionConfig : NSObject

@property (nonatomic, strong, nonnull) NSURLSessionConfiguration *basicConfiguration;
@property (nonatomic, strong, nonnull) NSURLSessionConfiguration *clientConfiguration;
@property (nonatomic, strong, nonnull) NSURLSessionConfiguration *tokenConfiguration;
@property (nonatomic, strong, nonnull) NSURLSessionConfiguration *multipartConfiguration;

+ (instancetype _Nullable)sharedConfiguration;
+ (NSString * _Nonnull)base64EncodedAuthHeaderWithKey:(NSString * _Nonnull)key andPair:(NSString * _Nonnull)pair;
- (NSURLSessionConfiguration * _Nonnull)authConfigWithUsername:(NSString * _Nonnull)username andPassword:(NSString * _Nonnull)password;
- (NSURLSessionConfiguration * _Nonnull)defaultConfigWithAuthorizationHeader:(NSString * _Nonnull)header;
- (NSURLSessionConfiguration * _Nonnull)clientConfigIfValidElseTokenConfig;
- (NSDictionary * _Nonnull)userAuthorizationHeaders;


@end
