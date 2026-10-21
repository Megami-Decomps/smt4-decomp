/* NON_MATCHING: retail inlines thread-pointer MRC and SendSyncRequest SVC, forbidden by matching rules. */
#include "shard/S1Ipc.h"
extern "C" {
extern u32 DAT_005b4438;
/* Sends service command 7. */
s32 FUN_004265f8() {IpcCommandBuffer *command=nn_getIpcCommandBuffer();command->header=458754;command->words[0]=32;s32 result=nn_svc_SendSyncRequest(DAT_005b4438);if(result>=0){result=command->words[0];}return result;}
}
