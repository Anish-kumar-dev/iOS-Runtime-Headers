/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIView;

@interface UIRemoteKeyboardWindow : UITextEffectsWindow {
    BOOL _isViewServiceKeyboard;
    UIView *_viewServiceHostView;
}

@property UIView * viewServiceHostView;

+ (id)remoteKeyboardWindowForScreen:(id)arg1 create:(BOOL)arg2 forViewService:(BOOL)arg3;

- (BOOL)_alwaysGetsContexts;
- (id)_basicInitWithScreen:(id)arg1 options:(id)arg2;
- (void)_didRemoveSubview:(id)arg1;
- (BOOL)_isHostedInAnotherProcess;
- (BOOL)_isWindowServerHostingManaged;
- (BOOL)_matchingOptions:(id)arg1;
- (void)invalidate;
- (void)setViewServiceHostView:(id)arg1;
- (id)viewServiceHostView;

@end
