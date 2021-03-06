/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class DBGSummaryPart, DVTFilePath, NSString;

@interface DBGDataValueSummaryFormat : NSObject
{
    NSString *_formatString;
    NSString *_type;
    DBGSummaryPart *_formatRoot;
    DVTFilePath *_dylibPath;
    BOOL _userDefined;
}

+ (id)zombieFormatForType:(id)arg1;
+ (BOOL)writeSummaryFormats:(id)arg1 toPath:(id)arg2;
+ (id)legacySummaryFormatsAtPath:(id)arg1;
@property BOOL userDefined; // @synthesize userDefined=_userDefined;
@property(readonly) DVTFilePath *dylibPath; // @synthesize dylibPath=_dylibPath;
@property(readonly) NSString *type; // @synthesize type=_type;
@property(readonly) NSString *formatString; // @synthesize formatString=_formatString;
- (void).cxx_destruct;
@property(readonly) DBGSummaryPart *formatRoot; // @synthesize formatRoot=_formatRoot;
- (void)dvt_encodeRelationshipsWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)setType:(id)arg1;
- (void)setFormatString:(id)arg1;
- (id)init;
- (id)initFromXMLUnarchiver:(id)arg1 archiveVersion:(float)arg2;
- (id)initWithString:(id)arg1 forType:(id)arg2 usingDylibPath:(id)arg3;

@end

