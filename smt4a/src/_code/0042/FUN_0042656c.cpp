/* Sends service command 0x27 (header 0x270002) with `request`; on success stores the reply byte. */
#include "nn/Result.h"
#include "nn/svc.h"
#include "nn/os/IpcCommandBuffer.h"

extern "C" {
extern u32 DAT_005b4438;

s32 FUN_0042656c(u32 request, u8 *reply)
{
    nn::os::IpcCommandBuffer *command = nn::os::GetIpcCommandBuffer();
    nn::os::SetIpcWord(command, 0, 0x270002);
    nn::os::SetIpcWord(command, 1, 0x800402);
    nn::os::SetIpcWord(command, 2, request);
    s32 result = nn::svc::SendSyncRequest(DAT_005b4438);
    if (nnResultIsSuccess(result)) {
        *reply = *(const u8 *)&command->words[1];
        result = command->words[0];
    }
    return result;
}
}
