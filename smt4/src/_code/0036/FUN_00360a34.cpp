/* NON_MATCHING: native TLS access and SVC 0x32 cannot be emitted under the no-intrinsics rule. */
#include "shard/S1Ipc.h"
extern "C" u32 DAT_00471bac;
/* Sends the typed scalar parameter to the service. */
extern "C" s32 FUN_00360a34(u8 value)
{
    IpcCommandBuffer *command = nn_getIpcCommandBuffer();
    command->header = 0xd0040;
    command->words[0] = value;
    s32 result = nn_svc_SendSyncRequest(DAT_00471bac);
    return result < 0 ? result : (s32)command->words[0];
}
