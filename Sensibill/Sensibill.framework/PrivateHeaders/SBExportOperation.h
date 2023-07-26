//
//  SBExportOperation.h
//  Sensibill
//
//  Created by Arsh Aulakh BHouse on 01/11/15.
//
//

#import <Foundation/Foundation.h>
#import "SBReceiptOperation.h"

@interface SBExportOperation : NSObject

+ (void)exportReceipts:(NSSet <SBReceipt *>* _Nonnull)receipts
           withFormats:(NSArray <NSString *>* _Nonnull)formats
   withSuccessCallback:(SBOperationSuccessBlock _Nonnull)successCallback
      andErrorCallback:(SBOperationErrorBlock _Nonnull)errorCallback;

+ (void)exportAllReceiptsWithFormats:(NSArray <NSString *>* _Nonnull)formats
                 withSuccessCallback:(SBOperationSuccessBlock _Nonnull)successCallback
                    andErrorCallback:(SBOperationErrorBlock _Nonnull)errorCallback;

+ (void)exportFolders:(NSSet <SBFolder *>* _Nonnull)folders
          withFormats:(NSArray <NSString *>* _Nonnull)formats
  withSuccessCallback:(SBOperationSuccessBlock _Nonnull)successCallback
     andErrorCallback:(SBOperationErrorBlock _Nonnull)errorCallback;

@end
