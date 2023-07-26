//
//  SBCurrency.h
//  ReceitpsApp
//
//  Created by Arsh Aulakh BHouse on 25/09/15.
//  Copyright © 2015 Sensibill. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SBCurrency : NSObject

/**
 *	Currency Name (e.g Canadian Dollars, US Dollars)
 */
@property (nonatomic, readonly, nonnull) NSString * name;

/**
 *	Currency Symbol (e.g $)
 */
@property (nonatomic, readonly, nonnull) NSString *symbol;

/**
 *	Currency Code (e.g CAD, USD)
 */
@property (nonatomic, readonly, nonnull) NSString *code;

/**
 *	Initialize with Custom Parameters
 */
- (id _Nullable)initWithName:(NSString * _Nonnull)name symbol:(NSString * _Nonnull)symbol code:(NSString * _Nonnull)code NS_DESIGNATED_INITIALIZER;


+ (NSArray * _Nonnull)allCurrencies;
+ (SBCurrency * _Nullable)currencyWithCode:(NSString * _Nonnull)code;

+ (NSString * _Nullable)preferredCurrencyCode;

@end
