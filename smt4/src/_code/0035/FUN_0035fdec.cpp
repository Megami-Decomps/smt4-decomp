/* NON_MATCHING: the thread-pointer read and svc 0x32 now match through nn/svc.h; armcc pairs/orders the command-buffer stores (stm/strd, descriptor order) differently from retail. */
#include "nn/svc.h"
#include "nn/Result.h"
#include "nn/os/IpcCommandBuffer.h"

extern "C" {

extern u32 DAT_004719e8; /* service session handle */

/* IPC request 0x0004 with one parameter (length) and one read-only buffer (length bytes at buffer);
 * returns the transport result, or the service's result word when the transport succeeded. */
s32 FUN_0035fdec(const void *buffer, u32 length)
{
    nn::os::IpcCommandBuffer *cmd = nn::os::GetIpcCommandBuffer();
    nn::os::SetIpcWord(cmd, 0, 0x00040042);
    nn::os::SetIpcWord(cmd, 1, length);
    nn::os::SetIpcWord(cmd, 2, (0 << 10) | (length << 14) | 2);
    nn::os::SetIpcWord(cmd, 3, (u32)buffer);
    s32 result = nn::svc::SendSyncRequest(DAT_004719e8);
    if (nnResultIsSuccess(result)) {
        result = cmd->words[0];
    }
    return result;
}

} /* extern "C" */
