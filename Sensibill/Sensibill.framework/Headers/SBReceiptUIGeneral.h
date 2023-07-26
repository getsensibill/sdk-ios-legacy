//
//  SBReceiptUIGeneral.h
//  Pods
//
//  Created by Megha Bambra on 2016-01-27.
//
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface SBReceiptUIGeneral : NSObject <NSSecureCoding, NSCopying>

@property (nonatomic, strong, nullable) UIColor *backgroundColor;
@property (nonatomic, strong, nullable) UIColor *generalTextColor;
@property (nonatomic, assign) BOOL hasEnhanced;
@property (nonatomic, assign) BOOL isValidationRequired;
+ (instancetype _Nullable )modelObjectWithDictionary:(NSDictionary *_Nullable)dict;
- (instancetype _Nullable )initWithDictionary:(NSDictionary *_Nullable)dict;
- (NSDictionary *_Nullable)dictionaryRepresentation;

@end
