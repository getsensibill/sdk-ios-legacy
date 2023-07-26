//
//  SBCategory.h
//  ReceitpsApp
//
//  Created by Arsh Aulakh BHouse on 25/09/15.
//  Copyright Â© 2015 Sensibill. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SBCategory : NSObject

@property (nonatomic, readonly, nullable) NSString *code;

+ (NSSet<SBCategory *> * _Nonnull)allCategories;
+ (SBCategory * _Nullable)categoryWithCode:(NSString * _Nonnull)code;

- (instancetype _Nonnull)init __attribute((unavailable("Use the 'categoryWithCode:' method instead.")));

@end
