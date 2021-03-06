/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSString;

// Not exported
@interface TSPPasteboard : NSObject
{
    id _pasteboard;
}

+ (id)pasteboardWithPasteboard:(id)arg1;
+ (id)pasteboardWithUniqueName;
+ (id)pasteboardWithName:(id)arg1 create:(_Bool)arg2;
+ (id)generalPasteboard;
+ (Class)pasteboardClass;
+ (id)activePasteboardForName:(id)arg1;
+ (id)activePasteboards;
+ (id)activePasteboardsQueue;
- (void).cxx_destruct;
- (id)description;
- (oneway void)invalidate;
@property(readonly, nonatomic) _Bool isSmartCopy;
- (_Bool)containsImportableTextTypes;
- (_Bool)containsImportableRichTextTypes;
- (_Bool)containsNativePasteboardTypes;
- (long long)clearContents;
@property(readonly, nonatomic) long long changeCount;
@property(readonly, nonatomic) NSString *name;
- (id)valuesForPasteboardType:(id)arg1 inItemSet:(id)arg2;
- (id)dataForPasteboardType:(id)arg1 inItemSet:(id)arg2;
- (id)pasteboardTypesForItemSet:(id)arg1;
- (void)endTransaction;
- (void)addData:(id)arg1 forPasteboardType:(id)arg2;
- (void)addItems:(id)arg1 isSmartCopy:(_Bool)arg2;
- (void)addItems:(id)arg1;
- (void)beginTransaction;
- (void)performAsynchronousWriteUsingBlock:(id)arg1;
@property(readonly, nonatomic) long long numberOfItems;
- (id)valueForPasteboardType:(id)arg1;
- (id)dataForPasteboardType:(id)arg1;
- (_Bool)containsAnyPasteboardTypeInArray:(id)arg1;
- (_Bool)containsPasteboardTypes:(id)arg1;
- (id)pasteboardTypes;
@property(readonly, nonatomic) NSArray *URLs;
@property(readonly, nonatomic) NSArray *richTextStrings;
@property(readonly, nonatomic) NSArray *strings;
@property(copy, nonatomic) NSString *string;
- (id)initWithNativePasteboard:(id)arg1;
- (id)initWithUniquePasteboardName;
- (id)initWithPasteboardName:(id)arg1 create:(_Bool)arg2;
- (id)initWithGeneralPasteboard;

@end

