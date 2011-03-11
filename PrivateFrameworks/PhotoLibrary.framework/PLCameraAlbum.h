/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLCameraAlbum : PLPhotoAlbum  {
    BOOL _albumDidChange;
    BOOL _ignoreNotifications;
    unsigned int _previousImageCount;
}

+ (void)savePreviewWellImage:(id)arg1 shouldNotify:(BOOL)arg2;
+ (id)photoAlbumWithDefaultValues;
+ (void)deletePreviewWellImage;
+ (id)previewWellImage;
+ (BOOL)previewWellImageExists;

- (BOOL)isEditable;
- (id)name;
- (id)init;
- (unsigned int)count;
- (BOOL)deletedWhenEmpty;
- (id)_slideshowSettingsPath;
- (id)slideshowSettings;
- (void)setSlideshowSettings:(id)arg1;
- (int)indexOfPosterImage;
- (id)posterImage;

@end