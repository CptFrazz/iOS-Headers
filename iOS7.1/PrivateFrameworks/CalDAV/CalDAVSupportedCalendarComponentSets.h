//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CoreDAVItem.h"

@class NSMutableSet;

@interface CalDAVSupportedCalendarComponentSets : CoreDAVItem
{
    NSMutableSet *_componentSets;
}

+ (BOOL)allowedCalendars:(id)arg1 contains:(id)arg2;
- (id)childrenToWrite;
- (void)addCompSet:(id)arg1;
- (id)description;
- (id)componentsAsString;
- (void)dealloc;
- (id)init;
- (id)copyParseRules;

@end
