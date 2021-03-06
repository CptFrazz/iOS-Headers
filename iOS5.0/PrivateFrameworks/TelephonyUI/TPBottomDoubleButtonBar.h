/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <TelephonyUI/TPBottomSingleButtonBar.h>

@class TPButton, UIView;

@interface TPBottomDoubleButtonBar : TPBottomSingleButtonBar
{
    TPButton *_button2;
    UIView *_well2;
    UIView *_wellContainer;
    unsigned int _drawSeparator:1;
}

+ (float)_wellPadding;
- (float)_buttonWidth;
- (id)initWithFrame:(struct CGRect)arg1 style:(int)arg2;
- (id)initForIncomingCallWithFrame:(struct CGRect)arg1;
- (id)initForCallFailureWithFrame:(struct CGRect)arg1;
- (id)initForEmergencyCallWithFrame:(struct CGRect)arg1;
- (id)initForVideoChatWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)_updateButtonSettings:(id)arg1;
- (void)setButton:(id)arg1 andStyle:(BOOL)arg2;
- (void)setButton2:(id)arg1 andStyle:(BOOL)arg2;
- (id)button2;
- (void)setDrawsSeparateWells:(BOOL)arg1;
- (void)drawRect:(struct CGRect)arg1;

@end

