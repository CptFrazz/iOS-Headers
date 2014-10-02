//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TSTCoordinateArray, TSTLayout, TSTLayoutSpaceBundle, TSTMasterLayout;

__attribute__((visibility("hidden")))
@interface TSTLayoutSpace : NSObject
{
    TSTLayoutSpaceBundle *mBundle;
    int mLayoutSpaceType;
    CDStruct_4d60f806 mInvalidFlags;
    struct {
        CDStruct_e5a208c7 topLeft;
        CDStruct_e5a208c7 bottomRight;
    } mGridRange;
    BOOL mHeaderColumnsRepeat;
    BOOL mHeaderRowsRepeat;
    float mViewScale;
    struct CGAffineTransform mTransformToCanvas;
    struct CGAffineTransform mTransformFromCanvas;
    struct CGAffineTransform mTransformToDevice;
    struct CGAffineTransform mTransformFromDevice;
    BOOL mDrawBlackAndWhite;
    BOOL mDrawPreventAntialias;
    struct CGPoint mTableOffset;
    TSTCoordinateArray *mHeaderRowColumnCoordinates;
    TSTCoordinateArray *mBodyColumnCoordinates;
    TSTCoordinateArray *mHeaderColumnRowCoordinates;
    TSTCoordinateArray *mBodyRowCoordinates;
    struct CGRect mCachedFrame;
    struct CGRect mCachedAlignedFrame;
    struct CGRect mCachedStrokeFrame;
    struct CGRect mCachedAlignedStrokeFrame;
    BOOL mLayoutDirectionIsLeftToRight;
    struct _opaque_pthread_rwlock_t mLock;
}

@property(nonatomic) struct CGPoint tableOffset; // @synthesize tableOffset=mTableOffset;
@property(nonatomic) BOOL drawPreventAntialias; // @synthesize drawPreventAntialias=mDrawPreventAntialias;
@property(nonatomic) BOOL drawBlackAndWhite; // @synthesize drawBlackAndWhite=mDrawBlackAndWhite;
@property(nonatomic) struct CGAffineTransform transformFromDevice; // @synthesize transformFromDevice=mTransformFromDevice;
@property(nonatomic) struct CGAffineTransform transformToDevice; // @synthesize transformToDevice=mTransformToDevice;
@property(nonatomic) struct CGAffineTransform transformFromCanvas; // @synthesize transformFromCanvas=mTransformFromCanvas;
@property(nonatomic) struct CGAffineTransform transformToCanvas; // @synthesize transformToCanvas=mTransformToCanvas;
@property(nonatomic) float viewScale; // @synthesize viewScale=mViewScale;
@property(nonatomic) BOOL headerRowsRepeat; // @synthesize headerRowsRepeat=mHeaderRowsRepeat;
@property(nonatomic) BOOL headerColumnsRepeat; // @synthesize headerColumnsRepeat=mHeaderColumnsRepeat;
@property(readonly, nonatomic) BOOL layoutDirectionIsLeftToRight; // @synthesize layoutDirectionIsLeftToRight=mLayoutDirectionIsLeftToRight;
@property(readonly, nonatomic) int layoutSpaceType; // @synthesize layoutSpaceType=mLayoutSpaceType;
@property(readonly, nonatomic) TSTLayoutSpaceBundle *bundle; // @synthesize bundle=mBundle;
- (id).cxx_construct;
- (int)validateCoordinateCache:(id)arg1;
- (void)validateCachedFrames;
- (int)validateTableOffset:(id)arg1;
- (int)validate:(id)arg1;
- (void)invalidateTableOffset;
- (void)invalidateCoordinates;
- (void)unlock;
- (void)lockForWrite;
- (void)lockForRead;
- (id)description;
- (void)dealloc;
- (id)initWithLayoutSpaceBundle:(id)arg1 type:(int)arg2;
@property(readonly, nonatomic) BOOL isCorner;
@property(readonly, nonatomic) BOOL isRows;
@property(readonly, nonatomic) BOOL isColumns;
@property(readonly, nonatomic) BOOL isRepeat;
@property(readonly, nonatomic) BOOL isFrozen;
@property(readonly, nonatomic) BOOL isMain;
- (BOOL)p_getLayoutDirectionLeftToRight;
@property(readonly, nonatomic) TSTMasterLayout *masterLayout;
@property(readonly, nonatomic) TSTLayout *layout;

@end
