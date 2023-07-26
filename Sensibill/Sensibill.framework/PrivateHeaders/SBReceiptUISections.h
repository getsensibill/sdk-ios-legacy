//
//  SBReceiptUISections.h
//
//  Created by   on 2015-10-12
//  Copyright (c) 2015 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@class SBReceiptUISectionHeader;

@interface SBReceiptUISections : NSObject <NSSecureCoding, NSCopying>

@property (nonatomic, strong) NSArray *rows;
@property (nonatomic, strong) NSString *type;
@property (nonatomic, strong) SBReceiptUISectionHeader *header;
@property (nonatomic, strong) NSString *color;

+ (instancetype)modelObjectWithDictionary:(NSDictionary *)dict;
- (instancetype)initWithDictionary:(NSDictionary *)dict;
- (NSDictionary *)dictionaryRepresentation;

@end
