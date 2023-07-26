//
//  SBReceiptUITopBar.h
//
//  Created by   on 2015-10-12
//  Copyright (c) 2015 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface SBReceiptUITopBar : NSObject <NSSecureCoding, NSCopying>

@property (nonatomic, strong) UIColor *textColor;
@property (nonatomic, strong) UIColor *color;
@property (nonatomic, strong) NSString *image;
@property (nonatomic, strong) NSString *text;

+ (instancetype)modelObjectWithDictionary:(NSDictionary *)dict;
- (instancetype)initWithDictionary:(NSDictionary *)dict;
- (NSDictionary *)dictionaryRepresentation;

@end
