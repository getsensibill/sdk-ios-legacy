//
//  SBNotificationHandler.h
//  Sensibill
//
//  Created by Nik Sawtschuk on 2017-06-30.
//
//

#import <Foundation/Foundation.h>
#import <UserNotifications/UserNotifications.h>
#import <UIKit/UIKit.h>

#define kIsSensibillNotificationKey @"isSensibillNotification"
#define kUNNotificationActionIdentifierSensibillEditReminder @"SensibillEditReminder"
#define kUNNotificationActionIdentifierSensibillDismissReminder @"SensibillDismissReminder"
#define kSBNotificationTypeReminder @"reminder"

@class SBReminder;

/// Interacts with User Notification Center to schedule and deliver reminders as notifications
@interface SBNotificationHandler : NSObject <UNUserNotificationCenterDelegate>

#pragma mark - Singleton

/// Shared instance of SBNotificationHandler
/// @return SBNotificationHandler
+ (instancetype _Nonnull)sharedHandler;

#pragma mark - Properties

/// Navigation controller to push views upon
@property (nonatomic, strong) UINavigationController * _Nullable navigationControllerToUse;

#pragma mark - Notifications Permission

/// Attempts to request permission to schedule notification with `UNAuthorizationOptionSound` and `UNAuthorizationOptionAlert` option.
- (void)requestPermissionToScheduleNotificationsWithCompletionHandler:(void (^_Nullable)(BOOL granted, NSError *__nullable error))completionHandler;

#pragma mark - Remove Scheduled Notifications

/// Remove pending notification requests for given identifier.
- (void)deleteScheduledNotificationForIdentifier:(NSString *_Nonnull)identifier;

/// Remove pending notification requests for given `SBReminder` using `SBReminder.ID`
- (void)deleteScheduledNotificationForReminder:(SBReminder *_Nonnull)reminder;

#pragma mark - Remove Delivered Notifications

/// Remove delivered notification for given identifier.
- (void)deleteDeliveredNotificationForIdentifier:(NSString *_Nonnull)identifier;

/// Remove delivered notification for given `SBReminder` using `SBReminder.ID`
- (void)deleteDeliveredNotificationForReminder:(SBReminder *_Nonnull)reminder;

/// Delete the notifications that have been delivered and remain in notification center.
- (void)clearNotificationCenter;

#pragma mark - Schedule Notifications

/// Schedules a notification for provided `SBReminder` with `fireEarly` set to `NO`.
- (void)scheduleNotificationForReminder:(SBReminder *_Nonnull)reminder;

/// Schedules a notification for provided `SBReminder`. If `fireEarly` is set to `YES`, the reminder will be triggered in 30 seconds after function call. Otherwise a notification is scheduled based on a `reminderDatePeriod` property of a reminder.
- (void)scheduleNotificationForReminder:(SBReminder *_Nonnull)reminder fireEarly:(BOOL)fireEarly;

/// Schedules a notification for a provided `SBReminder.ID` on a specified date. The parameter `body` is passed to `UNMutableNotificationContent` as a field with the same name.
- (void)scheduleNotificationForIdentifier:(NSString *_Nonnull)identifier date:(NSDate *_Nonnull)fireDate withBody:(NSString *_Nonnull)body;

/// Schedules a notification for a provided `SBReminder.ID` on a specified date. Parameters `body` and `userInfo` are passed to a `UNMutableNotificationContent` object as fields with the same names.
- (void)scheduleNotificationForIdentifier:(NSString *_Nonnull)identifier date:(NSDate *_Nonnull)fireDate withBody:(NSString *_Nonnull)body userInfo:(NSDictionary *_Nullable)userInfo;

@end
