/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class MKMapCamera;

@interface MKMapSnapshotOptions : NSObject <NSCopying>
{
    MKMapCamera *_camera;
    CDStruct_02837cd9 _mapRect;
    CDStruct_feeb6407 _region;
    unsigned int _mapType;
    int _mode;
    struct CGSize _size;
    float _scale;
    BOOL _usingRect;
}

@property(nonatomic) float scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) BOOL usingRect; // @synthesize usingRect=_usingRect;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) unsigned int mapType; // @synthesize mapType=_mapType;
@property(nonatomic) CDStruct_90e2a262 region; // @synthesize region=_region;
@property(nonatomic) CDStruct_90e2a262 mapRect; // @synthesize mapRect=_mapRect;
@property(copy, nonatomic) MKMapCamera *camera; // @synthesize camera=_camera;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
