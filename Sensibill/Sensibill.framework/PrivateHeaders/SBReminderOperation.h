//
//  SBReminderOperation.h
//  SensibillAPI
//
//  Created by Nik Sawtschuk.
//  Copyright (c) 2017 Sensibill Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SBReceiptOperation.h"

@interface SBReminderOperation : NSObject

+ (void)getReminderListForReceipt:(NSString * _Nonnull)receiptID
                        fromIndex:(NSInteger)index
                         fromDate:(NSDate * _Nullable)dateFrom
                           toDate:(NSDate * _Nullable)dateTo
              withSuccessCallback:(SBOperationSuccessBlock _Nonnull)successCallback
                    errorCallback:(SBOperationErrorBlock _Nonnull)errorCallback;

+ (void)getTriggeredRemindersWithSuccessCallback:(SBOperationSuccessBlock _Nonnull)successCallback
                                   errorCallback:(SBOperationErrorBlock _Nonnull)errorCallback;

+ (NSURLSessionTask * _Nonnull)deleteReminderWithID:(NSString * _Nonnull)ID
                       withSuccessCallback:(SBOperationSuccessBlock _Nonnull)successCallback
                             errorCallback:(SBOperationErrorBlock _Nonnull)errorCallback;

+ (NSURLSessionTask * _Nonnull)deleteMultipleRemindersWithIDs:(NSArray * _Nonnull)IDs
                                 withSuccessCallback:(SBOperationSuccessBlock _Nonnull)successCallback
                                       errorCallback:(SBOperationErrorBlock _Nonnull)errorCallback;

+ (NSURLSessionTask * _Nonnull)createReminderWithParams:(NSDictionary * _Nullable)params
                           withSuccessCallback:(SBOperationSuccessBlock _Nonnull)successCallback
                                 errorCallback:(SBOperationErrorBlock _Nonnull)errorCallback;

+ (NSURLSessionTask * _Nonnull)updateReminderWithID:(NSString * _Nonnull)ID
                                withParams:(NSDictionary * _Nullable)params
                       withSuccessCallback:(SBOperationSuccessBlock _Nonnull)successCallback
                             errorCallback:(SBOperationErrorBlock _Nonnull)errorCallback;
@end
