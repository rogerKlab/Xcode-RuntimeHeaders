/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class DSADocSet, DSADocSetGroup, NSDate, NSDictionary, NSError, NSNumber, NSString, PSEntry;

@interface DSADocSetUpdate : NSObject
{
    NSString *_identifier;
    DSADocSet *_docSet;
    PSEntry *_feedEntry;
    NSDictionary *_docSetFeedKeys;
    DSADocSetGroup *_group;
    float _updateProgress;
    int _updateStatus;
    NSError *_updateError;
    NSString *_updatePath;
    BOOL _updateAsUser;
    struct AuthorizationOpaqueRef *_updateAuthRef;
    long long _updateSize;
    NSNumber *_contentsFileID;
    NSDate *_updateCompletionDate;
}

+ (id)updateForDocSet:(id)arg1 feedEntry:(id)arg2;
+ (id)updateForIdentifier:(id)arg1 feedEntry:(id)arg2;
@property(copy, nonatomic) NSDate *updateCompletionDate; // @synthesize updateCompletionDate=_updateCompletionDate;
@property(retain, nonatomic) NSNumber *contentsFileID; // @synthesize contentsFileID=_contentsFileID;
@property(nonatomic) struct AuthorizationOpaqueRef *updateAuthRef; // @synthesize updateAuthRef=_updateAuthRef;
@property(nonatomic) BOOL updateAsUser; // @synthesize updateAsUser=_updateAsUser;
@property(copy, nonatomic) NSString *updatePath; // @synthesize updatePath=_updatePath;
@property(retain, nonatomic) NSError *updateError; // @synthesize updateError=_updateError;
@property(nonatomic) int updateStatus; // @synthesize updateStatus=_updateStatus;
@property(nonatomic) long long updateSize; // @synthesize updateSize=_updateSize;
@property(nonatomic) float updateProgress; // @synthesize updateProgress=_updateProgress;
@property(retain, nonatomic) DSADocSetGroup *group; // @synthesize group=_group;
@property(retain, nonatomic) PSEntry *feedEntry; // @synthesize feedEntry=_feedEntry;
@property(retain, nonatomic) DSADocSet *docSet; // @synthesize docSet=_docSet;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)cancelUpdate;
- (void)installUpdateAtDirectory:(id)arg1;
- (id)_installPathForUpdateAtDirectory:(id)arg1;
- (BOOL)isNew;
- (BOOL)hasUpdate;
- (id)downloadURL;
- (id)enclosure;
@property(readonly, nonatomic) CDStruct_6df46f26 version;
- (CDStruct_6df46f26)_feedVersion;
@property(readonly, nonatomic) NSDictionary *docSetFeedKeys;
@property(readonly, nonatomic) NSString *localizedDescription;
@property(readonly, nonatomic) NSString *localizedName;
- (id)description;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 docSet:(id)arg2 feedEntry:(id)arg3;

@end

