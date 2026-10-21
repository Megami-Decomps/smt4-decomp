/* NON_MATCHING: retail inlines thread-pointer MRC and SendSyncRequest SVC, forbidden by matching rules. */
#include "shard/S1Ipc.h"
extern "C" {
extern u32 DAT_005b4438;
/* Sends service command 10. */
s32 FUN_004265bc(u32 *output) {IpcCommandBuffer *command=nn_getIpcCommandBuffer();command->header=655360;s32 result=nn_svc_SendSyncRequest(DAT_005b4438);if(result>=0){*output=command->words[1];result=command->words[0];}return result;}
}
