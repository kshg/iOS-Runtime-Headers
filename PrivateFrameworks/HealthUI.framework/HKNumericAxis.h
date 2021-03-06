/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKNumericAxis : HKAxis {
    double _lastAxisSpread;
    double _lastStepSize;
}

- (id)_axisLabelForValue:(id)arg1;
- (float)_labelSpacingWithMin:(float)arg1 max:(float)arg2 maxNumLabels:(int)arg3;
- (id)adjustedRangeForFittedRange:(id)arg1;
- (void)enumerateTickCoordinatesInChartRange:(struct HKRange { float x1; float x2; })arg1 zoomScale:(float)arg2 handler:(id /* block */)arg3;
- (id)labelsForChartRange:(struct HKRange { float x1; float x2; })arg1 zoomScale:(float)arg2;
- (id)stringFromNumber:(id)arg1;

@end
