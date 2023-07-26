//
//  SBReceiptUIHeader.h
//
//  Created by   on 2015-10-13
//  Copyright (c) 2015 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@class SBReceiptUIMerchantInfo, SBReceiptUITopBar, SBReceiptUIReceiptCategory, SBReceiptUIExpenseType;

@interface SBReceiptUIHeader : NSObject <NSSecureCoding, NSCopying>

@property (nonatomic, strong) NSString *textStyle;
@property (nonatomic, strong) NSString *tearColor;
@property (nonatomic, strong) NSString *color;
@property (nonatomic, strong) NSString *tearImage;
@property (nonatomic, strong) NSString *icon;
@property (nonatomic, strong) SBReceiptUIMerchantInfo *merchantInfo;
@property (nonatomic, strong) SBReceiptUITopBar *topBar;
@property (nonatomic, strong) NSString *text;
@property (nonatomic, strong) NSString *backgroundImage;
@property (nonatomic, strong) SBReceiptUIReceiptCategory *receiptCategory;
@property (nonatomic, strong) SBReceiptUIExpenseType *expenseType;
@property (nonatomic, strong) NSString *backgroundTint;
@property (nonatomic, assign) double highlightText;
@property (nonatomic, strong) NSString *iconStyle;

+ (instancetype)modelObjectWithDictionary:(NSDictionary *)dict;
- (instancetype)initWithDictionary:(NSDictionary *)dict;
- (NSDictionary *)dictionaryRepresentation;

@end
