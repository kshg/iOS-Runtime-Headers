/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIViewController, NSString;

@interface UIViewControllerAction : NSObject  {
    UIViewController *_viewController;
    NSString *_name;
    BOOL _animated;
}

@property BOOL animated;
@property(retain) NSString * name;
@property UIViewController * viewController;


- (id)viewController;
- (BOOL)animated;
- (id)initWithViewController:(id)arg1 name:(id)arg2 animated:(BOOL)arg3;
- (void)setAnimated:(BOOL)arg1;
- (void)setName:(id)arg1;
- (void)setViewController:(id)arg1;
- (id)name;
- (void)dealloc;

@end