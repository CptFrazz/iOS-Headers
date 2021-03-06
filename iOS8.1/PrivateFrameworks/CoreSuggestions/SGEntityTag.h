//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface SGEntityTag : NSObject <NSCopying>
{
    BOOL _indexed;
    BOOL _stored;
    NSString *_name;
}

+ (id)testTag:(int)arg1;
+ (id)extractedFromTemplateWithShortName:(id)arg1;
+ (id)messageWithMessageIdHash:(long long)arg1 fromSource:(id)arg2;
+ (id)containsEntityExtraction:(long long)arg1;
+ (id)extraKey:(id)arg1;
+ (id)identity:(id)arg1;
+ (id)contactDetail:(id)arg1;
+ (id)url:(id)arg1;
+ (id)tagForPrefix:(id)arg1 value:(id)arg2;
+ (id)fromReply;
+ (id)fromForwardedMessage;
+ (id)defaultDuration;
+ (id)hardName;
+ (id)human;
+ (id)inhuman;
+ (id)allDay;
+ (id)extractedEventCancellation;
+ (id)fromExtractedDomain;
+ (id)extractedSocial;
+ (id)extractedFood;
+ (id)extractedMovie;
+ (id)extractedTicket;
+ (id)extractedCarRental;
+ (id)extractedHotel;
+ (id)extractedTrain;
+ (id)extractedBus;
+ (id)extractedFlight;
+ (id)extractedEvent;
+ (id)resolveName:(id)arg1;
+ (void)initialize;
+ (void)rememberPrefix:(id)arg1 stored:(BOOL)arg2 indexed:(BOOL)arg3;
+ (id)remember:(id)arg1;
@property(readonly, nonatomic) BOOL stored; // @synthesize stored=_stored;
@property(readonly, nonatomic) BOOL indexed; // @synthesize indexed=_indexed;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (BOOL)isTemplateShortName;
- (BOOL)isExtraKey;
- (BOOL)isContactDetail;
- (BOOL)isUrl;
- (id)description;
- (id)value;
- (BOOL)isEqualToEntityTag:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)initWithName:(id)arg1 stored:(BOOL)arg2 indexed:(BOOL)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

