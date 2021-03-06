/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "BBMElement.h"

@class NSNumber, NSString;
/*
@interface BBMGenFileTransfer : BBMElement
{
    BOOL _incoming;
    int _abortReason;
    NSString *_contentType;
    NSString *_objectDescription;
    NSString *_groupId;
    NSString *_identifier;
    NSString *_path;
    int _status;
    NSString *_suggestedFilename;
    NSNumber *_totalSize;
    NSString *_userUri;
    unsigned long long _currentSize;
}*/
@interface BBMGenFileTransfer (BBM_2_4_0)
+ (id)primaryKeyDictionaryWithIdentifier:(id)arg1;
+ (id)elementWithIdentifier:(id)arg1 andParent:(id)arg2;
+ (id)identifierOfElement:(id)arg1;
+ (id)stringForStatusValue:(int)arg1;
+ (int)valueForStatusString:(id)arg1;
+ (id)stringForAbortReasonValue:(int)arg1;
+ (int)valueForAbortReasonString:(id)arg1;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
@property(retain, nonatomic, getter=getUserUri) NSString *userUri; // @synthesize userUri=_userUri;
@property(retain, nonatomic, getter=getTotalSize) NSNumber *totalSize; // @synthesize totalSize=_totalSize;
@property(retain, nonatomic, getter=getSuggestedFilename) NSString *suggestedFilename; // @synthesize suggestedFilename=_suggestedFilename;
@property(nonatomic, getter=getStatus) int status; // @synthesize status=_status;
@property(retain, nonatomic, getter=getPath) NSString *path; // @synthesize path=_path;
@property(nonatomic, getter=isIncoming) BOOL incoming; // @synthesize incoming=_incoming;
@property(retain, nonatomic, getter=getIdentifier) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic, getter=getGroupId) NSString *groupId; // @synthesize groupId=_groupId;
@property(retain, nonatomic, getter=getObjectDescription) NSString *objectDescription; // @synthesize objectDescription=_objectDescription;
@property(nonatomic, getter=getCurrentSize) unsigned long long currentSize; // @synthesize currentSize=_currentSize;
@property(retain, nonatomic, getter=getContentType) NSString *contentType; // @synthesize contentType=_contentType;
@property(nonatomic, getter=getAbortReason) int abortReason; // @synthesize abortReason=_abortReason;
//- (void).cxx_destruct;
- (id)primaryKey;
- (id)debugDescription;
- (void)setValuesForKeysWithDictionary:(id)arg1;
- (void)reset;

@end

