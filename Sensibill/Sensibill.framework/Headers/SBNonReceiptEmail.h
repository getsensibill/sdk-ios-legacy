//
//  SBNonReceiptEmail.h
//  Pods
//
//  Created by Preetinder Kaur on 2016-09-26.
//
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface SBNonReceiptEmail : NSObject <NSSecureCoding>

/**
 *	Email count.
 *
 *	@return returns the Email's count
 */
@property (nonatomic, assign) BOOL emailCount;

/**
 *	NonReceiptEmail ID.
 *
 *	@return returns the email ID
 *
 */
@property (strong, nonatomic) NSString *ID;

/**
 *	Email Date.
 *
 *	@return returns the processed date from DateString parameter
 *
 */
@property (strong, nonatomic) NSDate *emailDate;
@property (strong, nonatomic) NSString *displayDate;

/**
 *  Arrival Time.
 *
 *  @return the date that the email was received
 *
 */
@property (strong, nonatomic) NSString *arrivalTime;

/**
 *	Email Sender.
 *
 *	@return returns sender web
 *
 */
@property (strong, nonatomic) NSString *emailSender;

/**
 *	Sender.
 *
 *	@return returns sender name
 *
 */
@property (strong, nonatomic) NSString *senderName;

/**
 *	Email Subject.
 *
 *	@return returns email subject
 *
 */
@property (strong, nonatomic) NSString *subject;

/**
 *	Email render URL.
 *
 *	@return returns the Email URL
 */
@property (strong, nonatomic) NSString *renderURL;

/**
 *	Email Selection Status.
 *
 *	@return returns a bool depicting if the email is selected
 *
 */
@property (assign, nonatomic, getter = isSelected) BOOL selected;

#pragma mark Initialization
- (id)initWithDictionary:(NSDictionary *)dict;
- (id)initWithEmail:(SBNonReceiptEmail *)email;
@end
