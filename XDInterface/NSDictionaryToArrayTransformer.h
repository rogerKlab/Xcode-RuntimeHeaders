/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSValueTransformer.h"

@class NSString;

@interface NSDictionaryToArrayTransformer : NSValueTransformer
{
    NSString *_defaultKey;
    id _defaultObject;
    struct __dictionaryToArrayTransformerFlags {
        unsigned int _createsMutableCopiesOfValues:1;
        unsigned int _reservedFlags:31;
    } _dictionaryToArrayTransformerFlags;
}

+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;
- (BOOL)createsMutableCopiesOfValues;
- (void)setCreatesMutableCopiesOfValues:(BOOL)arg1;
- (id)defaultObject;
- (void)setDefaultObject:(id)arg1;
- (id)defaultKey;
- (void)setDefaultKey:(id)arg1;
- (id)description;
- (id)reverseTransformedValue:(id)arg1;
- (id)_insertionKeyForDictionary:(id)arg1;
- (id)transformedValue:(id)arg1;
- (void)dealloc;
- (id)init;

@end

