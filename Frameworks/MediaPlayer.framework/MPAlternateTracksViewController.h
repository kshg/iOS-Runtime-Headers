/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class UINavigationBar, UITableView, UIView, UIProgressIndicator, UITextLabel;

@interface MPAlternateTracksViewController : MPAbstractAlternateTracksViewController <UITableViewDataSource, UITableViewDelegate> {
    UIView *_backgroundView;
    UINavigationBar *_navigationBar;
    UITableView *_table;
    UIProgressIndicator *_progressIndicator;
    UITextLabel *_loadingLabel;
}

+ (void)_initializeSafeCategory;

- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (void)loadView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)reloadData;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidUnload;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)dealloc;
- (void)addLoadingUI;
- (void)removeLoadingUI;
- (void)didChangeToInterfaceOrientation:(int)arg1;
- (void)_cancelButtonAction:(id)arg1;
- (void)_doneButtonAction:(id)arg1;
- (void)_exitAnimated:(BOOL)arg1;
- (void)_setCell:(id)arg1 isChecked:(BOOL)arg2;
- (void)willChangeToInterfaceOrientation:(int)arg1;

@end