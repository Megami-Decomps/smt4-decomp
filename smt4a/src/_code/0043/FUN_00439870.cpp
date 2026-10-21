/* NON_MATCHING: retail inlines thread-pointer MRC and SendSyncRequest SVC, forbidden by matching rules. */
#include "shard/S1Ipc.h"
extern "C" {extern u32 DAT_005c0a80;void rt_memcpy(void*,const void*,u32);
/* Queries the service's 64-byte response block. */
s32 FUN_00439870(void *output){IpcCommandBuffer *command=nn_getIpcCommandBuffer();command->header=0x180000;s32 result=nn_svc_SendSyncRequest(DAT_005c0a80);if(result>=0){rt_memcpy(output,&command->words[1],64);result=command->words[0];}return result;}}
