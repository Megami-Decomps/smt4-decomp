/* NON_MATCHING: retail inlines thread-pointer MRC and SendSyncRequest SVC, forbidden by matching rules. */
#include "shard/S1Ipc.h"
extern "C" {
extern u32 DAT_005c0a80;
/* Queries the service's 64-bit value. */
s32 FUN_00439ba8(u64 *output){IpcCommandBuffer *command=nn_getIpcCommandBuffer();command->header=0x250000;s32 result=nn_svc_SendSyncRequest(DAT_005c0a80);if(result>=0){*output=(u64)command->words[1]|((u64)command->words[2]<<32);result=command->words[0];}return result;}
}
