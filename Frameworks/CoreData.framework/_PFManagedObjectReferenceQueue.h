/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSManagedObjectContext;

@interface _PFManagedObjectReferenceQueue : NSObject  {
    int _cd_rc;
    int _spinLock;
    int _flags;
    int _signalRunloop;
    NSManagedObjectContext *_context;
    struct __CFArray { } *_queue;
    struct __CFRunLoopObserver { } *_rlObserver;
}


- (void)finalize;
- (void)release;
- (id)retain;
- (void)dealloc;
- (unsigned int)retainCount;
- (id)initForContext:(id)arg1;
- (void)_unregisterRunloopObservers;
- (void)_contextDidDealloc;
- (int)_queueCount;
- (void)_processReferenceQueue:(BOOL)arg1;
- (BOOL)_GC_queueForDealloc:(id)arg1;
- (BOOL)_signal;
- (BOOL)_queueBatchForDealloc:(struct __CFArray { }*)arg1;
- (BOOL)_queueForDealloc:(id)arg1;

@end