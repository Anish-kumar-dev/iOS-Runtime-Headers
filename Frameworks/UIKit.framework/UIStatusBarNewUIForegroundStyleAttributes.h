/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, UIColor;

@interface UIStatusBarNewUIForegroundStyleAttributes : UIStatusBarForegroundStyleAttributes {
    BOOL _hasBusyBackground;
    BOOL _isTintColorBlack;
    UIColor *_tintColor;
    NSString *_uniqueIdentifier;
}

@property(retain,readonly) UIColor * tintColor;

- (id)_batteryColorForCapacity:(float)arg1 lowCapacity:(float)arg2 charging:(BOOL)arg3;
- (float)_roundDimension:(float)arg1;
- (BOOL)_shouldUseBoldFontForStyle:(int)arg1;
- (int)activityIndicatorStyleWithSyncActivity:(BOOL)arg1;
- (float)batteryAccessoryMargin;
- (id)batteryImageNameWithCapacity:(float)arg1;
- (float)bluetoothBatteryExtraPadding;
- (id)bluetoothBatteryImageNameWithCapacity:(float)arg1;
- (void)dealloc;
- (void)drawBatteryInsidesWithSize:(struct CGSize { float x1; float x2; })arg1 capacity:(float)arg2 charging:(BOOL)arg3;
- (void)drawBluetoothBatteryInsidesWithSize:(struct CGSize { float x1; float x2; })arg1 capacity:(float)arg2;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })edgeInsetsForBatteryInsides;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })edgeInsetsForBluetoothBatteryInsides;
- (float)edgePadding;
- (id)expandedNameForImageName:(id)arg1;
- (id)imageNamed:(id)arg1 withLegibilityStyle:(int)arg2 legibilityStrength:(float)arg3;
- (id)initWithHeight:(float)arg1 legibilityStyle:(int)arg2 tintColor:(id)arg3 hasBusyBackground:(BOOL)arg4;
- (id)initWithHeight:(float)arg1 legibilityStyle:(int)arg2;
- (id)makeTextFontForStyle:(int)arg1;
- (struct CGPoint { float x1; float x2; })positionForMoonMaskInBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)proportionalFontForFont:(id)arg1;
- (float)sizeForMoonMaskVisible:(BOOL)arg1;
- (id)textColorForStyle:(int)arg1;
- (id)textForNetworkType:(int)arg1;
- (float)textOffsetForStyle:(int)arg1;
- (id)tintColor;
- (id)uniqueIdentifier;

@end
