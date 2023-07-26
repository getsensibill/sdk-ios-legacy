//
//  SBDateRange.h
//  Sensibill
//
//  Created by Matt Moncur on 2017-02-02.
//
//

#import <Foundation/Foundation.h>

@interface SBDateRange : NSObject

@property (strong, nonatomic) NSDate *from;
@property (strong, nonatomic) NSDate *to;

+ (SBDateRange *)dateRangeForDates:(NSArray <NSDate *>*)dates;
+ (SBDateRange *)weekOfDate:(NSDate *)date;

- (id)initWithFromDate:(NSDate *)fromDate andToDate:(NSDate *)toDate;
- (id)initWithDate:(NSDate *)fromDate daysBefore:(NSInteger)before daysAfter:(NSInteger)after;

- (NSString *)stringRepresentation;

- (NSInteger)numberOfDays;

- (BOOL)containsDate:(NSDate *)date;

- (void)addPaddingWithDays:(NSInteger)numberOfDays;

@end
