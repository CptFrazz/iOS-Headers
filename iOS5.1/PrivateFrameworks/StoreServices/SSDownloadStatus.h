/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"
#import "SSCoding-Protocol.h"

@class NSError, SSDownloadPhase;

@interface SSDownloadStatus : NSObject <SSCoding, NSCopying>
{
    SSDownloadPhase *_activePhase;
    BOOL _contentRestricted;
    NSError *_error;
    BOOL _failed;
    BOOL _paused;
}

@property(nonatomic, getter=isPaused) BOOL paused; // @synthesize paused=_paused;
@property(nonatomic, getter=isFailed) BOOL failed; // @synthesize failed=_failed;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic, getter=isContentRestricted) BOOL contentRestricted; // @synthesize contentRestricted=_contentRestricted;
@property(readonly, nonatomic) SSDownloadPhase *activePhase; // @synthesize activePhase=_activePhase;
- (void)setPercentComplete:(float)arg1;
@property(nonatomic, getter=isPausable) BOOL pausable;
- (void)setOperationType:(int)arg1;
- (void)setOperationProgress:(id)arg1;
@property(readonly, nonatomic) float percentComplete;
@property(readonly, nonatomic, getter=isFailedTransient) BOOL failedTransient;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithXPCEncoding:(void *)arg1;
- (id)initWithPropertyListEncoding:(id)arg1;
- (void *)copyXPCEncoding;
- (id)copyPropertyListEncoding;
- (void)dealloc;

@end

