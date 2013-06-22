/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIButton.h"

@interface GKButton : UIButton
{
    int _buttonKind;
    BOOL _onHeaderBackground;
    int _buttonAppearance;
    BOOL _shouldUseSmallFont;
}

@property(nonatomic) BOOL shouldUseSmallFont; // @synthesize shouldUseSmallFont=_shouldUseSmallFont;
@property(nonatomic) int buttonAppearance; // @synthesize buttonAppearance=_buttonAppearance;
@property(nonatomic) BOOL onHeaderBackground; // @synthesize onHeaderBackground=_onHeaderBackground;
@property(nonatomic) int buttonKind; // @synthesize buttonKind=_buttonKind;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithTheme:(id)arg1 buttonKind:(int)arg2;
- (id)initWithTheme:(id)arg1 buttonKind:(int)arg2 headerBackground:(BOOL)arg3;
- (void)updateButtonAppearance;
- (id)initWithTheme:(id)arg1;
- (int)buttonType;

@end
