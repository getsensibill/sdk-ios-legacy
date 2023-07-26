//
//  SBReceiptUIReminders.h
//  Pods
//
//  Created by Nik Sawtschuk on 2017-04-12.
//
//

#import <UIKit/UIKit.h>

@interface SBReceiptUIRemindersRemindLaterActionButton : NSObject <NSSecureCoding, NSCopying>

@property (nonatomic, strong) NSString *text;
@property (nonatomic, strong) UIColor *textColor;
@property (nonatomic, strong) NSString *textStyle;
@property (nonatomic, strong) UIColor *backgroundColor;

+ (instancetype)modelObjectWithDictionary:(NSDictionary *)dict;
- (instancetype)initWithDictionary:(NSDictionary *)dict;
- (NSDictionary *)dictionaryRepresentation;

@end

@interface SBReceiptUIRemindersRow : NSObject <NSSecureCoding, NSCopying>

@property (nonatomic) CGFloat percentage;
@property (nonatomic, strong) NSString *type;
@property (nonatomic, strong) NSString *highlightText;
@property (nonatomic, strong) NSString *text;
@property (nonatomic, strong) NSString *reminderID;
@property (nonatomic, strong) NSString *reminderIconURL;
@property (nonatomic, strong) UIColor *textColor;
@property (nonatomic, strong) UIColor *highlightTextColor;
@property (nonatomic, strong) UIColor *progressBarColor;
@property (nonatomic, strong) UIColor *progressBarBackgroundColor;
@property (nonatomic, strong) SBReceiptUIRemindersRemindLaterActionButton *remindLaterActionButton;

+ (instancetype)modelObjectWithDictionary:(NSDictionary *)dict;
- (instancetype)initWithDictionary:(NSDictionary *)dict;
- (NSDictionary *)dictionaryRepresentation;

@end

@interface SBReceiptUIReminders : NSObject <NSSecureCoding, NSCopying>

@property (nonatomic, strong) NSString *highlightTextStyle;
@property (nonatomic, strong) NSString *textStyle;
@property (nonatomic, strong) NSArray<SBReceiptUIRemindersRow *> *rows;

+ (instancetype)modelObjectWithDictionary:(NSDictionary *)dict;
- (instancetype)initWithDictionary:(NSDictionary *)dict;
- (NSDictionary *)dictionaryRepresentation;

@end
