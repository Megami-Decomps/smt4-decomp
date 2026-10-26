/* NON_MATCHING: readable IPC stub; retail loads the two stack arguments with one ldm into core registers and merges words 0..5 into one stm, the build loads the last argument through a VFP register. */
#include "nn/Result.h"
#include "nn/svc.h"
#include "nn/os/IpcCommandBuffer.h"
#include "nn/os/IpcStaticBuffer.h"

extern "C" {
extern u32 DAT_004656b0;

u32 FUN_001482f8(u32 first, u32 second, u32 third, u32 fourth, s32 fifth, u32 sixth)
{
    nn::os::IpcCommandBuffer *command = nn::os::GetIpcCommandBuffer();
    command->header = 0x000C0104;
    command->words[0] = first;
    command->words[1] = second;
    command->words[2] = third;
    command->words[3] = fifth;
    command->words[4] = 0;
    command->words[5] = sixth;
    command->words[6] = ipcStaticBufferDescriptor(fifth, 0);
    command->words[7] = fourth;
    s32 result = nn::svc::SendSyncRequest(DAT_004656b0);
    if ((s32)(result & 0x80000000) >= 0) {
        result = command->words[0];
    }
    return result;
}
}
