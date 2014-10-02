//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GKBubbleFlowBubbleControl, GKBubbleFlowContainerView, GKBubblePathAnimator, NSArray, UIView, UIViewController;

@protocol GKBubbleFlowableViewController <NSObject>

@optional
- (void)delayAppearingWithBubbleFlowUntil:(void (^)(BOOL))arg1;
- (BOOL)readyToAppearWithBubbleFlow;
- (void)delayDisappearingWithBubbleFlowUntil:(void (^)(BOOL))arg1;
- (BOOL)readyToDisappearWithBubbleFlow;
- (BOOL)updateBubbleTextImmediatelyForTransitionFromViewController:(UIViewController *)arg1;
- (void)willAnimateKeyframesForDisappearingWithBubbleFlowFromRelativeStartTime:(double)arg1 relativeDuration:(double)arg2 absoluteTransitionDuration:(double)arg3 toViewController:(UIViewController *)arg4;
- (void)willAnimateKeyframesForAppearingWithBubbleFlowFromRelativeStartTime:(double)arg1 relativeDuration:(double)arg2 absoluteTransitionDuration:(double)arg3 fromViewController:(UIViewController *)arg4;
- (void)willAnimateDisappearingWithBubbleFlow;
- (void)willAnimateAppearingWithBubbleFlow;
- (BOOL)shouldUseSlidingDoorWhenTransitioningTo;
- (BOOL)shouldUseSlidingDoorWhenTransitioningFrom;
- (NSArray *)viewsToAnimateOutWhileDisappearingWithBubbleFlow;
- (NSArray *)viewsToAnimateInWhileAppearingWithBubbleFlow;
- (void)viewDidDisappearAnimated:(BOOL)arg1 bubbleFlow:(BOOL)arg2;
- (void)viewWillDisappearAnimated:(BOOL)arg1 bubbleFlow:(BOOL)arg2;
- (void)viewDidAppearAnimated:(BOOL)arg1 bubbleFlow:(BOOL)arg2;
- (void)viewWillAppearAnimated:(BOOL)arg1 bubbleFlow:(BOOL)arg2;
- (double)bubbleFlowSubviewFadeInDelay;
- (double)bubbleFlowSubviewFadeInDuration;
- (double)bubbleFlowSubviewFadeOutDelay;
- (double)bubbleFlowSubviewFadeOutDuration;
- (double)bubbleFlowAnimateInDuration;
- (double)bubbleFlowAnimateOutDuration;
- (void)configureControlForBubble:(GKBubbleFlowBubbleControl *)arg1;
- (NSArray *)bubblesUsedForAnyTransition;
- (GKBubbleFlowContainerView *)bubbleContainerView;
- (UIView *)containerViewForBubbleOfType:(int)arg1;
- (struct CGRect)finalScreenFrameInViewCoordinatesForBubbleOfType:(int)arg1;
- (GKBubblePathAnimator *)bubbleAnimatorForRotation;
- (GKBubblePathAnimator *)bubbleAnimatorForTransitionToViewController:(UIViewController *)arg1;
- (GKBubblePathAnimator *)bubbleAnimatorForTransitionFromViewController:(UIViewController *)arg1;
@end
