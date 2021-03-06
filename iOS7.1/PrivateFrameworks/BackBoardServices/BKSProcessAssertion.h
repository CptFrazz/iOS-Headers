//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BKSSignal, NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>, NSString;

@interface BKSProcessAssertion : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_serverConnection;
    BOOL _valid;
    BKSSignal *_invalidationSignal;
    int _pid;
    NSString *_bundleIdentifier;
    NSString *_name;
    unsigned int _flags;
    unsigned int _reason;
    CDUnknownBlockType _invalidationHandler;
    CDUnknownBlockType _acquisitionHandler;
}

+ (id)NameForReason:(unsigned int)arg1;
- (void)queue_notifyAssertionAcquired:(BOOL)arg1;
- (void)queue_updateAssertion;
- (void)queue_acquireAssertion;
- (void)queue_registerWithServer;
- (void)queue_invalidate:(BOOL)arg1;
- (void)invalidate;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(nonatomic) unsigned int flags; // @dynamic flags;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @dynamic invalidationHandler;
@property(copy, nonatomic) CDUnknownBlockType acquisitionHandler; // @dynamic acquisitionHandler;
- (void)setReason:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int reason; // @dynamic reason;
- (void)setValid:(BOOL)arg1;
@property(readonly, nonatomic) BOOL valid; // @dynamic valid;
- (id)initWithPID:(int)arg1 flags:(unsigned int)arg2 reason:(unsigned int)arg3 name:(id)arg4 withHandler:(CDUnknownBlockType)arg5;
- (id)initWithBundleIdentifier:(id)arg1 flags:(unsigned int)arg2 reason:(unsigned int)arg3 name:(id)arg4 withHandler:(CDUnknownBlockType)arg5;
- (void)dealloc;
- (id)init;

@end

