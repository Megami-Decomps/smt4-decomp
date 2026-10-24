/* NON_MATCHING: the thread-pointer read and svc 0x32 now match through nn/svc.h; armcc pairs/orders the command-buffer stores (stm/strd, descriptor order) differently from retail. */
#include "nn/Result.h"
#include "nn/svc.h"

extern "C" {

extern u32 DAT_005c0a80; /* service session handle */

/* IPC request 0x0004 with one parameter (length) and one read-only buffer (length bytes at buffer);
 * returns the transport result, or the service's result word when the transport succeeded. */
s32 FUN_00439c74(const void *buffer, u32 length)
{
    nn::os::IpcCommandBuffer *cmd = nn::os::GetIpcCommandBuffer();
    cmd->header = 0x00040042;
    cmd->words[0] = length;
    cmd->words[1] = (0 << 10) | (length << 14) | 2;
    cmd->words[2] = (u32)buffer;
    s32 result = nn::svc::SendSyncRequest(DAT_005c0a80);
    if (nnResultIsSuccess(result)) {
        result = cmd->words[0];
    }
    return result;
}

} /* extern "C" */
