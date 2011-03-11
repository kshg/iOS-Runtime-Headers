/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSBezierPathStub;

@interface MFCocoaPath : MFPath  {
    NSBezierPathStub *m_path;
    int m_state;
}


- (int)begin;
- (int)end;
- (int)state;
- (id)init;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (struct CGPoint { float x1; float x2; })currentPoint;
- (id)initWithPath:(id)arg1 state:(int)arg2;
- (int)abort;
- (int)closeFigure;
- (int)widen:(id)arg1;
- (int)fill:(id)arg1;
- (id)getBezierPath;
- (BOOL)isOpen;
- (void)appendBezierPath:(id)arg1 dc:(id)arg2;
- (int)stroke:(id)arg1;
- (int)flatten;

@end