//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ISStoreURLOperationDelegate.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSOperationQueue, NSString, NSURL, SBKStoreAuthenticationController, SBKTaskAssertion, SBKTransaction, SSAccount;

@interface SBKTransactionController : NSObject <ISStoreURLOperationDelegate>
{
    BOOL _enabled;
    BOOL _shouldAuthenticateIfNecessary;
    BOOL _isResolvingError;
    id <SBKTransactionControllerDelegate> _delegate;
    NSString *_domain;
    NSURL *_requestURL;
    SBKStoreAuthenticationController *_authenticationController;
    SBKTransaction *_currentTransaction;
    SSAccount *_account;
    NSObject<OS_dispatch_queue> *_queue;
    NSOperationQueue *_operationQueue;
    NSMutableArray *_pendingTransactions;
    SBKTaskAssertion *_backgroundTaskAssertion;
    id _networkTypeObserver;
    int _conflictResolutionAttempts;
}

@property int conflictResolutionAttempts; // @synthesize conflictResolutionAttempts=_conflictResolutionAttempts;
@property __weak id networkTypeObserver; // @synthesize networkTypeObserver=_networkTypeObserver;
@property(retain) SBKTaskAssertion *backgroundTaskAssertion; // @synthesize backgroundTaskAssertion=_backgroundTaskAssertion;
@property BOOL isResolvingError; // @synthesize isResolvingError=_isResolvingError;
@property(retain) NSMutableArray *pendingTransactions; // @synthesize pendingTransactions=_pendingTransactions;
@property(retain) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain) SSAccount *account; // @synthesize account=_account;
@property(retain, nonatomic) SBKTransaction *currentTransaction; // @synthesize currentTransaction=_currentTransaction;
@property BOOL shouldAuthenticateIfNecessary; // @synthesize shouldAuthenticateIfNecessary=_shouldAuthenticateIfNecessary;
@property(retain) SBKStoreAuthenticationController *authenticationController; // @synthesize authenticationController=_authenticationController;
@property(readonly, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(readonly) NSURL *requestURL; // @synthesize requestURL=_requestURL;
@property(readonly, copy) NSString *domain; // @synthesize domain=_domain;
@property __weak id <SBKTransactionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)operation:(id)arg1 didReceiveResponse:(id)arg2;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)_delegateTransactionDidFinish:(id)arg1;
- (void)_delegateTransactionDidCancel:(id)arg1 withError:(id)arg2;
- (BOOL)_delegateTransactionDidFail:(id)arg1 withError:(id)arg2;
- (BOOL)_sendFinishedBlockForTransaction:(id)arg1 success:(BOOL)arg2 cancelled:(BOOL)arg3 error:(id)arg4 handledAsFinishedBlock:(char *)arg5;
- (BOOL)_delegateShouldScheduleTransaction:(id)arg1 error:(id *)arg2;
- (void)_onQueue_performDefaultErrorHandlingForError:(id)arg1;
- (void)_onQueue_performCancelErrorHandlingForError:(id)arg1;
- (void)_onQueue_performRetryErrorHandlingForError:(id)arg1;
- (void)_onQueue_resolveError:(id)arg1 resolution:(int)arg2;
- (void)_onQueue_processOperationOutput:(id)arg1 operation:(id)arg2 operationAuthenticated:(BOOL)arg3;
- (void)_processDataInResponse:(id)arg1;
- (void)_onQueue_transactionDidCancel:(id)arg1 withError:(id)arg2;
- (void)_onQueue_transactionDidFail:(id)arg1 withError:(id)arg2;
- (void)_onQueue_currentTransactionDidFinish;
- (BOOL)_onQueue_authenticationCanProcessTransaction:(id)arg1 error:(id *)arg2;
- (BOOL)_onQueue_clampsCanScheduleTransaction:(id)arg1 error:(id *)arg2;
- (void)_onQueue_assertIsTransactionValid:(id)arg1 error:(id *)arg2;
- (BOOL)_onQueue_isEnabledForTransaction:(id)arg1 error:(id *)arg2;
- (BOOL)_onQueue_canScheduleTransaction:(id)arg1 error:(id *)arg2;
- (void)_onQueue_addPendingTransaction:(id)arg1;
- (void)_onQueue_scheduleTransaction:(id)arg1 isRetry:(BOOL)arg2;
- (void)_onQueue_processCurrentTransaction;
- (void)_onQueue_processPendingTransactions;
- (void)_onQueue_cancelTransaction:(id)arg1 error:(id)arg2;
- (void)_onQueue_cancelAllPendingTransactions:(id)arg1;
- (void)_onQueue_endBackgroundTask;
- (void)_onQueue_beginBackgroundTask;
- (void)_endBackgroundTask;
- (void)_beginBackgroundTask;
- (void)_resolveError:(id)arg1 resolution:(int)arg2;
- (void)_storeOperationDidComplete:(id)arg1;
- (void)_enqueueStoreOperation:(id)arg1;
- (void)cancelAllTransactionsCancelCode:(int)arg1;
- (void)cancelAllTransactions;
- (void)cancelScheduledTransaction:(id)arg1;
- (void)scheduleTransaction:(id)arg1;
- (void)scheduleTransaction:(id)arg1 withTransactionFinishedBlock:(CDUnknownBlockType)arg2;
@property(readonly, getter=isIdle) BOOL idle;
- (BOOL)_onQueue_isIdle;
- (id)_onQueue_clampsController;
- (void)_networkTypeChangedNotification:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setRequestURL:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)dealloc;
- (id)initWithDomain:(id)arg1 requestURL:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

