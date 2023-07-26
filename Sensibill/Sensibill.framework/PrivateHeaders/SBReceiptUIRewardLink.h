//
//  SBReceiptUIRewardLink.h
//
//  Created by   on 2015-11-12
//  Copyright (c) 2015 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SBReceiptUIRewardLink : NSObject <NSSecureCoding, NSCopying>

@property (nonatomic, strong) NSString *url;
@property (nonatomic, strong) NSString *text;
@property (nonatomic, strong) NSString *color;

+ (instancetype)modelObjectWithDictionary:(NSDictionary *)dict;
- (instancetype)initWithDictionary:(NSDictionary *)dict;
- (NSDictionary *)dictionaryRepresentation;

@end
