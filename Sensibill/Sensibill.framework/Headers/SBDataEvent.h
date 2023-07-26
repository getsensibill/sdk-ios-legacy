//
//  SBDataEvent.h
//  Pods
//
//  Created by Sensibill on 2017-10-18.
//

#import <UIKit/UIKit.h>
#import "SBReceipt.h"

@class SBLTransaction;

/// Type of Receipt event
typedef NS_ENUM(NSUInteger, SBReceiptEventType) {

    /// Receipt was deleted
    SBReceiptEventTypeDeletion,
    
    /// Receipt was changed
    SBReceiptEventTypeEdit
};

/// Type of Transaction event
typedef NS_ENUM(NSUInteger, SBTransactionEventType) {

    /// Transaction status was changed
    SBTransactionEventTypeStatusUpdate,

    /// Transaction was removed
    SBTransactionEventTypeRemoved,

    /// Transaction expected processing time changed
    SBTransactionEventTypeExpectedProcessingTimeDidChange
};

/**
 * Executable block to call on Receipt event.
 * @param type SBReceiptEventType value associated with the change to receipt data
 * @param receipt SBReceipt for which an event was sent
 */
typedef void (^SBDataEventReceiptBlock)(SBReceiptEventType type, SBReceipt *receipt);

/**
 * Executable block to call on Transaction event.
 * @param type SBTransactionEventType value associated with the change to transaction data
 * @param transaction Transaction for which an event was sent
 */
typedef void (^SBDataEventTransactionBlock)(SBTransactionEventType type, SBLTransaction *transaction);

/**
 * Interface defines methods to monitor currently processed transactions
 * Note: To monitor a single transaction, use `TransactionObserver`.
 */
@interface SBDataEvent: NSObject

/// Shared instance of SBDataEvent
/// @return SBDataEvent
+ (instancetype)sharedManager;

/**
 * Add SBDataEventReceiptBlock to monitor receipt data changes in Sensibill Receipt SDK
 * @param observer identifier of block added
 * @param block code segment that will be executed when receipt data has changed
 *
 * Notes:
 * - Ensure that your block accounts for situations where an event happens when a caller is no longer available.
 * - Block may be called on background thread. It's a responsibility of a block author to ensure that any changes to UI elements are done on main thread.
 */
- (void)addReceiptObserver:(id)observer withBlock:(SBDataEventReceiptBlock)block;

/**
* Add SBDataEventTransactionBlock to monitor transaction data changes in Sensibill Receipt SDK
 * @param observer identifier of block added
 * @param block code segment will be executed when transaction data has changed
 *
 * Notes:
 * - Ensure that your block accounts for situations where an event happens when a caller is no longer available.
 * - Block may be called on background thread. It's a responsibility of a block author to ensure that any changes to UI elements are done on main thread.
*/
- (void)addTransactionObserver:(id)observer withBlock:(SBDataEventTransactionBlock)block;

/// Remove all observers
- (void)clear;

// Internal Use Only

///:nodoc:
- (void)broadcastForReceipt:(SBReceipt *)receipt eventType:(SBReceiptEventType)type;

///:nodoc:
- (void)broadcastForTransaction:(SBLTransaction *)transaction eventType:(SBTransactionEventType)type;

@end
