/* NON_MATCHING: same stores; retail builds the static-buffer descriptor from a zero register (mov r2,#0; orr r1,r2,r1,lsl #14) and stores it separately, armcc folds it and pairs the stores with stm. */
#include "nn/Result.h"
#include "nn/svc.h"
#include "nn/os/IpcCommandBuffer.h"

extern "C" {

extern u32 DAT_005c0a80; /* service session handle */

/* Sends IPC command 0x00030042 with `size` and the buffer `data` (static-buffer descriptor of
 * `size` bytes) on the session; returns the result code, or the first reply word on success. */
s32 FUN_00439a28(const void *data, u32 size)
{
    nn::os::IpcCommandBuffer *command = nn::os::GetIpcCommandBuffer();

    nn::os::SetIpcWord(command, 1, size);
    nn::os::SetIpcWord(command, 0, 0x00030042);
    nn::os::SetIpcWord(command, 2, (size << 14) | 2);
    nn::os::SetIpcWord(command, 3, (u32)data);
    s32 result = nn::svc::SendSyncRequest(DAT_005c0a80);
    if (nnResultIsSuccess(result)) {
        result = command->words[0];
    }
    return result;
}

} /* extern "C" */
