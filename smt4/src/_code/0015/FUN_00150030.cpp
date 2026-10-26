/* NON_MATCHING: readable IPC stub; only scheduling differs (retail materialises the zero id of the static-buffer descriptor before storing the header word). */
#include "nn/Result.h"
#include "nn/svc.h"
#include "nn/os/IpcCommandBuffer.h"
#include "nn/os/IpcStaticBuffer.h"

extern "C" {
extern u32 DAT_004656b0;

u32 FUN_00150030(u32 first, s32 second)
{
    nn::os::IpcCommandBuffer *command = nn::os::GetIpcCommandBuffer();
    command->header = 0x00400042;
    command->words[0] = second;
    nn::os::SetIpcWord(command, 2, ipcStaticBufferDescriptor(second, 0));
    command->words[2] = first;
    s32 result = nn::svc::SendSyncRequest(DAT_004656b0);
    if ((s32)(result & 0x80000000) >= 0) {
        result = command->words[0];
    }
    return result;
}
}
