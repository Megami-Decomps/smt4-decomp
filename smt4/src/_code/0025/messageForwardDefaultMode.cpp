#include "common.h"
extern "C" {
u32 messageWindowShowOrPoll(u32 message,u32 argument,u32 frame,s32 mode,s32 option,u32 flags);
/* Dispatch a message with the final flag word cleared. */
u32 messageForwardDefaultMode(u32 message,u32 argument,u32 frame,s32 mode,s32 option) { return messageWindowShowOrPoll(message,argument,frame,mode,option,0); }
}
