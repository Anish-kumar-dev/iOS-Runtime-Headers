/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class NSArray, NSLayoutConstraint, UIView;

@interface PUCropHandleView : UIView {
    UIView *__layoutReferenceView;
    NSArray *__lineViews;
    NSLayoutConstraint *__lineWidthConstraint;
    NSArray *__overlayViews;
    unsigned int _handle;
    BOOL _lineWeightHeavy;
    BOOL _overlayHidden;
}

@property(setter=_setLayoutReferenceView:,retain) UIView * _layoutReferenceView;
@property(setter=_setLineViews:,retain) NSArray * _lineViews;
@property(setter=_setLineWidthConstraint:,retain) NSLayoutConstraint * _lineWidthConstraint;
@property(setter=_setOverlayViews:,retain) NSArray * _overlayViews;
@property(readonly) NSArray * adjacentHandles;
@property(getter=isBottom,readonly) BOOL bottom;
@property(getter=isCorner,readonly) BOOL corner;
@property(readonly) unsigned int handle;
@property(getter=isLateral,readonly) BOOL lateral;
@property(readonly) id layoutReferenceItem;
@property(getter=isLeft,readonly) BOOL left;
@property(getter=isLineWeightHeavy) BOOL lineWeightHeavy;
@property(readonly) unsigned int oppositeHandle;
@property(getter=isOverlayHidden) BOOL overlayHidden;
@property(getter=isRight,readonly) BOOL right;
@property(getter=isTop,readonly) BOOL top;

+ (id)allHandles;

- (void).cxx_destruct;
- (id)_createCornerOverlayView;
- (id)_createLineView;
- (id)_layoutReferenceView;
- (id)_lineViews;
- (id)_lineWidthConstraint;
- (id)_overlayViews;
- (void)_setLayoutReferenceView:(id)arg1;
- (void)_setLineViews:(id)arg1;
- (void)_setLineWidthConstraint:(id)arg1;
- (void)_setOverlayViews:(id)arg1;
- (void)_updateLineWidth;
- (id)adjacentHandles;
- (unsigned int)handle;
- (id)initForHandle:(unsigned int)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isBottom;
- (BOOL)isCorner;
- (BOOL)isLateral;
- (BOOL)isLeft;
- (BOOL)isLineWeightHeavy;
- (BOOL)isOverlayHidden;
- (BOOL)isRight;
- (BOOL)isTop;
- (id)layoutReferenceItem;
- (unsigned int)oppositeHandle;
- (void)setLineWeightHeavy:(BOOL)arg1;
- (void)setOverlayHidden:(BOOL)arg1;

@end
