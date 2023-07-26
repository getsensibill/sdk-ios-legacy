//
//  SBReceiptUIOrder.h
//
//  Created by   on 2015-10-12
//  Copyright (c) 2015 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@class SBReceiptUINumber, SBReceiptUIDelivery;

@interface SBReceiptUIOrder : NSObject <NSSecureCoding, NSCopying>

@property (nonatomic, strong) SBReceiptUINumber *number;
@property (nonatomic, strong) NSString *status;
@property (nonatomic, strong) SBReceiptUIDelivery *delivery;
@property (nonatomic, strong) NSArray *billToAddress;

+ (instancetype)modelObjectWithDictionary:(NSDictionary *)dict;
- (instancetype)initWithDictionary:(NSDictionary *)dict;
- (NSDictionary *)dictionaryRepresentation;

@end
