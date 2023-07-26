//
//  SBReceiptUIMenu.h
//
//  Created by   on 2015-10-12
//  Copyright (c) 2015 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SBReceiptUIMenu : NSObject <NSSecureCoding, NSCopying>

@property (nonatomic, strong) NSString *image;
@property (nonatomic, assign) BOOL buttonDark;

+ (instancetype)modelObjectWithDictionary:(NSDictionary *)dict;
- (instancetype)initWithDictionary:(NSDictionary *)dict;
- (NSDictionary *)dictionaryRepresentation;

@end
