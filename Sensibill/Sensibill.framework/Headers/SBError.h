//
//  SBError.h
//  Pods
//
//  Created by Satraj Bambra on 2016-01-09.
//
//

#import <Foundation/Foundation.h>

#define GENERIC_ERROR @"Generic Error"
#define VALIDATION_ERROR @"Validation Error"
#define AUTH_ERROR @"AuthorizationError"
#define OFFLINE_ERROR @"Offline"

typedef enum : NSUInteger {
    SBErrorTypeInvalidEnvironment,
    SBErrorTypeUnknown,
    SBErrorTypeNoNetwork,
    SBErrorTypeMissingRequiredField = 3
} SBErrorType;

@interface SBError : NSObject

@property (strong, nonatomic, nullable) NSString *errorType;
@property (strong, nonatomic, nullable) NSError *errorObject;
@property (strong, nonatomic, nullable) NSDictionary *dictionary;

- (id _Nullable)initWithError:(NSError * _Nonnull)error;

@end
