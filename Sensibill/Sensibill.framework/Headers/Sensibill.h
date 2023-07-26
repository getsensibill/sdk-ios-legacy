//
//  Sensibill.h
//  Sensibill
//
//  Created by Sensibill on 2018-04-19.
//  Copyright © 2018 Sensibill. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for Sensibill.
FOUNDATION_EXPORT double SensibillVersionNumber;

//! Project version string for Sensibill.
FOUNDATION_EXPORT const unsigned char SensibillVersionString[];

#import <Sensibill/SBDataEvent.h>
#import <Sensibill/SBExternalAccountTransaction.h>
#import <Sensibill/SensibillTransactionMatcher.h>
#import <Sensibill/SBAPIClient.h>
#import <Sensibill/SBSessionConfig.h>

// The following classes shouldn't be public
#import <Sensibill/SBNotificationHandler.h>
#import <Sensibill/SBUserOperation.h>
#import <Sensibill/SBError.h>
#import <Sensibill/SBCurrency.h>
#import <Sensibill/SBCategory.h>
#import <Sensibill/SBSearchFilter.h>

// SBReceipt Objects
#import <Sensibill/SBReceipt.h>
#import <Sensibill/SBReceiptUIGeneral.h>
#import <Sensibill/SBReceiptUISummary.h>
#import <Sensibill/SBReceiptUIHeader.h>
#import <Sensibill/SBReceiptUIMerchantInfo.h>
#import <Sensibill/SBReceiptUITopBar.h>
#import <Sensibill/SBReceiptUIReceiptCategory.h>
#import <Sensibill/SBReceiptUIExpenseType.h>
#import <Sensibill/SBReceiptUIOriginal.h>
#import <Sensibill/SBReceiptUIFooter.h>

// From modulemap

// SensibillPrivate
#import <Sensibill/SBFolder.h>
#import <Sensibill/SBClientInfo.h>
#import <Sensibill/SBDateRange.h>
#import <Sensibill/SBReceiptOperation.h>
#import <Sensibill/DateHelper.h>
#import <Sensibill/SBNonReceiptEmail.h>
#import <Sensibill/SBEmailOperation.h>
#import <Sensibill/SBSecurityPolicy.h>
