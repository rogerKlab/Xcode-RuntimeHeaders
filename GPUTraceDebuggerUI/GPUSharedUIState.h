/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTInvalidation-Protocol.h"

@class DVTMapTable, DVTStackBacktrace, NSObject<OS_dispatch_queue>, NSString;

@interface GPUSharedUIState : NSObject <DVTInvalidation>
{
    NSObject<OS_dispatch_queue> *_queue;
    DVTMapTable *_stateTable;
    NSString *_identifier;
}

+ (void)initialize;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)setState:(id)arg1 ForKey:(id)arg2;
- (id)stateForKey:(id)arg1;
- (void)primitiveInvalidate;
- (id)initWithIdentifer:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

