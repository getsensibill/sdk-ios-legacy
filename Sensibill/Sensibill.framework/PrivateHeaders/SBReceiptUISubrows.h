//
//  SBReceiptUISubrows.h
//
//  Created by   on 2015-10-12
//  Copyright (c) 2015 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface SBReceiptUISubrows : NSObject <NSSecureCoding, NSCopying>

@property (nonatomic, strong, nullable) NSString *value;
@property (nonatomic, strong, nullable) NSString *text;
@property (nonatomic, strong, nullable) NSString *textStyle;
@property (nonatomic, strong, nullable) UIColor *backgroundColor;

+ (instancetype _Nullable )modelObjectWithDictionary:(NSDictionary *_Nullable)dict;
- (instancetype _Nullable )initWithDictionary:(NSDictionary *_Nullable)dict;
- (NSDictionary *_Nullable)dictionaryRepresentation;

@end
