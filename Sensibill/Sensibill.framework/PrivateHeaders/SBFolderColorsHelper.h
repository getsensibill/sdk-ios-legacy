//
//  SBFolderColors.h
//  ReceitpsApp
//
//  Created by Arsh Aulakh BHouse on 27/09/15.
//  Copyright © 2015 Sensibill. All rights reserved.
//

#import <UIKit/UIKit.h>

//Colors
#define ROUNDED_COLOR_ONE [UIColor colorWithRed:0.46 green:0.46 blue:0.46 alpha:1.0]
#define ROUNDED_COLOR_TWO [UIColor colorWithRed:0.09 green:0.51 blue:0.52 alpha:1.0]
#define ROUNDED_COLOR_THREE [UIColor colorWithRed:0.19 green:0.52 blue:0.11 alpha:1.0]
#define ROUNDED_COLOR_FOUR [UIColor colorWithRed:0.36 green:0.48 blue:0.54 alpha:1.0]
#define ROUNDED_COLOR_FIVE [UIColor colorWithRed:0.73 green:0.36 blue:0.00 alpha:1.0]
#define ROUNDED_COLOR_SIX [UIColor colorWithRed:0.67 green:0.28 blue:0.74 alpha:1.0]
#define ROUNDED_COLOR_SEVEN [UIColor colorWithRed:0.86 green:0.16 blue:0.48 alpha:1.0]
#define ROUNDED_COLOR_EIGHT [UIColor colorWithRed:0.03 green:0.49 blue:0.71 alpha:1.0]
#define ROUNDED_COLOR_NINE [UIColor colorWithRed:0.55 green:0.44 blue:0.40 alpha:1.0]
#define ROUNDED_COLOR_TEN [UIColor colorWithRed:0.26 green:0.26 blue:0.26 alpha:1.0]

@interface SBFolderColorsHelper : NSObject

+ (NSArray<UIColor *> *_Nonnull)folderColors;

@end
