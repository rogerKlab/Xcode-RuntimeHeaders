/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSTextField.h"

@interface DVTScrubber : NSTextField
{
    unsigned long long _mode;
    float _v0;
    float _delta;
    double _minValue;
    double _maxValue;
}

@property double maxValue; // @synthesize maxValue=_maxValue;
@property double minValue; // @synthesize minValue=_minValue;
- (void)textDidEndEditing:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)beginMouseWheelScrubbingWithEvent:(id)arg1;
- (void)beginMouseDragScrubbingWithEvent:(id)arg1;
- (void)updateValueWithEvent:(id)arg1;
- (float)checkBounds:(float)arg1;
- (void)resetCursorRects;
- (struct CGRect)middleAreaRect;
- (void)setMode:(unsigned long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)proScrubberCommonInit;

@end

