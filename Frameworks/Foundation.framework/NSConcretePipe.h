/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSFileHandle;

@interface NSConcretePipe : NSPipe  {
    NSFileHandle *_readHandle;
    NSFileHandle *_writeHandle;
}


- (void)finalize;
- (id)init;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)fileHandleForReading;
- (id)fileHandleForWriting;

@end