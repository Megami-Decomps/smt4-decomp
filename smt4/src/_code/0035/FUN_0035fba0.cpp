/* NON_MATCHING: the thread-pointer read and svc 0x32 now match through nn/svc.h; armcc pairs/orders the command-buffer stores (stm/strd, descriptor order) differently from retail. */
#include "nn/Result.h"
#include "nn/svc.h"
#include "nn/os/IpcCommandBuffer.h"

extern "C" {

extern u32 DAT_004719e8;  /* service session handle */

/* IPC request 0x0003 with a size and one static buffer (size bytes at str); returns the transport
 * result, or the service's result word when the transport succeeded. */
s32 FUN_0035fba0(const char *str, u32 size)
{
    nn::os::IpcCommandBuffer *cmd = nn::os::GetIpcCommandBuffer();

    nn::os::SetIpcWord(cmd, 1, size);
    nn::os::SetIpcWord(cmd, 0, 0x00030042);
    nn::os::SetIpcWord(cmd, 2, (0 | size << 14) | 2);
    nn::os::SetIpcWord(cmd, 3, (u32)str);
    s32 result = nn::svc::SendSyncRequest(DAT_004719e8);
    if (nnResultIsSuccess(result)) {
        result = cmd->words[0];
    }
    return result;
}

} /* extern "C" */
