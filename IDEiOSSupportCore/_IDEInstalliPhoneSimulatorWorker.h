/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IDERunOperationWorker.h"

@class DVTiPhoneSimulator;

@interface _IDEInstalliPhoneSimulatorWorker : IDERunOperationWorker
{
    DVTiPhoneSimulator *_device;
}

@property(retain) DVTiPhoneSimulator *device; // @synthesize device=_device;
- (void).cxx_destruct;
- (void)terminate;
- (void)start;
- (void)_setFinishedRunningWithError:(id)arg1;

@end
