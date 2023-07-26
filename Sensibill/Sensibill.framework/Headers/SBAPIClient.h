//
//  SBAPIClient.h
//  SensibillAPI
//
//  Created by Megha Bambra on 2015-09-02.
//  Copyright (c) 2015 B House Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@class SBError, SBLNetworkReachabilityService;

typedef NS_ENUM(int, RequestType) {
    GET,
    POST,
    PUT,
    DELETE
};

@interface SBAPIClient : NSObject

@property (nonatomic, copy) void (^errorCallback)(SBError *);

+ (NSString *)rootElementKey;

- (void)reset;

+ (void)clear;

+ (SBAPIClient *)sharedClient;

- (NSURLSessionDataTask *)createSessionWithConfiguration:(NSURLSessionConfiguration *)configuration
                                                     url:(NSString *)urlString requestType:(RequestType)requestType
                                              parameters:(NSDictionary *)params
                                         successCallback:(void (^)(NSDictionary *response))successCallback
                                           errorCallback:(void (^)(NSError * error))errorCallback;

- (NSURLSessionDataTask *)createUploadSessionWithConfiguration:(NSURLSessionConfiguration *)configuration
                                                           url:(NSString *)urlString
                                                          data:(NSData *)imageData
                                               successCallback:(void (^)(NSDictionary *response))successCallback
                                                 errorCallback:(void (^)(NSError * error))errorCallback;

- (NSURLSessionDataTask *)createUploadSessionWithConfiguration:(NSURLSessionConfiguration *)configuration
                                                           url:(NSString *)urlString
                                                          data:(NSData *)imageData
                                                    parameters:(NSDictionary *)params
                                               successCallback:(void (^)(NSDictionary *response))successCallback
                                                 errorCallback:(void (^)(NSError * error))errorCallback;

- (void)cancelAnyPreviouslyRunningRequests;

@end
