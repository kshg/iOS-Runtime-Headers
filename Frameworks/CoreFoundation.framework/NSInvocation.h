/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSInvocation : NSObject  {
    void *_frame;
    void *_retdata;
    id _signature;
    id _container;
    unsigned char _retainedArgs;
    unsigned char _reserved[15];
}

+ (id)invocationWithMethodSignature:(id)arg1;
+ (id)_mapkit_invocationWithSelector:(SEL)arg1 target:(id)arg2 arguments:(void*)arg3;
+ (id)_mapkit_invocationWithSelector:(SEL)arg1 target:(id)arg2;
+ (id)mf_invocationWithSelector:(SEL)arg1 target:(id)arg2 object1:(id)arg3 object2:(id)arg4;
+ (id)mf_invocationWithSelector:(SEL)arg1 target:(id)arg2;
+ (id)mf_invocationWithSelector:(SEL)arg1 target:(id)arg2 object:(id)arg3;

- (void)setSelector:(SEL)arg1;
- (void)setArgument:(void*)arg1 atIndex:(int)arg2;
- (void)getReturnValue:(void*)arg1;
- (id)target;
- (SEL)selector;
- (void)invokeWithTarget:(id)arg1;
- (id)init;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)invoke;
- (void)setTarget:(id)arg1;
- (BOOL)argumentsRetained;
- (void)_addAttachedObject:(id)arg1;
- (void)invokeSuper;
- (void)setReturnValue:(void*)arg1;
- (id)methodSignature;
- (void)getArgument:(void*)arg1 atIndex:(int)arg2;
- (void)retainArguments;
- (void)_webkit_invokeAndHandleException:(id)arg1;
- (BOOL)wantsReturnValue;
- (id)withProtocol:(id)arg1;
- (BOOL)mf_shouldLogInvocation;
- (void)mf_invokeWithObject:(id)arg1;

@end