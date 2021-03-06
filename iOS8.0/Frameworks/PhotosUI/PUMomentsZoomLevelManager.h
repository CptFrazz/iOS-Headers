//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PUPhotosDataSourceChangeObserver.h"

@class NSMutableArray, NSString, PUCollectionViewIntermediateDataSource, PUPhotosDataSource, PUSessionInfo, PUZoomableGridViewControllerSpec;

@interface PUMomentsZoomLevelManager : NSObject <PUPhotosDataSourceChangeObserver>
{
    NSMutableArray *_allLevelInfos;
    PUPhotosDataSource *_momentsDataSource;
    BOOL _isInvalidatingLayoutOfZoomLevels;
    PUZoomableGridViewControllerSpec *_zoomableGridSpec;
    PUSessionInfo *_sessionInfo;
    PUCollectionViewIntermediateDataSource *_sharedIntermediateDataSource;
}

@property(readonly, nonatomic) PUCollectionViewIntermediateDataSource *sharedIntermediateDataSource; // @synthesize sharedIntermediateDataSource=_sharedIntermediateDataSource;
@property(retain, nonatomic) PUSessionInfo *sessionInfo; // @synthesize sessionInfo=_sessionInfo;
@property(readonly, nonatomic) PUZoomableGridViewControllerSpec *zoomableGridSpec; // @synthesize zoomableGridSpec=_zoomableGridSpec;
- (void).cxx_destruct;
- (void)photosDataSource:(id)arg1 didReceivePhotoLibraryChange:(id)arg2;
- (void)_defaultsDidChange:(id)arg1;
- (void)zoomLevelInfo:(id)arg1 didInvalidateLayoutWithContext:(id)arg2;
- (void)markZoomInfosInvalidWithWidth:(float)arg1;
- (id)jumpToZoomLevel:(unsigned int)arg1 inNavigationController:(id)arg2;
- (id)existingViewControllerForZoomLevel:(unsigned int)arg1 inNavigationController:(id)arg2;
- (id)newViewControllerForZoomLevel:(unsigned int)arg1;
- (void)updateZoomableGridSpecForTraitCollection:(id)arg1;
- (void)_updateSummarizeSectionsOnZoomLevelInfos;
- (id)zoomLevelInfoForZoomLevel:(unsigned int)arg1;
- (BOOL)zoomLevel:(unsigned int)arg1 isHigherThanZoomLevel:(unsigned int)arg2;
- (unsigned int)zoomLevelBelowZoomLevel:(unsigned int)arg1;
- (unsigned int)zoomLevelAboveZoomLevel:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int preferredDefaultZoomLevel;
@property(readonly, nonatomic) unsigned int highestZoomLevel;
@property(readonly, nonatomic) unsigned int lowestZoomLevel;
- (id)momentsDataSource;
- (void)dealloc;
- (id)initWithSpec:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

