//
//  SBReceiptUISectionHeader.h
//
//  Created by   on 2015-10-12
//  Copyright (c) 2015 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SBReceiptUISectionHeader : NSObject <NSSecureCoding, NSCopying>

@property (nonatomic, strong) NSString *color;
@property (nonatomic, assign) double highlightText;
@property (nonatomic, strong) NSString *icon;
@property (nonatomic, strong) NSString *textStyle;
@property (nonatomic, strong) NSString *iconStyle;
@property (nonatomic, strong) NSString *text;
@property (nonatomic, strong) NSString *backgroundColor;

+ (instancetype)modelObjectWithDictionary:(NSDictionary *)dict;
- (instancetype)initWithDictionary:(NSDictionary *)dict;
- (NSDictionary *)dictionaryRepresentation;

@end
