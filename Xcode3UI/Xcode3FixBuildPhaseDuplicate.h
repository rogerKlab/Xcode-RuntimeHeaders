/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Xcode3UI/Xcode3UpgradeTargetTask.h>

@class NSArray, PBXBuildPhase;

@interface Xcode3FixBuildPhaseDuplicate : Xcode3UpgradeTargetTask
{
    PBXBuildPhase *_buildPhase;
    NSArray *_duplicateReferences;
}

+ (id)analyzeInContext:(id)arg1;
- (void).cxx_destruct;
- (BOOL)upgrade;

@end

