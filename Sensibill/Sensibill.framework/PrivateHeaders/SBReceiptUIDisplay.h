//
//  SBReceiptUIDisplay.h
//
//  Created by   on 2015-10-12
//  Copyright (c) 2015 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@class SBReceiptUIFooter, SBReceiptUIHeader, SBReceiptUIOrder, SBReceiptUISummary, SBReceiptUIOriginal, SBReceiptUIMenu, SBReceiptUIRewards, SBReceiptUIGeneral, SBReceiptUIBarcodes, SBReceiptUIReminders;

@interface SBReceiptUIDisplay : NSObject <NSSecureCoding, NSCopying>

@property (nonatomic, strong) SBReceiptUIFooter *footer;
@property (nonatomic, strong) SBReceiptUIHeader *header;
@property (nonatomic, strong) SBReceiptUIBarcodes *barcodes;
@property (nonatomic, strong) SBReceiptUIReminders *reminders;
@property (nonatomic, strong) SBReceiptUIOrder *order;
@property (nonatomic, strong) NSArray *sections;
@property (nonatomic, strong) SBReceiptUISummary *summary;
@property (nonatomic, strong) SBReceiptUIOriginal *original;
@property (nonatomic, strong) SBReceiptUIMenu *menu;
@property (nonatomic, strong) SBReceiptUIGeneral *general;
@property (nonatomic, strong) NSString *text;
@property (nonatomic, strong) NSArray *rewards;

+ (instancetype)modelObjectWithDictionary:(NSDictionary *)dict;
- (instancetype)initWithDictionary:(NSDictionary *)dict;
- (NSDictionary *)dictionaryRepresentation;

@end
