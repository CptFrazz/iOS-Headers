/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSString.h"

@interface NSString (TSCEAdditions)
+ (id)stringWithCellRange:(struct)arg1 stickyBits:(unsigned char)arg2;
+ (id)stringWithCellReference:(CDStruct_78b871e1)arg1 stickyBits:(unsigned char)arg2;
+ (id)stringWithCellID:(CDStruct_0441cfb5)arg1 stickyBits:(unsigned char)arg2;
+ (id)stringWithSignedCellID:(CDStruct_f2a491fb)arg1 stickyBits:(unsigned char)arg2;
- (id)referenceComponentsSeparatedByColon;
- (id)referenceComponentsSeparatedByPathDelimiter;
- (id)stringByRemovingNewlines;
- (id)stringByReplacingTabsAndNewlinesWithASingleSpace;
- (id)newStringByAddingDoubleQuoteEscapesIfNecessary;
- (id)stringByUnescapingPartialQuotedStringWithEmptyQuotedStringOK:(_Bool)arg1 preserveTrailingUnquotedWhitespace:(_Bool)arg2;
- (id)stringByUnescapingPartialQuotedStringWithEmptyQuotedStringOK:(_Bool)arg1;
- (id)stringByUnescapingPartialQuotedString;
- (_Bool)isSingleQuoted;
- (id)stringByUnescapingSingleQuotes;
- (id)stringByUnescapingSingleQuotesAndGettingTrailingWhitespaceCount:(unsigned long long *)arg1;
- (id)stringByAddingSingleQuoteEscapesIfNecessary;
- (id)newStringByAddingSingleQuoteEscapesIfNecessary;
- (id)stringByAddingSingleQuoteEscapes;
- (id)newStringByForcingSingleQuoteEscapes:(_Bool)arg1;
- (void)p_initializeQuotes;
- (_Bool)hasBoolValue:(_Bool *)arg1;
- (CDStruct_0441cfb5)coordinateValueGettingStickyBits:(char *)arg1;
- (CDStruct_0441cfb5)coordinateValue;
- (id)initWithCellID:(CDStruct_f2a491fb)arg1 stickyBits:(unsigned char)arg2;
@end
