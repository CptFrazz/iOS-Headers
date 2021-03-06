/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class AccountsManager, NSMutableDictionary, NSTimer;

@interface ABRefreshController : NSObject
{
    NSMutableDictionary *_lastAccountRefreshDates;
    NSMutableDictionary *_lastGroupListRefreshDates;
    AccountsManager *_accountsManager;
    double _refreshDelay;
    NSMutableDictionary *_groupWrappersToRefreshByObserver;
    NSMutableDictionary *_groupWrappersToRefreshGroupsByObserver;
    NSTimer *_refreshTimer;
}

+ (id)sharedInstance;
- (id)init;
- (void)dealloc;
- (void)_scheduleRefreshTimerIfNeeded;
- (void)_invalidateTimer;
- (void)_proceedWithRefresh:(id)arg1;
- (id)accountsManager;
- (void)_setAccountsManager:(id)arg1;
- (void)accountsChanged;
- (void)_setRefreshDelay:(double)arg1;
- (void)_addWrapper:(id)arg1 withObserver:(void *)arg2 toDictionary:(id *)arg3;
- (void)scheduleRefreshIfNeededForGroupWrapper:(id)arg1 withObserver:(void *)arg2;
- (void)scheduleRefreshIfNeededForGroupsInGroupWrapper:(id)arg1 withObserver:(void *)arg2;
- (void)cancelAllScheduledRefreshesWithObserver:(void *)arg1;
- (void)_postponeAllRefreshes;
- (void)_resumeAllRefreshes;
- (void)_actuallyRefreshOrphanedAccountsWithAddressBook:(void *)arg1;
- (void)startRefreshingOrphanedAccountsWithAddressBook:(void *)arg1 afterDelay:(BOOL)arg2;
- (void)startRefreshingOrphanedAccountsWithAddressBook:(void *)arg1;
- (BOOL)groupWrapperNeedsRefresh:(id)arg1;
- (BOOL)accountGroupListNeedsRefresh:(id)arg1;
- (void)_refreshAccount:(id)arg1 isUserRequested:(BOOL)arg2;
- (void)_refreshAccountGroupList:(id)arg1 isUserRequested:(BOOL)arg2;
- (void)refreshGroupWrapper:(id)arg1;
- (void)refreshAccountGroupList:(id)arg1;
- (id)_allContactsSyncingAccounts;
- (void)refreshEverythingNow;
- (BOOL)hasRefreshableAccounts;

@end

