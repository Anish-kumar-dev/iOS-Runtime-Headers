/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

@class NSObject<OS_dispatch_queue>, NSSet, NSString, NSUserDefaults;

@interface ATDeviceSettings : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSUserDefaults *_userDefaults;
}

@property(copy,readonly) NSSet * dataClassesNeedingSync;
@property(readonly) BOOL fairPlayEnabled;
@property(readonly) BOOL grappaEnabled;
@property(copy,readonly) NSString * interfaceName;
@property(readonly) BOOL isDeviceLinkClient;
@property(copy,readonly) NSString * libraryIdentifier;
@property(copy,readonly) NSString * serviceDomain;
@property(copy,readonly) NSString * serviceName;
@property(copy,readonly) NSString * serviceType;
@property(readonly) BOOL useNetServicesConnection;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_endpointInfoForLibrary:(id)arg1;
- (void)_setEndpointInfo:(id)arg1 forLibrary:(id)arg2;
- (id)dataClassesNeedingSync;
- (id)endpointInfo;
- (BOOL)fairPlayEnabled;
- (BOOL)grappaEnabled;
- (BOOL)hasCompletedDataMigration;
- (id)hostInfoForLibrary:(id)arg1;
- (id)init;
- (id)interfaceName;
- (BOOL)isDeviceLinkClient;
- (id)lastSyncTimeForLibrary:(id)arg1 dataClass:(id)arg2;
- (id)libraryIdentifier;
- (void)removeEndpointInfoForLibrary:(id)arg1;
- (id)serviceDomain;
- (id)serviceName;
- (id)serviceType;
- (void)setEndpointInfo:(id)arg1;
- (void)setHasCompletedDataMigration:(BOOL)arg1;
- (void)setHostInfo:(id)arg1 forLibrary:(id)arg2;
- (void)setSyncRequested:(BOOL)arg1 forDataClass:(id)arg2;
- (void)setSyncState:(id)arg1 forLibrary:(id)arg2 dataClass:(id)arg3;
- (id)syncStateForLibrary:(id)arg1 dataClass:(id)arg2;
- (void)synchronize;
- (void)updateLastSyncTimeForLibrary:(id)arg1 dataClass:(id)arg2;
- (BOOL)useNetServicesConnection;

@end
