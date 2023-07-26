//
//  SBReceiptUIDetails.h
//
//  Created by   on 2015-10-12
//  Copyright (c) 2015 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SBReceiptUIDetails : NSObject <NSSecureCoding, NSCopying>

@property (nonatomic, strong) NSString *value;
@property (nonatomic, strong) NSString *text;
@property (nonatomic, strong) NSString *type;

+ (instancetype)modelObjectWithDictionary:(NSDictionary *)dict;
- (instancetype)initWithDictionary:(NSDictionary *)dict;
- (NSDictionary *)dictionaryRepresentation;

@end
