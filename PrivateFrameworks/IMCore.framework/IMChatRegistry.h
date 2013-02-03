/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class NSMutableDictionary, NSArray;

@interface IMChatRegistry : NSObject {
    NSMutableDictionary *_chatGUIDToCurrentThreadMap;
    NSMutableDictionary *_threadNameToChatMap;
}

@property(readonly) NSArray * allExistingChats;

+ (Class)chatClass;
+ (Class)chatRegistryClass;
+ (Class)messageClass;
+ (void)setChatClass:(Class)arg1;
+ (void)setChatRegistryClass:(Class)arg1;
+ (void)setMessageClass:(Class)arg1;
+ (id)sharedInstance;

- (void)_chat:(id)arg1 inviteParticipants:(id)arg2 reason:(id)arg3;
- (void)_chat:(id)arg1 joinWithProperties:(id)arg2;
- (void)_chat:(id)arg1 removeParticipants:(id)arg2 reason:(id)arg3;
- (void)_chat:(id)arg1 sendMessage:(id)arg2;
- (void)_chat:(id)arg1 setPerson:(id)arg2 isIgnored:(BOOL)arg3;
- (void)_chat_declineInvitation:(id)arg1;
- (void)_chat_leave:(id)arg1;
- (id)_copyThreadNameForChat:(id)arg1 style:(unsigned char)arg2 account:(id)arg3;
- (id)_existingChatWithIdentifier:(id)arg1 style:(unsigned char)arg2 account:(id)arg3;
- (void)_registerChat:(id)arg1 isIncoming:(BOOL)arg2;
- (oneway void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 error:(id)arg4;
- (oneway void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 invitationReceived:(id)arg4;
- (oneway void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 member:(id)arg4 statusChanged:(int)arg5;
- (oneway void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 messageReceived:(id)arg4;
- (oneway void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 statusChanged:(int)arg4;
- (oneway void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 updateProperties:(id)arg4;
- (id)allExistingChats;
- (id)chatForIMHandle:(id)arg1 tryDirectConnection:(BOOL)arg2;
- (id)chatForIMHandle:(id)arg1;
- (id)chatForIMHandles:(id)arg1 chatName:(id)arg2;
- (id)chatForIMHandles:(id)arg1;
- (id)chatForRoom:(id)arg1 onAccount:(id)arg2;
- (void)dealloc;
- (id)existingChatForIMHandle:(id)arg1;
- (id)existingChatForIMHandles:(id)arg1;
- (id)existingChatForRoom:(id)arg1 onAccount:(id)arg2;
- (id)existingChatWithGUID:(id)arg1;
- (void)handleIMChatParticipantsDidChange:(id)arg1;
- (id)init;
- (void)unregisterChatWithGUID:(id)arg1;

@end