//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAudioFormat, NSURL;

@interface AVAudioFile : NSObject
{
    void *_impl;
}

@property(readonly, nonatomic) NSURL *url;
@property(nonatomic) long long framePosition;
@property(readonly, nonatomic) long long length;
@property(readonly, nonatomic) AVAudioFormat *processingFormat;
@property(readonly, nonatomic) AVAudioFormat *fileFormat;
- (BOOL)readIntoBuffer:(id)arg1 frameCount:(unsigned int)arg2 error:(id *)arg3;
- (BOOL)writeFromBuffer:(id)arg1 error:(id *)arg2;
- (BOOL)readIntoBuffer:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)initSecondaryReader:(id)arg1 format:(id)arg2 error:(id *)arg3;
- (id)initForWriting:(id)arg1 settings:(id)arg2 commonFormat:(unsigned int)arg3 interleaved:(BOOL)arg4 error:(id *)arg5;
- (id)initForWriting:(id)arg1 settings:(id)arg2 error:(id *)arg3;
- (id)initForReading:(id)arg1 commonFormat:(unsigned int)arg2 interleaved:(BOOL)arg3 error:(id *)arg4;
- (id)initForReading:(id)arg1 error:(id *)arg2;

@end

