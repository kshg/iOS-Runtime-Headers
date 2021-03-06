/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
 */

@interface SPUISearchResultsViewControllerAction : SPUISearchResultsAction {
    id /* block */ _completionBlock;
    UIViewController *_viewController;
}

@property (nonatomic, copy) id /* block */ completionBlock;
@property (nonatomic, retain) UIViewController *viewController;

- (void).cxx_destruct;
- (id /* block */)completionBlock;
- (void)dismissViewControllerAnimated:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setViewController:(id)arg1;
- (id)viewController;

@end
