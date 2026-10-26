#include "nn/Result.h"
#include "nn/svc.h"
#include "nn/os/IpcCommandBuffer.h"

extern "C" {
extern u32 DAT_004656b0;

s32 FUN_002bb284(u32 first, u8 *output)
{
    nn::os::IpcCommandBuffer *command = nn::os::GetIpcCommandBuffer();
    command->header = 0x00090040;
    command->words[0] = first;
    s32 result = nn::svc::SendSyncRequest(DAT_004656b0);
    if ((s32)(result & 0x80000000) >= 0) {
        *output = *reinterpret_cast<u8 *>(&command->words[1]);
        result = command->words[0];
    }
    return result;
}
}
