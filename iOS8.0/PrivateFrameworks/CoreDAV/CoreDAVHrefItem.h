//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreDAV/CoreDAVLeafItem.h>

@class NSURL;

@interface CoreDAVHrefItem : CoreDAVLeafItem
{
    NSURL *_baseURL;
    int _writeStyle;
}

@property(nonatomic) int writeStyle; // @synthesize writeStyle=_writeStyle;
@property(retain, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
- (void)parserSuggestsBaseURL:(id)arg1;
- (id)payloadAsOriginalURL;
- (id)payloadAsFullURL;
- (void)write:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (id)init;

@end
