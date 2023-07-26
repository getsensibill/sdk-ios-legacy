//
//  SBReceipt.h
//  ReceitpsApp
//
//  Created by Arsh Aulakh iOS on 09/09/15.
//  Copyright (c) 2015 Sensibill. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

#define kDefaultAmountValue NSNotFound
#define kBlankAmountValue 0.0

@class SBReceiptListUIDisplay;
@class SBReceiptUIDisplay;
@class SBReminder;
@class SBLDatePeriod;
@class SBLReceiptSummary;
@class SBLTax;
@class SBLPrivateMetaData;

/// Type of receipt
typedef NS_ENUM(NSInteger, SBLReceiptType);

/// Original format of the receipt
typedef NS_ENUM(NSInteger, SBLOriginalFormat);

/// Type of expenses
typedef NS_ENUM(NSInteger, SBLReceiptExpenseType);

/// Details of a single processed receipt
@interface SBReceipt : NSObject <NSSecureCoding>

/// A unique identifier of the receipt.
@property (nonatomic, copy, nullable) NSString *ID;

/// The merchant that issued the receipt
@property (nonatomic, copy, nullable) NSString *merchantName;

/// The date on the receipt
@property (nonatomic, strong, nullable) NSDate *date;

/// The date used when sorting receipts. Is set to `SBReceipt.date`, if available. Otherwise, is set to a date when receipt was uploaded.
@property (nonatomic, strong, nonnull) NSDate *listingSortDate;

/// The date on which receipt was uploaded
@property (nonatomic, strong, nullable) NSDate *arrivalTime;

/// Indicates whether receipt was added recently
@property (nonatomic, assign) BOOL recentlyAdded;

/// True if receipt is pending validation (some required fields are missing)
@property (nonatomic, assign) BOOL isValidationRequired;

/// A list of receipt folders
@property (strong, nonatomic, nonnull) NSMutableArray <NSString*>* folders;

/// The amount to show as the tip (gratuity)
@property (nonatomic, assign) CGFloat tipAmount;

/// The grand total
@property (nonatomic, assign) CGFloat amount;

/// The amount to show as the subtotal
@property (nonatomic, assign) CGFloat subTotalAmount;

/// True, if `subTotalAmount` is missing
@property (nonatomic, assign) BOOL isSubtotalEmpty;

/// Net total amount on UK receipts
@property (nonatomic, assign) CGFloat netTotalAmount;

/// True, if `netTotalAmount` is missing
@property (nonatomic, assign) BOOL isNetTotalEmpty;

/// The amount to show as the sum of all taxes
@property (nonatomic, assign) CGFloat taxAmount;

/// Number of extracted taxes
@property (nonatomic, assign) NSInteger numExtractedTaxes;

/// :nodoc:
@property (readonly, nonnull, nonatomic) NSDictionary *editDictionary;

/// :nodoc:
@property (strong, nonatomic, nullable) SBReceipt *parent;

/// Receipt tax detail.
/// @return returns the taxes detail.
@property (strong, nonatomic, nonnull) NSArray <SBLTax *> *taxes;


/// Receipt UI Display Format
/// @return returns the display format used for rendering in a detail view
@property (strong, nonatomic, nullable) SBReceiptUIDisplay *detailDisplay;

/// Receipt Category.
/// @return returns the receipt category
@property (strong, nonatomic, nullable) NSString *category;

/// Receipt Currency Code.
/// @return returns the receipt currency Code
@property (strong, nonatomic, nullable) NSString *currencyCode;

/// Receipt Country Code.
/// @return returns the receipt country Code
@property (copy, nonatomic, nullable) NSString *countryCode;


/// Receipt render URL.
/// @return returns the receipt's image URL
@property (strong, nonatomic, nullable) NSString *renderURL;


/// Receipt render URL Type.
/// @return returns the receipt's image URL Type
@property (strong, nonatomic, nullable) NSString *renderURLType;

#pragma mark - Merchant

/// Merchant's ID
/// @return returns merchant's ID
@property (strong, nonatomic, nullable) NSString *merchantID;


#pragma mark Shared Metadata

/// Receipt shared metadata's note.
/// @return returns the receipt's shared metadata's note
@property (strong, nonatomic, nullable) NSString *note;

/// Receipt Email ID
/// @return returns Receipt Email ID
@property (strong, nonatomic, nullable) NSString *receiptEmailID;

/// Receipt shared metadata's expense type.
/// @return returns the receipt's shared metadata's expense type
@property (nonatomic, assign) SBLReceiptExpenseType expenseType;

#pragma mark Additional Properties

/// Receipt Folder Colors.
/// @return returns a a list of `UIColor`s available for folders
@property (nonatomic, nonnull, strong) NSMutableArray <UIColor *> *folderColors;

/// Original format of the receipt :nodoc:
@property (nonatomic, assign) SBLOriginalFormat receiptEmailType;

/// :nodoc:
@property (nonatomic, readonly, getter = editTaxTipDictionary, nullable) NSDictionary *editTaxTipDictionary;

/// A list of the reminders
@property (strong, nonatomic, nullable) NSMutableArray<SBReminder *> *reminders;

/// Return/exchange time period
@property (strong, nonatomic, nullable) SBLDatePeriod *returnExchangePeriod;

/// Warranty time period
@property (strong, nonatomic, nullable) SBLDatePeriod *warrantyPeriod;

/// Allows to specify receipt's external account transaction id
@property (strong, nonatomic, nullable) SBLPrivateMetaData *privateMetaData;

#pragma mark Initialization

/// :nodoc:
- (instancetype _Nullable)initWithDictionary:(NSDictionary *_Nonnull)dict;

/// :nodoc:
- (instancetype _Nullable)initWithReceipt:(SBLReceiptSummary *_Nullable)receipt;

#pragma mark Helpers

#pragma mark - Manager

/// Save receipts to persistent store
+ (BOOL)saveReceipts:(NSMutableArray *_Nonnull)receipts;


/// Get all receipts from persistent store
+ (NSMutableArray *_Nonnull)getAllReceipts;

/// :nodoc:
+ (void)updateReceipt:(SBReceipt * _Nonnull)receipt
              changes:(void (^_Nonnull)(SBReceipt * _Nullable))changes
              success:(void (^_Nonnull)(SBReceipt * _Nullable))successCallback
                error:(void (^_Nonnull)(NSError * _Nullable))errorCallback;

/// Default total amount set when no value is returned from the server
+ (CGFloat)defaultAmountValue;

/// :nodoc:
- (BOOL)isEqualToReceipt:(SBReceipt * _Nullable)receipt;

@end
