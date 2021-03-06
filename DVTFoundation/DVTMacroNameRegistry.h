/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DVTFoundation/DVTRegistry.h>

@interface DVTMacroNameRegistry : DVTRegistry
{
    BOOL _defaultIsListType;
}

+ (void)initialize;
@property(readonly) BOOL defaultIsListType; // @synthesize defaultIsListType=_defaultIsListType;
- (BOOL)macroIsListType:(id)arg1;
- (void)registerMacroName:(id)arg1 isListType:(BOOL)arg2;
- (id)initWithDebugName:(id)arg1 defaultIsListType:(BOOL)arg2;
- (id)initWithDebugName:(id)arg1;
- (id)init;

@end

