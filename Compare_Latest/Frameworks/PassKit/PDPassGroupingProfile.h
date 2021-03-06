//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@interface PDPassGroupingProfile : NSObject
{
    NSString *_passTypeID;
    NSString *_groupingID;
    int _passStyle;
    NSDate *_relevantDate;
    NSDate *_ingestedDate;
}

@property(retain, nonatomic) NSDate *ingestedDate; // @synthesize ingestedDate=_ingestedDate;
@property(retain, nonatomic) NSDate *relevantDate; // @synthesize relevantDate=_relevantDate;
@property(nonatomic) int passStyle; // @synthesize passStyle=_passStyle;
@property(copy, nonatomic) NSString *groupingID; // @synthesize groupingID=_groupingID;
@property(copy, nonatomic) NSString *passTypeID; // @synthesize passTypeID=_passTypeID;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end

