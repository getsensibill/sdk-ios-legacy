//
//  SBReceiptUIOriginal.h
//
//  Created by   on 2015-10-13
//  Copyright (c) 2015 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SBReceiptUIOriginal : NSObject <NSSecureCoding, NSCopying>

@property (nonatomic, strong) NSString *url;
@property (nonatomic, strong) NSString *type;

+ (instancetype)modelObjectWithDictionary:(NSDictionary *)dict;
- (instancetype)initWithDictionary:(NSDictionary *)dict;
- (NSDictionary *)dictionaryRepresentation;

@end
