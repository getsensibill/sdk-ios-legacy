//
//  SBReceiptUIBarcodes.h
//  Pods
//
//  Created by Nik Sawtschuk on 2017-01-24.
//
//

#import <Foundation/Foundation.h>
#import "SBReceiptUIBarcodeRows.h"
#import <UIKit/UIKit.h>

@interface SBReceiptUIBarcodes : NSObject <NSSecureCoding, NSCopying>

@property (nonatomic, strong) NSArray *rows;
@property (nonatomic, strong) UIColor *textColor;

+ (instancetype)modelObjectWithDictionary:(NSDictionary *)dict;
- (instancetype)initWithDictionary:(NSDictionary *)dict;
- (NSDictionary *)dictionaryRepresentation;

@end
