/* Sends service command 0x3E (header 0x3E0042) with `request` and the selector 32; on success stores the reply byte. */
#include "nn/Result.h"
#include "nn/svc.h"
#include "nn/os/IpcCommandBuffer.h"

extern "C" {
extern u32 DAT_004655f8;

s32 FUN_00351db0(u32 request, u8 *reply)
{
    nn::os::IpcCommandBuffer *command = nn::os::GetIpcCommandBuffer();
    nn::os::SetIpcWord(command, 0, 0x3E0042);
    nn::os::SetIpcWord(command, 1, request);
    nn::os::SetIpcWord(command, 2, 32);
    s32 result = nn::svc::SendSyncRequest(DAT_004655f8);
    if (nnResultIsSuccess(result)) {
        *reply = *(const u8 *)&command->words[1];
        result = command->words[0];
    }
    return result;
}
}
