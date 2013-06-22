/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSData, NSError, NSMutableDictionary, NSMutableSet, NSSet, NSString, NSThread, NSURL, NSURLConnection, NSURLRequest, NSURLResponse;

@interface QLPreviewParts : NSObject
{
    NSURL *_url;
    NSData *_data;
    NSString *_fileName;
    NSString *_uti;
    NSString *_password;
    BOOL _progressive;
    void *_convertFunction;
    NSURLConnection *_connection;
    id _delegate;
    int _pageCount;
    float _pageWidth;
    float _pageHeight;
    NSURL *previewURL;
    NSURLResponse *previewResponse;
    NSMutableSet *registeredURLs;
    NSMutableSet *outstandingURLs;
    NSMutableDictionary *encodingsForURLs;
    NSThread *delegateCallbackThread;
    NSError *mainError;
    BOOL computed;
    BOOL cancelled;
    const void *representedObject;
    CDStruct_6a83575d representedObjectCallbacks;
    long representedObjectProtection;
    BOOL htmlErrorDisabled;
}

+ (id)relativeStringForSafeURL:(id)arg1;
+ (BOOL)isSafeRequest:(id)arg1;
+ (BOOL)isSafeURL:(id)arg1;
+ (id)safeURLScheme;
+ (void)unregisterPreview:(id)arg1;
+ (void)registerPreview:(id)arg1;
@property(readonly, nonatomic) NSURL *previewURL; // @synthesize previewURL;
@property BOOL htmlErrorDisabled; // @synthesize htmlErrorDisabled;
@property(readonly) float pageHeight; // @synthesize pageHeight=_pageHeight;
@property(readonly) float pageWidth; // @synthesize pageWidth=_pageWidth;
@property(readonly) int pageCount; // @synthesize pageCount=_pageCount;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) BOOL progressive; // @synthesize progressive=_progressive;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSString *uti; // @synthesize uti=_uti;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (id)mimeTypeForAttachmentURL:(id)arg1;
- (unsigned long)cfEncodingForAttachmentURL:(id)arg1;
@property(readonly, nonatomic) NSSet *attachmentURLs;
@property(readonly, nonatomic) NSURLResponse *previewResponse;
@property(readonly, nonatomic) NSURLRequest *previewRequest;
- (void)setError:(id)arg1;
- (void)appendData:(id)arg1 forURL:(id)arg2 lastChunk:(BOOL)arg3;
- (id)newSafeAttachmentURLWithID:(id)arg1 mimeType:(id)arg2 textEncoding:(id)arg3;
- (id)newAttachmentURLWithID:(id)arg1 properties:(id)arg2;
- (void)startDataRepresentationWithContentType:(id)arg1 properties:(id)arg2;
- (void)_registerURL:(id)arg1 mimeType:(id)arg2 textEncoding:(id)arg3;
- (const void *)documentObject;
- (void)setDocumentObject:(const void *)arg1 callbacks:(const CDStruct_6a83575d *)arg2;
- (void)_discardRepresentedObjectSafely;
- (void)_protectRepresentedObjectSafely;
@property(readonly, getter=isComputed) BOOL computed;
@property(readonly, getter=isCancelled) BOOL cancelled;
- (void)computePreviewInThread;
- (void)startComputingPreview;
- (id)safeRequestForRequest:(id)arg1;
- (id)_requestForURL:(id)arg1;
- (id)_voidRequest;
- (void)cancel;
- (void)computePreview;
- (void)dealloc;

@end
