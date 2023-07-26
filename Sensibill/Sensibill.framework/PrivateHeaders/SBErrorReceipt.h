//
//  SBErrorReceipt.h
//  Pods
//
//  Created by Satraj Bambra on 2016-01-28.
//
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface SBErrorReceipt : NSObject <NSSecureCoding>
@property (strong, nonatomic) NSData *imageData;
@property (strong, nonatomic) NSDate *date;
@property (strong, nonatomic) NSString *dateString;
@property (strong, nonatomic) UIImage *image;

+ (void)saveReceipt:(SBErrorReceipt *)errorReceipt;
+ (void)saveReceipts:(NSMutableArray *)receiptsArray;
+ (void)deleteErrorReceipt:(SBErrorReceipt *)errorReceipt;
+ (NSMutableArray *)getAllReceipts;

@end
