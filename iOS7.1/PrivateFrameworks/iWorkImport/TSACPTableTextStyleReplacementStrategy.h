//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSACPTextStyleReplacementStrategy.h>

@class TSTTableStylePreset;

__attribute__((visibility("hidden")))
@interface TSACPTableTextStyleReplacementStrategy : TSACPTextStyleReplacementStrategy
{
    TSTTableStylePreset *mRootPreset;
}

@property(readonly, nonatomic) TSTTableStylePreset *rootPreset; // @synthesize rootPreset=mRootPreset;
- (void)populateStyleReplacements:(id)arg1 forParagraphStyle:(id)arg2 listStyle:(id)arg3 parIndex:(unsigned int)arg4;
- (void)dealloc;
- (id)initWithChangePropagationVisitor:(id)arg1 storage:(id)arg2 rootTableStylePreset:(id)arg3 forLockedObject:(BOOL)arg4;

@end
