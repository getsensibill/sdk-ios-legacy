//
//  SBSearchFilter.h
//  Pods
//
//  Created by Sensibill on 2017-07-27.
//
//

#import <Foundation/Foundation.h>

@class SBFolder, SBExternalAccountTransaction, SBCurrency, SBCategory;

@interface SBSearchFilter : NSObject <NSCopying>

@property (nonatomic, strong, nonnull) SBFolder *folder;
@property (nonatomic, strong, nonnull) SBFolder *exludingFolder;

@property (nonatomic, strong, nonnull) NSMutableArray <SBCurrency *> *currencies;
@property (nonatomic, strong, nonnull) NSMutableArray <SBCategory *> *categories;
@property (nonatomic, strong, nonnull) NSMutableArray <NSNumber *> *paymentMethods;
@property (nonatomic, strong, nonnull) NSMutableArray <NSNumber *> *expenseTypes;
@property (nonatomic, strong, nonnull) NSMutableArray <NSNumber *> *scheduledReminders;
@property (nonatomic, strong, nonnull) NSMutableArray <SBExternalAccountTransaction *> *externalTransactions;

@property (nonatomic, strong, nullable) NSDate *from;
@property (nonatomic, strong, nullable) NSDate *to;

@property (nonatomic, copy, nullable) NSString *term;
@property (nonatomic) BOOL pendingValidation;
@property (nonatomic) BOOL recentlyAdded;

@property (nonatomic, readonly) BOOL isEmpty;
@property (nonatomic, readonly) BOOL isSearchTermEmpty;
@property (nonatomic, readonly) BOOL requiresBackend;

@property (class, nonatomic, strong, nonnull, readonly) NSSet<NSString *> *allFilterNames;

@property (class, nonatomic, strong, nonnull, readonly) NSString *filterNameRecentlyAdded;
@property (class, nonatomic, strong, nonnull, readonly) NSString *filterNameValidationRequired;
@property (class, nonatomic, strong, nonnull, readonly) NSString *filterNameTriggeredReminders;
@property (class, nonatomic, strong, nonnull, readonly) NSString *filterNameNonReceiptEmails;

- (NSDictionary * _Nonnull)dictionaryRepresentation;

@end


// ExpenseTypeFilter must be declare in Objective-C in order to be used properly by both Swift and Objective-C
typedef NS_OPTIONS(NSInteger, ExpenseTypeFilter) {
    ExpenseTypeFilterUnknown = 1 << 0,
    ExpenseTypeFilterBusiness = 1 << 1,
    ExpenseTypeFilterPersonal = 1 << 2,
};
