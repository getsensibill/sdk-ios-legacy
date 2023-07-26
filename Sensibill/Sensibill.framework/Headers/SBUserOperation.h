//
//  SBUserOperation.h
//  SensibillAPI
//
//  Created by Megha Bambra on 2015-09-02.
//  Copyright (c) 2015 B House Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void (^SBOperationErrorBlock)(NSError * _Nullable error);
typedef void (^SBOperationSuccessArrayBlock)(NSArray * _Nullable response);
typedef void (^SBOperationSuccessBlock)(NSDictionary * _Nullable response);
typedef void (^SBOperationSuccessBooleanBlock)(BOOL success);

@interface SBUserOperation : NSObject

+ (void)getAllUserNotificationCountsWithSuccessCallback:(SBOperationSuccessBlock _Nonnull)successCallback errorCallback:(SBOperationErrorBlock _Nullable)errorCallback;
+ (void)getUserNotificationsForFilters:(NSSet<NSString *> * _Nonnull)filters withSuccessCallback:(SBOperationSuccessBlock _Nonnull)successCallback errorCallback:(SBOperationErrorBlock _Nullable)errorCallback;
+ (void)updateUserAccountInformationWithParameters:(NSDictionary * _Nonnull)parameters successCallback:(SBOperationSuccessBlock _Nonnull)successCallback errorCallback:(SBOperationErrorBlock _Nullable)errorCallback;
+ (void)getUserTipsWithSuccessCallback:(SBOperationSuccessBlock _Nonnull)successCallback errorCallback:(SBOperationErrorBlock _Nullable)errorCallback;
+ (void)getUserTagsWithSuccessCallback:(SBOperationSuccessBlock _Nonnull)successCallback errorCallback:(SBOperationErrorBlock _Nullable)errorCallback;
+ (void)getMerchantsForString:(NSString * _Nonnull)merchant successCallback:(SBOperationSuccessBlock _Nonnull)successCallback errorCallback:(SBOperationErrorBlock _Nullable)errorCallback;
+ (void)requestPasswordResetForEmail:(NSString * _Nonnull)email successCallback:(SBOperationSuccessBlock _Nonnull)successCallback errorCallback:(SBOperationErrorBlock _Nullable)errorCallback;
+ (void)checkForServerReachabilityWithSuccessCallback:(SBOperationSuccessBlock _Nonnull)successCallback errorCallback:(SBOperationErrorBlock _Nullable)errorCallback;

@end
