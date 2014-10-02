//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudDocsDaemon/BRCMultiplexableOperation.h>

@class CKRecordID, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface BRCDownloadRecordOperation : BRCMultiplexableOperation
{
    CKRecordID *_recordID;
    CDUnknownBlockType _downloadCompletionBlock;
    NSDictionary *_desiredPackageFileIndices;
    NSString *_etag;
}

@property(retain, nonatomic) NSString *etag; // @synthesize etag=_etag;
@property(retain, nonatomic) NSDictionary *desiredPackageFileIndices; // @synthesize desiredPackageFileIndices=_desiredPackageFileIndices;
@property(copy, nonatomic) CDUnknownBlockType downloadCompletionBlock; // @synthesize downloadCompletionBlock=_downloadCompletionBlock;
@property(retain, nonatomic) CKRecordID *recordID; // @synthesize recordID=_recordID;
- (void).cxx_destruct;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithMultiplexer:(id)arg1;
- (id)name;
- (id)initWithDownloadContext:(id)arg1 desiredKeys:(id)arg2;

@end
