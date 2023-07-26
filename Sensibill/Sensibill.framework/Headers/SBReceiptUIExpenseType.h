//
//  SBReceiptUIExpenseType.h
//  Money2020Demo
//
//  Created by Megha Bambra on 2015-10-21.
//  Copyright © 2015 BHouse. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SBReceiptUIExpenseType : NSObject <NSSecureCoding, NSCopying>

@property (nonatomic, strong) NSString *text;
@property (nonatomic, strong) NSString *icon;
@property (nonatomic, strong) NSString *color;
+ (instancetype)modelObjectWithDictionary:(NSDictionary *)dict;
- (instancetype)initWithDictionary:(NSDictionary *)dict;
- (NSDictionary *)dictionaryRepresentation;

@end
