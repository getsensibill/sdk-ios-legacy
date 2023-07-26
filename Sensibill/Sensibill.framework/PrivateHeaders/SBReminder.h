//
//  SBReminder.h
//  SensibillSDK
//
//  Created by Nik Sawtschuk
//  Copyright © 2017 Sensibill. All rights reserved.
//

#import <Foundation/Foundation.h>

@class SBReceipt;
@class SBLDatePeriod;

typedef NS_ENUM(NSInteger, SBReminderType) {
    SBReminderTypeNotSet,
    SBReminderTypeReturn,
    SBReminderTypeWarranty
};

#define kSBReminderTypeReturn @"return"
#define kSBReminderTypeWarranty @"warranty"
#define kSBReminderTypeNotSet @"notSet"

@interface SBReminder : NSObject <NSSecureCoding>

#pragma mark - Reminder Model -
/**
 *		External ID
 */
@property (strong, nonatomic, nullable) NSString *ID;

/**
 *		Receipt ID
 */
@property (strong, nonatomic, nullable) NSString *receiptID;

/**
 *      Receipt Object
 */
@property (strong, nonatomic, nullable) SBReceipt *receipt;

/**
 *      Reminder Type
 */
@property (nonatomic) SBReminderType type;

/**
 *		Creation date
 */
@property (strong, nonatomic, readonly, nullable) NSDate *createdAt;

/**
 *		Updated date
 */
@property (strong, nonatomic, readonly, nullable) NSDate *updatedAt;

/**
 *      Reminder Date Information
 */
@property (strong, nonatomic, nullable) SBLDatePeriod *reminderDatePeriod;

/**
 *		Customized Note
 */
@property (strong, nonatomic, nullable) NSString *note;

/**
 *		Reminder Notification Date
 */
@property (strong, nonatomic, nullable) NSString *reminderDate;

/**
 *		Reminder Notification Message
 */
@property (strong, nonatomic, nullable) NSString *reminderMessage;

/**
 *		Reminder Notification Data
 */
@property (strong, nonatomic, nullable) NSString *reminderReceiptData;

@property (strong, nonatomic, nullable) NSString *reminderLocalNotificationMessage;

#pragma mark - Inititialization -
- (id _Nullable)initWithDictionary:(NSDictionary * _Nonnull)dict;
- (NSDictionary * _Nonnull)dictionaryRepresentationForUseInRequest:(BOOL)formatForRequest;

+ (SBReminderType)reminderTypeFromString:(NSString * _Nullable)type;
+ (NSString * _Nonnull)reminderStringfromType:(SBReminderType)type;

@end
