//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMHandle, NSDate;

@protocol IMMessageChatItem <NSObject>
@property(readonly, retain, nonatomic) IMHandle *sender;
@property(readonly, retain, nonatomic) NSDate *time;
@property(readonly, nonatomic) BOOL failed;
@property(readonly, nonatomic) BOOL isFromMe;
@end
