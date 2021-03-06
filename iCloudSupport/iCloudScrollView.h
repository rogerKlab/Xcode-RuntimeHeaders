/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSScrollView.h"

@interface iCloudScrollView : NSScrollView
{
    struct CGSize _fittingSize;
    struct CGSize _intrinsicSize;
    BOOL _intrinsicSizeIsInvalid;
}

- (void)scrollWheel:(id)arg1;
- (void)tile;
- (void)updateConstraints;
- (struct CGSize)fittingSize;
- (struct CGSize)intrinsicContentSize;
- (void)invalidateIntrinsicContentSize;

@end

