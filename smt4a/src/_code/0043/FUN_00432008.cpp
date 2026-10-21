/* NON_MATCHING: retail uses the thread-pointer MRC and SendSyncRequest SVC directly, which matching rules forbid. */
#include "shard/S1Ipc.h"
extern "C" {
extern u32 _ZTV9Obj5c14bc[];
/* Sends service command 7 and returns its result. */
s32 FUN_00432008(u32 value) { IpcCommandBuffer *command=nn_getIpcCommandBuffer();command->header=0x70040;command->words[0]=value;s32 result=nn_svc_SendSyncRequest(_ZTV9Obj5c14bc[1]);return result>=0 ? command->words[0] : result; }
}
