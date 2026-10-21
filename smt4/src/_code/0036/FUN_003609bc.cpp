/* NON_MATCHING: native TLS access and SVC 0x32 cannot be emitted under the no-intrinsics rule. */
#include "shard/S1Ipc.h"
extern "C" u32 DAT_00471bac;
/* Queries a handle from the service command response. */
extern "C" s32 FUN_003609bc(u32 *output)
{
    IpcCommandBuffer *command = nn_getIpcCommandBuffer();
    command->header = 0xf0000;
    s32 result = nn_svc_SendSyncRequest(DAT_00471bac);
    if (result < 0)
        return result;
    *output = command->words[2];
    return (s32)command->words[0];
}
