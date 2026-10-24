/* NON_MATCHING: the thread-pointer read and svc 0x32 now match through nn/svc.h; armcc pairs/orders the command-buffer stores (stm/strd, descriptor order) differently from retail. */
#include "nn/Result.h"
#include "nn/svc.h"

extern "C" {

extern u32 DAT_00472a50; /* service session handle */

/* IPC request 0x0001 with two parameters and one static buffer (size bytes at buffer); returns the
 * transport result, or the service's result word when the transport succeeded. */
s32 FUN_0013a174(void *buffer, u32 size, u32 arg)
{
    nn::os::IpcCommandBuffer *cmd = nn::os::GetIpcCommandBuffer();
    cmd->header = 0x00010082;
    cmd->words[0] = size;
    cmd->words[1] = arg;
    cmd->words[3] = (u32)buffer;
    cmd->words[2] = (size << 4) | 0xC;
    s32 result = nn::svc::SendSyncRequest(DAT_00472a50);
    if (nnResultIsSuccess(result)) {
        result = cmd->words[0];
    }
    return result;
}

} /* extern "C" */
