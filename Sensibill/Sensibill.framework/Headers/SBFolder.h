//
//  SBFolder.h
//  ReceitpsApp
//
//  Created by Arsh Aulakh BHouse on 26/09/15.
//  Copyright © 2015 Sensibill. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class SBReceipt;
@class SBLFolder;

@interface TotalAmount : NSObject

@property (nonatomic, assign) NSInteger receiptCount;
@property (nonatomic, assign) CGFloat amount;
@property (strong, nonatomic, nullable) NSString *currencyCode;
@property (nonatomic, nonnull) NSString *displayAmount;

@end

@interface SBFolder : NSObject <NSCopying>

#pragma mark - Model

@property (nonatomic, strong, nullable) SBLFolder *internalFolder;

/**
 *		ID
 */
@property (copy, nonatomic, nonnull) NSString *ID;

/**
 *		Name
 */
@property (strong, nonatomic, nonnull) NSString *name;

/**
 *		Creation date
 */
@property (strong, nonatomic, nonnull) NSDate *createdAt;

/**
 *		Last updation date
 */
@property (strong, nonatomic, nullable) NSDate *lastUpdated;

/**
 *		Numbr of contained receipts
 */
@property (nonatomic, assign) NSInteger numberOfReceipts;

/**
 *		Color
 */
@property (strong, nonatomic, nullable) UIColor *color;

/**
 *		Display Amount
 */
- (NSString * _Nonnull)displayAmountWithMultipleCurrenciesFormat:(NSString * _Nonnull)multipleCurrenciesFormat;
@property (strong, nonatomic, nonnull, readonly) NSArray<TotalAmount *> *totalArray;

- (void)removeReceipt:(SBReceipt * _Nonnull)receipt;
- (void)addReceipt:(SBReceipt * _Nonnull)receipt;

#pragma mark - Manager

+ (NSArray <SBFolder *>* _Nonnull)allFolders;
/// Removes cache and clears local instance
+ (void)reset;
///  Clears local instance, without removing cache
+ (void)clear;
+ (SBFolder * _Nullable)folderWithId:(NSString * _Nonnull)identifier;
+ (SBFolder * _Nullable)folderWithName:(NSString * _Nonnull)name;
+ (NSSet <SBFolder *>* _Nonnull)foldersWithIds:(NSSet <NSString *> * _Nonnull)identifiers;

+ (void)refreshWithCompletion:(void (^_Nonnull)(BOOL success))completion;

+ (void)addFolderWithName:(NSString * _Nonnull)name
                    color:(UIColor * _Nonnull)color
                  success:(void (^_Nonnull)(SBFolder * _Nullable folder))successCallback
                    error:(void (^_Nonnull)(NSError * _Nullable error))errorCallback;

+ (void)updateFolder:(SBFolder * _Nonnull)folder
             changes:(void (^_Nonnull)(SBFolder * _Nullable folder))changes
             success:(void (^_Nonnull)(SBFolder * _Nullable folder))successCallback
               error:(void (^_Nonnull)(NSError * _Nullable error))errorCallback;


+ (void)deleteFolders:(NSSet <SBFolder *>* _Nonnull)folders
              content:(BOOL)deleteContent
              success:(void (^_Nonnull)(NSDictionary * _Nullable response))successCallback
                error:(void (^_Nonnull)(NSError * _Nullable error))errorCallback;;

+ (void)deleteFolder:(SBFolder * _Nonnull)folder
             content:(BOOL)deleteContent
             success:(void (^_Nonnull)(NSDictionary * _Nullable response))successCallback
               error:(void (^_Nonnull)(NSError * _Nullable error))errorCallback;;

@end
