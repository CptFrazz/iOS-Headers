//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, TSCHLegendCellMetrics, TSCHLegendViewCache, TSDShadow, TSDStroke, TSWPParagraphStyle;

__attribute__((visibility("hidden")))
@interface TSCHLegendModelCache : NSObject
{
    TSCHLegendCellMetrics *mMetrics;
    BOOL mLegendOn;
    NSArray *mCells;
    unsigned int mCellCount;
    TSWPParagraphStyle *mParagraphStyle;
    TSDStroke *mStroke;
    TSDShadow *mShadow;
    id mFill;
    float mOpacity;
    float mHorizontalCellSpacing;
    float mVerticalCellSpacing;
    struct CGSize mLargestCellSize;
    float mEffectiveStrokeWidth;
    BOOL mReverseSingleColumnLegendOrder;
    float mLastLegendWidth;
    TSCHLegendViewCache *mLastLegendViewCache;
    float mSymbolGap;
}

@property(readonly) BOOL reverseSingleColumnLegendOrder; // @synthesize reverseSingleColumnLegendOrder=mReverseSingleColumnLegendOrder;
@property(readonly) float effectiveStrokeWidth; // @synthesize effectiveStrokeWidth=mEffectiveStrokeWidth;
@property(readonly) struct CGSize largestCellSize; // @synthesize largestCellSize=mLargestCellSize;
@property(readonly) float symbolGap; // @synthesize symbolGap=mSymbolGap;
@property(readonly) float verticalCellSpacing; // @synthesize verticalCellSpacing=mVerticalCellSpacing;
@property(readonly) float horizontalCellSpacing; // @synthesize horizontalCellSpacing=mHorizontalCellSpacing;
@property(readonly) float opacity; // @synthesize opacity=mOpacity;
@property(readonly) id fill; // @synthesize fill=mFill;
@property(readonly) TSDStroke *stroke; // @synthesize stroke=mStroke;
@property(readonly) TSDShadow *shadow; // @synthesize shadow=mShadow;
@property(readonly) TSWPParagraphStyle *paragraphStyle; // @synthesize paragraphStyle=mParagraphStyle;
@property(readonly) NSArray *cells; // @synthesize cells=mCells;
@property(readonly) unsigned int cellCount; // @synthesize cellCount=mCellCount;
@property(readonly) BOOL legendOn; // @synthesize legendOn=mLegendOn;
- (id)viewCacheForWidth:(float)arg1;
- (id)cellForSeriesIndex:(unsigned int)arg1 cellType:(int)arg2;
- (void)dealloc;
- (id)initWithChartModel:(id)arg1 textEditingSelectionPair:(id)arg2;

@end
