//
//  SBReceiptUISummary.h
//
//  Created by   on 2015-10-12
//  Copyright (c) 2015 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface SBReceiptUISummary : NSObject <NSSecureCoding, NSCopying>

@property (nonatomic, strong, nullable) NSString *amount;
@property (nonatomic, strong, nullable) UIColor *amountColor;
@property (nonatomic, strong, nullable) NSString *time;
@property (nonatomic, strong, nullable) UIColor *clockColor;
@property (nonatomic, strong, nullable) UIColor *dividingDotColor;
@property (nonatomic, strong, nullable) UIColor *dividerColor;
@property (nonatomic, strong, nullable) NSString *dateLine1;
@property (nonatomic, strong, nullable) NSString *message;
@property (nonatomic, strong, nullable) NSString *backgroundImage;
@property (nonatomic, strong, nullable) NSString *dateLine2;
@property (nonatomic, strong, nullable) NSString *note;
@property (nonatomic, strong, nullable) NSArray *tenderIcons;
@property (nonatomic, assign) BOOL hasEnhanced;

+ (instancetype _Nullable )modelObjectWithDictionary:(NSDictionary *_Nullable)dict;
- (instancetype _Nullable )initWithDictionary:(NSDictionary *_Nullable)dict;
- (NSDictionary *_Nullable)dictionaryRepresentation;

@end
