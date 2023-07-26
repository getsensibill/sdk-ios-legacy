//
//  SBEmailOperation.h
//  Sensibill
//
//  Created by Preetinder Kaur on 2016-09-26.
//
//

#import <Foundation/Foundation.h>
#import "SBReceiptOperation.h"

#define EMAIL_RECORDS_COUNT 20

@interface SBEmailOperation : NSObject

+ (void)getNonReceiptEmailListWithSuccessCallback:(NSInteger)index
                              withSuccessCallback:(SBOperationSuccessBlock _Nonnull)successCallback
                                    errorCallback:(SBOperationErrorBlock _Nullable)errorCallback;

+ (void)getNonReceiptEmailCountWithSuccessCallback:(SBOperationSuccessBlock _Nonnull)successCallback
                                     errorCallback:(SBOperationErrorBlock _Nullable)errorCallback;

+ (NSURLSessionDataTask * _Nonnull)updateEmailWithParameters:(NSDictionary * _Nonnull)params
                                withSuccessCallback:(SBOperationSuccessBlock _Nonnull)successCallback
                                      errorCallback:(SBOperationErrorBlock _Nullable)errorCallback;

+ (NSURLSessionDataTask * _Nonnull)deleteEmailWithID:(NSString * _Nonnull)emailID
                        withSuccessCallback:(SBOperationSuccessBlock _Nonnull)successCallback
                              errorCallback:(SBOperationErrorBlock _Nullable)errorCallback;

+ (void)deleteEmailsWithIDs:(NSArray * _Nonnull)ids
        withSuccessCallback:(SBOperationSuccessBlock _Nonnull)successCallback
              errorCallback:(SBOperationErrorBlock _Nullable)errorCallback;

+ (NSURLSessionDataTask * _Nonnull)updateEmailWithClassification:(NSString * _Nonnull)classification
                                                emailId:(NSString * _Nonnull)emailID
                                    withSuccessCallback:(SBOperationSuccessBlock _Nonnull)successCallback
                                          errorCallback:(SBOperationErrorBlock _Nullable)errorCallback;

+ (NSURLSessionDataTask * _Nonnull)markAsNonReceipt:(SBReceipt * _Nonnull)receipt withSuccessCallback:(SBOperationSuccessBlock _Nonnull)successCallback errorCallback:(SBOperationErrorBlock _Nullable)errorCallback;

@end
