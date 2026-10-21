/* NON_MATCHING: retail inlines thread-pointer MRC and SendSyncRequest SVC, forbidden by matching rules. */
#include "shard/S1Ipc.h"
extern "C" {
extern u32 DAT_005b4438;
/* Requests service command 5 with selector 32. */
s32 FUN_00426530(){IpcCommandBuffer *command=nn_getIpcCommandBuffer();command->header=0x50002;command->words[0]=32;s32 result=nn_svc_SendSyncRequest(DAT_005b4438);return result>=0 ? command->words[0] : result;}
}
