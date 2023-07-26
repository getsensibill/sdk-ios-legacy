//
//  SBImageOperation.h
//  SensibillAPI
//
//  Created by Megha Bambra on 2015-09-02.
//  Copyright (c) 2015 B House Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#define RECORDS_FETCH_COUNT                            20

@class SBSearchFilter, SBDateRange, SBReceipt, SBExternalAccountTransaction, SBFolder, SBLPrivateMetaData, SBLSharedMetaData;

typedef void (^SBOperationErrorBlock)(NSError * _Nullable error);
typedef void (^SBOperationSuccessArrayBlock)(NSArray * _Nullable response);

typedef void (^SBOperationSuccessBlock)(NSDictionary * _Nullable response);
typedef void (^SBOperationSuccessBooleanBlock)(BOOL success);
typedef void (^SBSetFoldersOperationBlock)(NSSet <SBFolder *>* _Nullable  addedFolders, NSSet <SBFolder *>* _Nullable  removedFolders);
typedef void (^SBReceiptsArrayBlock)(NSArray<SBReceipt *> * _Nullable receipts);
typedef void (^SBReceiptBlock)(SBReceipt * _Nullable receipt);


@interface SBReceiptOperation : NSObject<UIAlertViewDelegate>

+ (NSURLSessionDataTask * _Nonnull)uploadImageData:(NSData * _Nonnull)imageData
                  withPrivateMetaData:(SBLPrivateMetaData * _Nullable)privateMetaData
                   withSharedMetaData:(SBLSharedMetaData * _Nullable)sharedMetaData
                      successCallback:(SBOperationSuccessBlock _Nonnull)successCallback
                        errorCallback:(SBOperationErrorBlock _Nullable)errorCallback;

+ (void)getReceiptWithID:(NSString * _Nonnull)ID
         successCallback:(SBOperationSuccessBlock _Nonnull)successCallback
           errorCallback:(SBOperationErrorBlock _Nullable)errorCallback;

+ (NSURLSessionDataTask * _Nonnull)updateReceiptWithTemporaryParams:(NSDictionary * _Nonnull)params
                                              andReceiptId:(NSString * _Nonnull)receiptID
                                       withSuccessCallback:(SBOperationSuccessBlock _Nonnull)successCallback
                                             errorCallback:(SBOperationErrorBlock _Nullable)errorCallback;

+ (NSURLSessionDataTask * _Nonnull)deleteReceipt:(SBReceipt * _Nonnull)receipt
                          withSuccessCallback:(SBOperationSuccessBlock _Nonnull)successCallback
                                errorCallback:(SBOperationErrorBlock _Nullable)errorCallback;

+ (void)deleteReceipts:(NSSet <SBReceipt *>* _Nonnull)receipts
          withSuccessCallback:(SBOperationSuccessBlock _Nonnull)successCallback
                errorCallback:(SBOperationErrorBlock _Nullable)errorCallback;

+ (void)receiptsWithFilters:(SBSearchFilter * _Nullable)filters
                     cursor:(NSInteger)index
                    success:(SBOperationSuccessBlock _Nonnull)successCallback
                      error:(SBOperationErrorBlock _Nullable)errorCallback;

+ (NSError * _Nullable)getAllReceiptsForDateRange:(SBDateRange * _Nonnull)dateRange
                     populatingReceipts:(NSMutableArray <SBReceipt *> * _Nonnull)receipts
                       startingAtCursor:(NSInteger)cursor;

+ (NSError * _Nullable)getAllReceiptsForExternalTransactions:(NSArray<SBExternalAccountTransaction *> * _Nonnull)transactions
                                    populatingReceipts:(NSMutableArray <SBReceipt *> * _Nonnull)receipts
                                      startingAtCursor:(NSInteger)cursor;



+ (NSURLSessionDataTask * _Nonnull)updateReceiptWithParameters:(NSDictionary * _Nonnull)params
                                  withSuccessCallback:(SBOperationSuccessBlock _Nonnull)successCallback
                                        errorCallback:(SBOperationErrorBlock _Nullable)errorCallback;

+ (NSURLSessionDataTask * _Nonnull)editReceiptWithParameters:(NSDictionary * _Nonnull)params
                                withSuccessCallback:(SBOperationSuccessBlock _Nonnull)successCallback
                                      errorCallback:(SBOperationErrorBlock _Nullable)errorCallback;

+ (NSURLSessionDataTask * _Nonnull)updateReceipt:(SBReceipt * _Nonnull)receipt
                                 isRecentlyAdded:(BOOL)recentlyAdded
                             withSuccessCallback:(SBOperationSuccessBlock _Nonnull)successCallback
                                   errorCallback:(SBOperationErrorBlock _Nullable)errorCallback;


+ (void)removeReceipt:(SBReceipt * _Nonnull)receipt
           fromFolder:(SBFolder * _Nonnull)folder
  withSuccessCallback:(SBOperationSuccessBlock _Nonnull) _NonnullsuccessCallback
        errorCallback:(SBOperationErrorBlock _Nullable)errorCallback;

+ (void)getCategoriesForReceiptsWithSuccessCallback:(SBOperationSuccessBlock _Nonnull)successCallback
                                      errorCallback:(SBOperationErrorBlock _Nullable)errorCallback;

+ (void)getCurrenciesWithSuccessCallback:(SBOperationSuccessBlock _Nonnull)successCallback
                           errorCallback:(SBOperationErrorBlock _Nullable)errorCallback;


+ (void)addReceipts:(NSSet <SBReceipt *> * _Nonnull)receipts
           toFolder:(SBFolder * _Nonnull)folder
withSuccessCallback:(SBOperationSuccessBlock _Nullable)successCallback
      errorCallback:(SBOperationErrorBlock _Nullable)errorCallback;

+ (void)setFolders:(NSSet <SBFolder *> * _Nonnull)folders
        forReceipt:(SBReceipt * _Nonnull)receipt
           success:(SBSetFoldersOperationBlock _Nullable)successCallback
             error:(SBOperationErrorBlock _Nullable)errorCallback;

@end
