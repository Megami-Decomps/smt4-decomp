/* Sends service command 0x2D (header 0x2d0082) with two flag bytes and an input buffer handle, and a static buffer
 * descriptor for `outputAddress`, restoring the thread's previous static-buffer slots afterwards; returns the reply word on success. */
#include "nn/Result.h"
#include "nn/svc.h"
#include "nn/os/IpcCommandBuffer.h"
#include <string.h>

extern "C" {
extern u32 DAT_005b4438;

s32 FUN_004266e4(u32 inputAddress, u32 outputAddress, u8 firstFlag, u8 secondFlag)
{
    nn::os::IpcCommandBuffer *command = nn::os::GetIpcCommandBuffer();
    nn::os::SetIpcWord(command, 0, 0x2d0082);
    memcpy(&command->words[0], &firstFlag, sizeof firstFlag);
    memcpy(&command->words[1], &secondFlag, sizeof secondFlag);
    nn::os::SetIpcWord(command, 3, 0x800002);
    nn::os::SetIpcWord(command, 4, inputAddress);

    /* The static buffer descriptor pair lives at thread-local storage + 0x180. */
    u32 *descriptor = (u32 *)((u8 *)nn::os::GetThreadLocalStorage() + 0x180);
    u64 savedDescriptor = *(u64 *)descriptor;

    descriptor[0] = 0x800002;
    descriptor[1] = outputAddress;
    s32 result = nn::svc::SendSyncRequest(DAT_005b4438);
    *(u64 *)descriptor = savedDescriptor;
    if (nnResultIsSuccess(result)) {
        result = command->words[0];
    }
    return result;
}
}
