/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class CAKeyframeAnimation, NSArray;

@interface PLCameraFocusView : UIView  {
    NSArray *_images;
    CAKeyframeAnimation *_contentsAnimation;
    CAKeyframeAnimation *_boundsAnimation;
    double _animationStartTime;
    BOOL _fadingOut;
}


- (void)startAnimating;
- (void)stopAnimating;
- (void)dealloc;
- (id)init:(BOOL)arg1;
- (void)scaleFrame:(float)arg1 reposition:(BOOL)arg2;
- (id)_createContentsAnimation;
- (id)_createBoundsAnimation;
- (void)_fadeOut;
- (void)_fadeOutDidFinish;
- (void)focusDidEnd;

@end