#include "nn/Result.h"
#include "nn/svc.h"
#include "nn/os/IpcCommandBuffer.h"

extern "C" {

extern u32 DAT_00472a58; /* service session handle */

/* Sends IPC command 0x100a0000 (no arguments) on the session and stores the reply byte in `out`;
 * returns the result code, or the first reply word on success. */
s32 FUN_00352360(u8 *out)
{
    nn::os::IpcCommandBuffer *command = nn::os::GetIpcCommandBuffer();

    nn::os::SetIpcWord(command, 0, 0x100a0000);
    s32 result = nn::svc::SendSyncRequest(DAT_00472a58);
    if (nnResultIsSuccess(result)) {
        *out = *reinterpret_cast<u8 *>(&command->words[1]);
        result = command->words[0];
    }
    return result;
}

} /* extern "C" */
