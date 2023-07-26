//
//  SensibillTransactionMatcher.h
//  SensibillSampleSDK
//
//  Created by Sensibill on 2017-10-26.
//  Copyright © 2017 Sensibill. All rights reserved.
//

#import <Foundation/Foundation.h>

@class SBExternalAccountTransaction;

/**
 * Protocol outlining  the functionality of SensibillTransactionMatcher
 */
@interface SensibillTransactionMatcher : NSObject

/**
 * Returns shared instance of SensibillTransactionMatcher
 * @return SensibillTransactionMatcher
 */
+ (instancetype _Nonnull)sharedInstance;

/**
 * Matches Receipts to Banking Account Transactions
 * @param transactions array of External Account Transactions to match receipts against
 * @param completion callback that will be called when matching has been completed
 */
- (void)receiptsForTransactions: (NSArray<SBExternalAccountTransaction *> * _Nonnull)transactions
                     completion:(void (^_Nonnull)(NSDictionary * _Nullable matches, NSError * _Nullable error))completion;

/**
 * Matches Receipts to Banking Account Transactions with the option to force SDK to perform checks regardless of date range of transactions
 * @param transactions array of External Account Transactions to match receipts against
 * @param ignoreDateRangeRestriction boolean passed to determine if data range should be considered. True will ignore date restrictions, false will consider data restrictions
 * @param completion callback that will be called when matching has been completed
 */
- (void)receiptsForTransactions: (NSArray<SBExternalAccountTransaction *> * _Nonnull)transactions
   ignoringDateRangeRestriction:(BOOL)ignoreDateRangeRestriction
                     completion:(void (^_Nonnull)(NSDictionary * _Nullable matches, NSError * _Nullable error))completion;

@end
