/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IDEIndexDataSource.h"

#import "NSFileManagerDelegate-Protocol.h"

@interface IDEDataModelIndexSource : IDEIndexDataSource <NSFileManagerDelegate>
{
}

+ (id)dataSourceVersion;
- (BOOL)generateDataForJob:(id)arg1;
- (void)_indexEntity:(id)arg1 forFile:(id)arg2 index:(id)arg3;

@end

