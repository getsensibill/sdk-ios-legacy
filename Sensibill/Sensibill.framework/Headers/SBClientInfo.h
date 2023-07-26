//
//  SBClientInfo.h
//  Sensibill
//
//  Copyright © 2020 Sensibill. All rights reserved.
//

#import "SBClientInfoFeatureOptions.h"

/// Responsible for synchronizing and providing client's feature options set on sensibill admin portal for given client.
@interface SBClientInfo: NSObject <NSSecureCoding>

#pragma mark - Class Properties

/// Singleton instance.
+ (instancetype _Nonnull)sharedInstance;

#pragma mark - Class Methods

/// Attempts to synchronize client's feature options if not exists previously.
+ (void)syncWithCompletion:(void (^_Nonnull)(NSError * _Nullable error))completion;

#pragma mark - Instance Properties

/// Represents unique client identifier specified sensibill clientInfo API.
@property (nonatomic, strong, nullable) NSString *clientID;

/// Represents client's feature options specified in sensibill clientInfo API.
@property (nonatomic, strong, nullable) SBClientInfoFeatureOptions *featureOptions;

/// Represents client's web SDK options specified in sensibill clientInfo API.
@property (nonatomic, strong, nullable) SBClientInfoWebSDKOptions *webSDKOptions;

/// Represents client's receipt email domains and aliases specified in sensibill clientInfo API.
@property (nonatomic, strong, nullable) NSArray<SBClientInfoReceiptEmailDomainsAndAliases *> *receiptEmailDomainsAndAliases;

@end

