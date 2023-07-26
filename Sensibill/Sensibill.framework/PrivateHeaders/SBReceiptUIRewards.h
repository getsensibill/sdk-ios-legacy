//
//  SBReceiptUIRewardRewards.h
//
//  Created by   on 2015-11-12
//  Copyright (c) 2015 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@class SBReceiptUIRewardLink;

@interface SBReceiptUIRewards : NSObject <NSSecureCoding, NSCopying>

@property (nonatomic, strong) SBReceiptUIRewardLink *link;
@property (nonatomic, strong) NSString *icon;
@property (nonatomic, strong) NSArray *rows;
@property (nonatomic, strong) NSString *text;

+ (instancetype)modelObjectWithDictionary:(NSDictionary *)dict;
- (instancetype)initWithDictionary:(NSDictionary *)dict;
- (NSDictionary *)dictionaryRepresentation;

@end
