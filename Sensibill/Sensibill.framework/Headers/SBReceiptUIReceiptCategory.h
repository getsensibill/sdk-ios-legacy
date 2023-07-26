//
//  SBReceiptUIReceiptCategory.h
//
//  Created by   on 2015-10-13
//  Copyright (c) 2015 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>



@interface SBReceiptUIReceiptCategory : NSObject <NSSecureCoding, NSCopying>

@property (nonatomic, strong) NSString *text;
@property (nonatomic, strong) NSString *smallIcon; //old data structure
@property (nonatomic, strong) NSString *largeIcon; //old data structgure
@property (nonatomic, strong) NSString *icon;

+ (instancetype)modelObjectWithDictionary:(NSDictionary *)dict;
- (instancetype)initWithDictionary:(NSDictionary *)dict;
- (NSDictionary *)dictionaryRepresentation;

@end
