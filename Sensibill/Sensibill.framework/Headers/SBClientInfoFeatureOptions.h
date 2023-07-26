//
//  SBClientInfoFeatureOptions.h
//  Sensibill
//
//  Created by Kiril Strax on 2020-03-30.
//  Copyright © 2020 Sensibill. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, SBFeatureOptionReceiptAccountEmail) {
    SBFeatureOptionReceiptAccountEmailDisabled,
    SBFeatureOptionReceiptAccountEmailOptional,
    SBFeatureOptionReceiptAccountEmailRequired
};

@interface SBClientInfoReceiptEmailDomainsAndAliases : NSObject <NSSecureCoding>

@property (nonatomic, strong, nullable) NSMutableArray<NSString *> *aliases;
@property (nonatomic, strong, nullable) NSString *emailDomain;

- (SBClientInfoReceiptEmailDomainsAndAliases * _Null_unspecified)initWithDictionary:(NSDictionary *_Nonnull)dict;

@end

@interface SBClientInfoFeatureOptions : NSObject <NSSecureCoding>

@property (nonatomic) BOOL enableEnhancedReceiptView;
@property (nonatomic) BOOL showReminders;
@property (nonatomic) BOOL enableMetrics;
@property (nonatomic) BOOL enableExpenseType;
@property (nonatomic) BOOL enableTips;
@property (nonatomic, strong, nullable) NSString *metricsTrackingURL;
@property (nonatomic, strong, nullable) NSString *metricsSiteId;
@property (nonatomic) SBFeatureOptionReceiptAccountEmail featureOptionReceiptAccountEmail;
@property (nonatomic) BOOL enableTags;
@property (nonatomic) BOOL enableNotes;
@property (nonatomic) BOOL enableFolders;
@property (nonatomic) BOOL enableCategories;
@property (nonatomic) BOOL enableOfflineSupport;
@property (nonatomic) BOOL enableNotificationCenter;
@property (nonatomic) BOOL enableBarcodes;
@property (nonatomic) BOOL enablePoweredByLogo;
@property (nonatomic) BOOL enableMonthlyGrouping;
@property (nonatomic) BOOL enableWeeklyGrouping;
@property (nonatomic) BOOL isAutoCaptureEnabled;
@property (nonatomic) BOOL isAutoCaptureActiveByDefault;

- (SBClientInfoFeatureOptions * _Null_unspecified )initWithDictionary:(NSDictionary *_Nonnull)dict;

@end

@interface SBClientInfoWebSDKOptions : NSObject <NSSecureCoding>

/// Indicates that debugging should be enabled.
@property (nonatomic) BOOL enableWebDebug;

/// Indicates web application base url string.
@property (nonatomic, strong, nullable) NSString *webAppBaseUrl;

- (SBClientInfoWebSDKOptions *_Null_unspecified)initWithDictionary:(NSDictionary *_Nonnull)dict;

@end

