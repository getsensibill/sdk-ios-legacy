//
//  SBFolderOperation.h
//  ReceitpsApp
//
//  Created by Arsh Aulakh BHouse on 26/09/15.
//  Copyright © 2015 Sensibill. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SBReceiptOperation.h"

@interface SBFolderOperation : NSObject

+ (void)addFolderWithName:(NSString * _Nonnull)name color:(NSString * _Nonnull)color
       andSuccessCallback:(SBOperationSuccessBlock _Nonnull)successCallback
            errorCallback:(SBOperationErrorBlock _Nonnull)errorCallback;

+ (void)updateFolder:(SBFolder * _Nonnull)folder
     successCallback:(SBOperationSuccessBlock _Nonnull)successCallback
       errorCallback:(SBOperationErrorBlock _Nonnull)errorCallback;

+ (void)deleteFoldersWithID:(NSArray * _Nonnull)folderIDs
           andTheirContents:(BOOL)deleteContents
         andSuccessCallback:(SBOperationSuccessBlock _Nonnull)successCallback
              errorCallback:(SBOperationErrorBlock _Nonnull)errorCallback;

@end
