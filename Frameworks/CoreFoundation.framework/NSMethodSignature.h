/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSMethodSignature : NSObject  {
    void *_private;
    void *_reserved[6];
}

+ (id)signatureWithObjCTypes:(const char *)arg1;

- (void)finalize;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (void)dealloc;
- (struct { struct NSMethodFrameArgInfo {} *x1; struct NSMethodFrameArgInfo {} *x2; unsigned int x3; unsigned int x4; }*)_frameDescriptor;
- (struct NSMethodFrameArgInfo { struct NSMethodFrameArgInfo {} *x1; struct NSMethodFrameArgInfo {} *x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned char x7; BOOL x8; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned char x25; BOOL x26[0]; }*)_argInfo:(int)arg1;
- (id)_typeString;
- (BOOL)isOneway;
- (unsigned int)methodReturnLength;
- (unsigned int)frameLength;
- (id)debugDescription;
- (const char *)methodReturnType;
- (unsigned int)numberOfArguments;
- (const char *)getArgumentTypeAtIndex:(unsigned int)arg1;

@end