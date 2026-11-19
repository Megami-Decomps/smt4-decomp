#include "nn/Result.h"
#include "nn/svc.h"
#include "nn/os/IpcCommandBuffer.h"

extern "C" {

extern u32 DAT_004655f8; /* service session handle */

/* Sends IPC command 0x00010000 with one buffer address (receive descriptor 0x00800002, restored afterwards);
 * returns the result code, or the first reply word on success. */
s32 FUN_00351fb8(u32 buffer)
{
    nn::os::IpcCommandBuffer *command = nn::os::GetIpcCommandBuffer();

    nn::os::SetIpcWord(command, 0, 0x10000);
    s64 *receive = reinterpret_cast<s64 *>(nn::os::GetIpcCommandBuffer() + 1);
    s64 saved = *receive;
    u32 *words = reinterpret_cast<u32 *>(receive);
    words[0] = 0x00800002;
    words[1] = buffer;
    s32 result = nn::svc::SendSyncRequest(DAT_004655f8);
    *receive = saved;
    if (nnResultIsSuccess(result)) {
        result = command->words[0];
    }
    return result;
}

} /* extern "C" */
