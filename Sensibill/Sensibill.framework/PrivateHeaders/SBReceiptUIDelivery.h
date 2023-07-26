//
//  SBReceiptUIDelivery.h
//  Money2020Demo
//
//  Created by Megha Bambra on 2015-10-22.
//  Copyright © 2015 BHouse. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SBReceiptUIDelivery : NSObject <NSSecureCoding, NSCopying>

@property (nonatomic, strong) NSString *serviceLevel;
@property (nonatomic, strong) NSString *methodMessage;
@property (nonatomic, strong) NSString *iconImage;
@property (nonatomic, strong) NSString *iconBackgroundColor;
@property (nonatomic, strong) NSString *shipToName;
@property (nonatomic, strong) NSArray *shipToAddress;
@property (nonatomic, strong) NSString *estimatedDeliveryMessage;
@property (nonatomic, strong) NSString *trackingLink;
+ (instancetype)modelObjectWithDictionary:(NSDictionary *)dict;
- (instancetype)initWithDictionary:(NSDictionary *)dict;
- (NSDictionary *)dictionaryRepresentation;

@end
