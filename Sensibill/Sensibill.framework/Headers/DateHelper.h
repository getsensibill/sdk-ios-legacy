//
//  DateHelper.h
//  ReceitpsApp
//
//  Created by Arsh Aulakh iOS on 05/09/15.
//  Copyright (c) 2015 Sensibill. All rights reserved.
//

#import <Foundation/Foundation.h>

@class SBReminder;

@interface DateHelper : NSObject

+ (instancetype _Nonnull)sharedInstance;

@property (nonatomic, strong, readonly, nonnull) NSDateFormatter *customDateFormatter;

- (NSString * _Nonnull)getApiDateTimeStringFromDate:(NSDate * _Nonnull)date;
- (NSString * _Nonnull)getTimelessDateStringFromDate:(NSDate * _Nonnull)date;
- (NSString * _Nonnull)getShortDateStringFromDate:(NSDate * _Nonnull)date;
- (NSString * _Nonnull)getTableHeaderDateStringFromDate:(NSDate * _Nonnull)date;
- (NSString * _Nonnull)getErrorReceiptDateFromDate:(NSDate * _Nonnull)date;

- (NSDate * _Nonnull)getServerDateFromString:(NSString * _Nonnull)dateString;
- (NSDate * _Nonnull)getDateFromTimelessString:(NSString * _Nonnull)timelessDateString;
- (NSDate * _Nonnull)minimumAllowableDate;
- (NSDate * _Nonnull)maximumAllowableDateFromDate:(NSDate * _Nonnull)date;
- (NSDate * _Nonnull)notificationFireDateForReminder:(SBReminder * _Nonnull)reminder;
- (NSDate * _Nonnull)dateByAddingSeconds:(NSInteger)seconds toDate:(NSDate * _Nonnull)date;

- (BOOL)isExpiredDate:(NSDate * _Nonnull)fromDate;

@end
