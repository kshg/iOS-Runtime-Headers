/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@class DOMHTMLFormElement, NSString, DOMHTMLOptionsCollection;

@interface DOMHTMLSelectElement : DOMHTMLElement  {
}

@property(copy,readonly) NSString * type;
@property int selectedIndex;
@property(copy) NSString * value;
@property(readonly) int length;
@property(retain,readonly) DOMHTMLFormElement * form;
@property(readonly) BOOL willValidate;
@property(retain,readonly) DOMHTMLOptionsCollection * options;
@property BOOL disabled;
@property BOOL autofocus;
@property BOOL multiple;
@property(copy) NSString * name;
@property int size;


- (void)setDisabled:(BOOL)arg1;
- (int)structuralComplexityContribution;
- (id)options;
- (void)_activateItemAtIndex:(int)arg1;
- (id)form;
- (id)item:(unsigned int)arg1;
- (id)type;
- (id)value;
- (BOOL)disabled;
- (void)setSelectedIndex:(int)arg1;
- (void)setSize:(int)arg1;
- (BOOL)multiple;
- (unsigned int)completeLength;
- (id)listItemAtIndex:(int)arg1;
- (void)_activateItemAtIndex:(int)arg1 allowMultipleSelection:(BOOL)arg2;
- (void)setValue:(id)arg1;
- (int)selectedIndex;
- (void)setName:(id)arg1;
- (id)name;
- (int)size;
- (int)length;
- (void)remove:(int)arg1;
- (BOOL)autofocus;
- (void)add:(id)arg1 before:(id)arg2;
- (void)add:(id)arg1 :(id)arg2;
- (void)setMultiple:(BOOL)arg1;
- (id)namedItem:(id)arg1;
- (id)validity;
- (void)setAutofocus:(BOOL)arg1;
- (BOOL)willValidate;
- (id)validationMessage;
- (BOOL)checkValidity;
- (void)setCustomValidity:(id)arg1;
- (id)createPeripheral;
- (BOOL)nodeCanBecomeFirstResponder;
- (void)_startAssistingDocumentView:(id)arg1;
- (void)_stopAssistingDocumentView:(id)arg1;
- (BOOL)_requiresAccessoryView;
- (BOOL)_supportsAutoFill;
- (BOOL)_requiresInputView;

@end