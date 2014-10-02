//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@protocol VSRecognitionModelDataProvider <NSObject>
- (int)valueCountForClassWithIdentifier:(NSString *)arg1 inModelWithIdentifier:(NSString *)arg2;

@optional
- (void)stopReportingChanges;
- (void)beginReportingChanges;
- (BOOL)isCacheValidityIdentifierValid:(NSDictionary *)arg1;
- (NSDictionary *)cacheValidityIdentifier;
- (NSString *)phoneticValueAtIndex:(int)arg1 forClassWithIdentifier:(NSString *)arg2 inModelWithIdentifier:(NSString *)arg3;
- (BOOL)getValue:(id *)arg1 weight:(int *)arg2 atIndex:(int)arg3 forClassWithIdentifier:(NSString *)arg4 inModelWithIdentifier:(NSString *)arg5;
- (NSString *)valueAtIndex:(int)arg1 forClassWithIdentifier:(NSString *)arg2 inModelWithIdentifier:(NSString *)arg3;
@end
