/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEInterfaceBuilderKit/IBXMLDecoderAbstractValueElement.h>

@class NSData;

@interface IBXMLDecoderBytesElement : IBXMLDecoderAbstractValueElement
{
    NSData *_value;
}

+ (id)elementName;
- (void).cxx_destruct;
- (id)interpretedBytesValue;
- (BOOL)acceptsData;
- (BOOL)interpretDataReturningError:(id *)arg1;
- (BOOL)requestInsertionIntoParent:(id)arg1 error:(id *)arg2;

@end

