/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

@class BrightnessSystemClientExportedObj, NSArray, NSTimer, NSXPCConnection;

@interface BrightnessSystemClientInternal : NSThread {
    NSXPCConnection *_connection;
    id _remote;
    NSTimer *_timer;
    bool_initializationComplete;
    boolshouldKeepRunning;
    NSArray *clientProperties;
    BrightnessSystemClientExportedObj *exportedObj;
}

- (id)copyPropertyForKey:(id)arg1;
- (void)destroyClient;
- (id)init;
- (void)main;
- (void)registerNotificationBlock:(id)arg1 forProperties:(id)arg2;
- (void)registerNotificationBlock:(id)arg1;
- (BOOL)setProperty:(id)arg1 forKey:(id)arg2;
- (void)timerFire:(id)arg1;

@end
