/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class MLMappedFileSegment, NSString;

@interface MLMappedFile : NSObject  {
    NSString *_path;
    int _file;
    long long _size;
    unsigned int _granularity;
    unsigned int _numberOfSegments;
    MLMappedFileSegment **_segments;
    BOOL _dying;
    BOOL _assumeFileIsFixedSize;
}

+ (id)mappedFileWithPath:(id)arg1 fileIsFixedSize:(BOOL)arg2;

- (unsigned long)granularity;
- (void)release;
- (long long)size;
- (void)dealloc;
- (id)initWithPath:(id)arg1 fileIsFixedSize:(BOOL)arg2;
- (void)_refreshFileInfo;
- (void)refreshFileSizeAndDependentInfo;
- (id)mappedImageDataAtOffset:(long long)arg1 length:(unsigned long)arg2;
- (void)releaseSegment:(unsigned long)arg1;
- (int)fileDescriptor;
- (id)_segmentAtIndex:(unsigned long)arg1;

@end