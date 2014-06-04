/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DVTOperation.h"

@class NSArray, NSDictionary;

@interface IDEProfileOperation : DVTOperation
{
    NSDictionary *_environment;
    NSArray *_commandLineArguments;
}

+ (id)operationWithEnvironment:(id)arg1 commandLineArguments:(id)arg2 block:(id)arg3;
@property(copy) NSArray *commandLineArguments; // @synthesize commandLineArguments=_commandLineArguments;
@property(copy) NSDictionary *environment; // @synthesize environment=_environment;
- (void).cxx_destruct;

@end
