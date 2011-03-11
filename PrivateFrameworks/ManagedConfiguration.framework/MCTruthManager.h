/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSMutableDictionary, NSDictionary;

@interface MCTruthManager : NSObject  {
    NSMutableDictionary *_defaultTruth;
    NSMutableDictionary *_truth;
    NSMutableDictionary *_profileTruth;
    NSMutableDictionary *_clientTruth;
    NSDictionary *_userSettings;
    NSDictionary *_effectiveUserSettings;
    NSDictionary *_clientTypeLoaders;
    struct __CFDictionary { } *_clientTypeToLoaderClass;
    struct __CFDictionary { } *_clientTypeToLoaderSelector;
    struct __CFDictionary { } *_clientTypeToRecomputeComplianceSelector;
    struct dispatch_queue_s { } *_syncQueue;
    struct dispatch_queue_s { } *_nagMetaQueue;
    int _senderPID;
}

@property int senderPID;

+ (id)sharedManager;
+ (int)boolSettingForFeature:(id)arg1 withUserSettingDictionary:(id)arg2;
+ (void)_setPathsTruthFilePath:(id)arg1 defaultTruthFilePath:(id)arg2 clientTypeLoadersFilePath:(id)arg3 profileTruthFilePath:(id)arg4 clientTruthFilePath:(id)arg5 userSettingsFilePath:(id)arg6 effectiveUserSettingsFilePath:(id)arg7;
+ (id)truthAfterApplyingTruthDictionary:(id)arg1 toTruthDictionary:(id)arg2 outChangeDetected:(BOOL*)arg3 outError:(id*)arg4;
+ (id)truthWithCurrentTruth:(id)arg1 defaultTruth:(id)arg2 profileTruth:(id)arg3 clientTruth:(id)arg4 outTruthChanged:(BOOL*)arg5 outError:(id*)arg6;
+ (id)filterRestrictionDictionaryForPublicUse:(id)arg1;
+ (int)restrictedBoolForFeature:(id)arg1 withTruthDictionary:(id)arg2;
+ (id)objectForFeature:(id)arg1 withTruthDictionary:(id)arg2;
+ (BOOL)restrictedBool:(id)arg1 changedBetweenOldRestrictions:(id)arg2 andNewRestrictions:(id)arg3;
+ (id)defaultSettingsDict;
+ (id)defaultParametersForBoolSetting:(id)arg1;
+ (id)defaultParametersForValueSetting:(id)arg1;
+ (int)defaultBoolValueForSetting:(id)arg1;
+ (id)defaultValueForSetting:(id)arg1;
+ (id)valueSettingForFeature:(id)arg1 withUserSettingDictionary:(id)arg2;
+ (BOOL)boolSetting:(id)arg1 valueChangedBetweenOldSettings:(id)arg2 andNewSettings:(id)arg3;
+ (BOOL)valueSetting:(id)arg1 valueChangedBetweenOldSettings:(id)arg2 andNewSettings:(id)arg3;
+ (BOOL)_isDictionary:(id)arg1 differentFromDictionary:(id)arg2;
+ (id)valueForFeature:(id)arg1 withTruthDictionary:(id)arg2;
+ (BOOL)restrictedValue:(id)arg1 changedBetweenOldRestrictions:(id)arg2 andNewRestrictions:(id)arg3;

- (void)dealloc;
- (id)description;
- (id)_init;
- (id)effectiveParametersForValueSetting:(id)arg1;
- (int)restrictedBoolForFeature:(id)arg1;
- (id)objectForFeature:(id)arg1;
- (id)_defaultTruthDictionary;
- (id)defaultTruthDictionary;
- (id)_defaultSettingsDictionary;
- (id)_currentTruthDictionary;
- (id)currentTruthDictionary;
- (void)_setTruth:(id)arg1;
- (id)profileTruth;
- (id)combinedProfileRestrictions;
- (BOOL)setProfileTruth:(id)arg1 outTruthChanged:(BOOL*)arg2 outEffectiveSettingsChanged:(BOOL*)arg3 outRecomputedNag:(BOOL*)arg4 outError:(id*)arg5;
- (id)_clientTruthForClientUUID:(id)arg1;
- (id)_clientTypeForClientUUID:(id)arg1;
- (id)clientTruthForClientUUID:(id)arg1;
- (id)_userInfoForClientUUID:(id)arg1;
- (id)allClientUUIDsForClientType:(id)arg1;
- (void)_setClientTruthsWithoutNotifications:(id)arg1;
- (BOOL)_setAllClientTruths:(id)arg1 outTruthChanged:(BOOL*)arg2 outEffectiveSettingsChanged:(BOOL*)arg3 outError:(id*)arg4;
- (BOOL)setAllClientTruths:(id)arg1 outTruthChanged:(BOOL*)arg2 outEffectiveSettingsChanged:(BOOL*)arg3 outRecomputedNag:(BOOL*)arg4 outError:(id*)arg5;
- (BOOL)setClientTruth:(id)arg1 clientType:(id)arg2 clientUUID:(id)arg3 localizedClientDescription:(id)arg4 localizedWarning:(id)arg5 outTruthChanged:(BOOL*)arg6 outEffectiveSettingsChanged:(BOOL*)arg7 outRecomputedNag:(BOOL*)arg8 outError:(id*)arg9;
- (id)_loadClientLoaders;
- (id)_liveClientUUIDsForClientType:(id)arg1;
- (void)setShowNagMessage;
- (void)notifyHaveSeenComplianceMessageWithLastLockDate:(id)arg1;
- (id)potentialTruthAfterApplyingTruthDictionary:(id)arg1 outChangeDetected:(BOOL*)arg2 outError:(id*)arg3;
- (id)valueForFeature:(id)arg1;
- (id)userSettings;
- (BOOL)_setUserSettings:(id)arg1;
- (id)effectiveUserSettings;
- (BOOL)_setEffectiveUserSettings:(id)arg1;
- (BOOL)_recomputeEffectiveUserSettings;
- (BOOL)setParametersForSettingsByType:(id)arg1;
- (id)effectiveParametersForBoolSetting:(id)arg1;
- (int)effectiveRestrictedBoolForSetting:(id)arg1;
- (BOOL)isBoolSettingLockedDownByRestrictions:(id)arg1;
- (BOOL)isValueSettingLockedDownByRestrictions:(id)arg1;
- (void)removeBoolSetting:(id)arg1;
- (void)removeValueSetting:(id)arg1;
- (void)resetAllSettingsToDefaults;
- (void)setSenderPID:(int)arg1;
- (id)_effectiveUserSettings;
- (id)_userSettings;
- (id)_clientTruth;
- (id)_profileTruth;
- (BOOL)recomputeNagMetadata;
- (void)notifyClientsToRecomputeCompliance;
- (id)clientTruth;
- (void)invalidateTruth;
- (void)invalidateSettings;
- (BOOL)removeOrphanedClientTruths;
- (int)senderPID;
- (id)effectiveValueForSetting:(id)arg1;
- (id)userInfoForClientUUID:(id)arg1;
- (void)setUserInfo:(id)arg1 forClientUUID:(id)arg2;

@end