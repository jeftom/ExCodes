//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface MMContactAutoUpdater : MMService <MMService>
{
    NSMutableDictionary *_dataDict;
}

@property(retain, nonatomic) NSMutableDictionary *dataDict; // @synthesize dataDict=_dataDict;
- (void).cxx_destruct;
- (void)updateContactIfNeeded:(id)arg1;
- (void)saveCache;
- (void)loadCache;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

