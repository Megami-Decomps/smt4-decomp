#include "nn/svc.h"
#include "nn/os/IpcCommandBuffer.h"
#include "nn/os/IpcStaticBuffer.h"
#include "nn/Result.h"
#include <string.h>

extern "C" {
extern u32 g_amAppSession;

/* Sends IPC command 0x201 with a mode byte, two parameter words, `count` and two mapped buffers (`count` halfwords
 * at `buffer`, `count` 24-byte records at `handle`); returns the reply word or the error. */
u32 FUN_00352158(u32 handle, u8 mode, u32 first, u32 second, u32 buffer, s32 count)
{
    nn::os::IpcCommandBuffer *command = nn::os::GetIpcCommandBuffer();

    command->header = 0x10020104;
    memcpy(&command->words[0], &mode, sizeof(mode));
    command->words[1] = first;
    command->words[2] = second;
    command->words[3] = count;
    command->words[4] = ipcMappedBufferDescriptor(count * 2, 10);
    command->words[5] = buffer;
    command->words[6] = ipcMappedBufferDescriptor(count * 24, 0xc);
    command->words[7] = handle;
    s32 result = nn::svc::SendSyncRequest(g_amAppSession);
    return nnResultIsSuccess(result) ? command->words[0] : static_cast<u32>(result);
}
}
