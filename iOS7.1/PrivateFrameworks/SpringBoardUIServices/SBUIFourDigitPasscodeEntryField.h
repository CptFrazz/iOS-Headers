//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SpringBoardUIServices/SBUINumericPasscodeEntryFieldBase.h>

@class NSMutableArray, UIView;

@interface SBUIFourDigitPasscodeEntryField : SBUINumericPasscodeEntryFieldBase
{
    UIView *_leftPaddingView;
    UIView *_rightPaddingView;
    UIView *_characterIndicatorsContainerView;
    NSMutableArray *_characterIndicators;
    float _backgroundAlpha;
    UIView *_springView;
    UIView *_springViewParent;
}

- (struct UIEdgeInsets)_entryFieldPaddingOutsideRing;
- (struct CGRect)_entryFieldBoundsWithXOffset:(float)arg1;
- (float)_entryFieldIndicatorWidthPadding;
- (float)_entryFieldIndicatorDiameter;
- (void)_autofillForMesaWithCompletion:(CDUnknownBlockType)arg1;
- (struct CGSize)_viewSize;
- (void)_resetForFailedPasscode:(BOOL)arg1 playUnlockFailedSound:(BOOL)arg2;
- (BOOL)_hasAnyCharacters;
- (void)_setLuminosityBoost:(float)arg1;
- (void)_deleteLastCharacter;
- (void)_appendString:(id)arg1;
- (void)layoutSubviews;
- (void)reset;
- (void)setCustomBackgroundColor:(id)arg1;
- (void)setBackgroundAlpha:(float)arg1;
- (void)dealloc;
- (id)initWithDefaultSize;

@end
