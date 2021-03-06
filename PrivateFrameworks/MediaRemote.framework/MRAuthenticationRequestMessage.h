/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRAuthenticationRequestMessage : MRProtocolMessage

@property (nonatomic, readonly) NSString *passcodeHash;

- (id)initWithPasscodeHash:(id)arg1;
- (id)passcodeHash;
- (BOOL)requiresAuthentication;
- (unsigned int)type;

@end
