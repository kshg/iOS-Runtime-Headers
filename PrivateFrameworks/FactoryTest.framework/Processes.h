/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FactoryTest.framework/FactoryTest
 */

@class NSMutableDictionary;

@interface Processes : NSObject {
    NSMutableDictionary *_processes;
}

- (void)dealloc;
- (id)getCachedProcesses;
- (id)init;
- (void)prettyPrintToLog;
- (id)refreshProcesses;
- (id)taskInfoForPID:(int)arg1;
- (id)threadInfoForPort:(unsigned int)arg1 withUsageAccumulator:(double*)arg2;

@end