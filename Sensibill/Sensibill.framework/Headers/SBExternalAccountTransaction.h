//
//  SBExternalAccountTransaction.h
//  Pods
//
//  Created by Sensibill on 2017-01-24.
//
//


#import <UIKit/UIKit.h>

/**
 *Representation of currency type for SBExternalAccountTransactions
 */
typedef NS_ENUM(NSInteger, CurrencyCode) {
    /**Unknown Currency Code*/
    CurrencyCodeUnknown,
    /**Australian Currency Code*/
    CurrencyCodeAUD,
    /**Canadian Currency Code*/
    CurrencyCodeCAD,
    /**Euro Currency Code*/
    CurrencyCodeEUR,
    /**British Pounds Currency Code*/
    CurrencyCodeGBP,
    /**New Zealand Currency Code*/
    CurrencyCodeNZD,
    /**American Currency Code*/
    CurrencyCodeUSD
};

/**
 * Protocol outlining all the properties of an external account transaction
 */
@interface SBExternalAccountTransaction : NSObject <NSCopying>
/**
 * Optional - field for transaction unique identifer
 */
@property (strong, nonatomic) NSString *ID;
/**
 * Date that transaction occurred
 */
@property (strong, nonatomic) NSDate *date;
/**
 * Optional -  Date that transaction had finished processing and was posted for client to see
 */
@property (strong, nonatomic) NSDate *postedDate;
/**
 * Amount of transaction
 */
@property (nonatomic, assign) CGFloat amount;
/**
 * Currency code of transaction
 */
@property (nonatomic, assign) CurrencyCode currencyCode;
/**
 * Optional - A description of transaction
 */
@property (strong, nonatomic) NSString *summary;
/**
 * Optional - Masked number of account used to make transaction. (Most likely a 12 digit number. e.g. ************6789)
 */
@property (strong, nonatomic) NSString *maskedAccountNumber;
/**
 * Optional - Name of merchant
 */
@property (strong, nonatomic) NSString *merchantName;
/**
 * Unique identifier of Sensibill SBReceipt, if receipt was matched to transaction.
 */
@property (strong, nonatomic) NSString *receiptID;

#pragma MARK - Public Methods

/**
 * Initializer for mandatory fields
 * @param amount transaction amount
 * @param currencyCode currency of transaction represented as CurrencyCode
 * @param date Date that transaction occured
 */
- (id)initWithAmount:(double)amount
        currencyCode:(CurrencyCode)currencyCode
                date:(NSDate *)date;

/**
 * Initializer for optional fields
 * @param amount transaction amount
 * @param currencyCode currency of transaction represented as CurrencyCode
 * @param date Date transaction occured
 * @param transactionID external transaction identifier, used for transaction linking
 * @param postedDate Date that transaction with processed/posted
 * @param summary Extra description of transaction
 * @param maskedAccountNumber The masked number of the card  used to make the transaction.
 * @param merchantName Name of merchant
 */
- (id)initWithAmount:(double)amount
        currencyCode:(CurrencyCode)currencyCode
                date:(NSDate *)date
       transactionID:(NSString *)transactionID
          postedDate:(NSDate *)postedDate
             summary:(NSString *)summary
 maskedAccountNumber:(NSString *)maskedAccountNumber
        merchantName:(NSString *)merchantName;

/**
 * Converts string to type CurrencyCode
 * @param inputString string to be converted to CurrencyCode type
 * @return CurrencyCode the currency type that string parameter matches.
 * @remark Returns unknown if match not found
 */
+ (CurrencyCode)convertToCurrencyForString:(NSString *)inputString;

/**
* Converts type CurrencyCode to string
* @param currency currency code to be converted to string
* @return NSString string representation of currency code
*/
- (NSString *)convertToStringForCurrency:(CurrencyCode)currency;

/**
* Function to determine if this external account transaction is the same as another
* @param transaction External Account Transaction that will be compared
* @return BOOL  true if external account transaction passed is the same, false if not the same
*/
- (BOOL)isEqualToExternalAccountTransaction:(SBExternalAccountTransaction *)transaction;

@end


