/* NON_MATCHING: TLS access and SVC 0x32 require prohibited native instructions; the existing IPC interface remains out of line. */
#include "shard/S1Ipc.h"
extern "C" u32 DAT_00471bac;
/* Sends the parameterless service request and returns its service result. */
extern "C" s32 FUN_0036083c()
{
    IpcCommandBuffer *command = nn_getIpcCommandBuffer();
    command->header = 0x270000;
    s32 result = nn_svc_SendSyncRequest(DAT_00471bac);
    return result < 0 ? result : (s32)command->words[0];
}
