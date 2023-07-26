//
//  SBReceiptUIMerchantInfo.h
//
//  Created by   on 2015-10-12
//  Copyright (c) 2015 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>



@interface SBReceiptUIMerchantInfo : NSObject <NSSecureCoding, NSCopying>

@property (nonatomic, strong) NSArray *details;
@property (nonatomic, strong) NSString *text;
@property (nonatomic, strong) NSString *icon;

+ (instancetype)modelObjectWithDictionary:(NSDictionary *)dict;
- (instancetype)initWithDictionary:(NSDictionary *)dict;
- (NSDictionary *)dictionaryRepresentation;

@end
