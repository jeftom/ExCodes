//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "PBCoding.h"
#import "WCTColumnCoding.h"

@class MessageData, NSString;

@interface MMTranslateResult : NSObject <PBCoding, NSCopying, WCTColumnCoding>
{
    BOOL isFailed;
    NSString *failedReason;
    NSString *originalText;
    NSString *translatedText;
    NSString *translationService;
    MessageData *_message;
}

+ (int)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (id)failedResultWithReason:(id)arg1 message:(id)arg2;
+ (id)defaultFailedResultWithMessage:(id)arg1;
+ (void)initialize;
+ (void)_initPBTableOfMMTranslateResult;
@property(nonatomic) MessageData *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *translationService; // @synthesize translationService;
@property(retain, nonatomic) NSString *translatedText; // @synthesize translatedText;
@property(retain, nonatomic) NSString *originalText; // @synthesize originalText;
@property(retain, nonatomic) NSString *failedReason; // @synthesize failedReason;
@property(nonatomic) BOOL isFailed; // @synthesize isFailed;
- (void).cxx_destruct;
- (id)archivedWCTValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (const map_24f1cf24 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
