/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface GQDRoot : NSObject
{
    struct __CFDictionary *mUidToObjectMap;
    BOOL mAppBundleColorMapLoaded;
    struct __CFDictionary *mAppBundleResourceToColorMap;
    BOOL mAppBundleResourcesUrlInitialized;
    struct __CFURL *mAppBundleResourcesUrl;
    int mAppBundleVersion;
    unsigned long long mDocVersion;
}

+ (struct _xmlNs *)appNamespace;
- (id)init;
- (void)dealloc;
- (Class)classForName:(const char *)arg1;
- (BOOL)addObject:(id)arg1 withOwnedXmlUid:(const char *)arg2;
- (id)uuid;
- (const char *)addIdentifiedObject:(id)arg1 fromCurrentNode:(struct _xmlTextReader *)arg2;
- (id)objectWithXmlUid:(const char *)arg1;
- (void)forgetAboutObject:(id)arg1 withXmlUid:(const char *)arg2;
- (BOOL)includeStyleWithIdentifier:(const char *)arg1 parentIdentifier:(const char *)arg2 uid:(const char *)arg3;
- (struct __CFURL *)createUrlToAppBundleResource:(struct __CFString *)arg1 processorBundle:(struct __CFBundle *)arg2 fileExists:(char *)arg3;
- (struct __CFURL *)createUrlToAppBundleResource:(struct __CFString *)arg1 processorBundle:(struct __CFBundle *)arg2;
- (id)colorForMissingAppBundleResource:(struct __CFString *)arg1 processorBundle:(struct __CFBundle *)arg2;
- (struct __CFURL *)appBundleResourcesUrl;
- (void)initializeAppBundleResourcesUrl;
- (void)loadAppBundleResourceToColorMap;
- (BOOL)readDocumentVersion:(struct _xmlTextReader *)arg1;
- (BOOL)readDocumentVersion:(struct _xmlTextReader *)arg1 isTooNew:(char *)arg2;
- (unsigned int)documentReleaseVersion;
- (BOOL)appBundleCanProcessCurrentDocVersion;

@end
