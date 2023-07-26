//
//  SearchConstants.h
//  ReceitpsApp
//
//  Created by Arsh Aulakh BHouse on 24/09/15.
//  Copyright © 2015 Sensibill. All rights reserved.
//

#import <UIKit/UIKit.h>

#ifndef SearchConstants_h
#define SearchConstants_h

typedef enum : NSUInteger {
    SBPaymentFilterTypeUndefined,
	SBPaymentFilterTypeCash,
	SBPaymentFilterTypeCredit,
	SBPaymentFilterTypeDebit,
	SBPaymentFilterTypeGiftCard
} SBPaymentFilterType;

typedef enum : NSUInteger {
	SBFilterOptionReturn = 1,
	SBFilterOptionWarranty
} SBFilterOption;

#import "SBCurrency.h"
#import "SBCategory.h"

#endif
