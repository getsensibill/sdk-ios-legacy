//
//  SBReceiptUIFooter.h
//
//  Created by   on 2015-10-12
//  Copyright (c) 2015 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SBReceiptUIFooter : NSObject <NSSecureCoding, NSCopying>

@property (nonatomic, strong) NSString *sensibillImage;
@property (nonatomic, strong) NSString *taglineImage;

+ (instancetype)modelObjectWithDictionary:(NSDictionary *)dict;
- (instancetype)initWithDictionary:(NSDictionary *)dict;
- (NSDictionary *)dictionaryRepresentation;

@end
