//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TextInput/TIKeyboardCandidateSingle.h>

@class NSString;

@interface TIZephyrCandidate : TIKeyboardCandidateSingle
{
    BOOL extensionCandidate;
    BOOL _isFromPhraseDictionary;
    BOOL _isFromTextChecker;
    unsigned int _wordOriginFeedbackID;
    unsigned int _usageTrackingMask;
    NSString *_label;
}

+ (int)type;
+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(nonatomic) BOOL isFromTextChecker; // @synthesize isFromTextChecker=_isFromTextChecker;
@property(nonatomic) BOOL isFromPhraseDictionary; // @synthesize isFromPhraseDictionary=_isFromPhraseDictionary;
@property(nonatomic, getter=isExtensionCandidate) BOOL extensionCandidate; // @synthesize extensionCandidate;
- (unsigned int)usageTrackingMask;
- (void)encodeWithCandidateResultSetCoder:(id)arg1;
- (id)initWithCandidateResultSetCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isAutocorrection;
- (unsigned int)wordOriginFeedbackID;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 wordOriginFeedbackID:(unsigned int)arg3 usageTrackingMask:(unsigned int)arg4;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 wordOriginFeedbackID:(unsigned int)arg3;
- (void)dealloc;

@end
