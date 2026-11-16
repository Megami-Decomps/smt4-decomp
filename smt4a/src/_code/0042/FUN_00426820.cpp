/* NON_MATCHING: the session global is DAT_005c149c (as retail's pool word and FUN_00426940 show); the mode byte and the push {r0-r3} spill match; retail loads buffer/size with one ldrd (buffer r0, size r1) and stores size, handle, buffer, descriptor in that order, armcc loads them into the opposite registers (also with --fpu=softvfp). */
/* Sends service command 0x04 with a mode byte, a 64-bit handle and an output buffer with its size
 * (header 0x10040102, a size-encoded static-buffer descriptor); returns the reply word on success. */
#include "nn/Result.h"
#include "nn/svc.h"
#include "nn/os/IpcCommandBuffer.h"
#include <string.h>

extern "C" {
extern u32 DAT_005c149c;

s32 FUN_00426820(u8 mode, u64 handle, void *buffer, u32 size)
{
    nn::os::IpcCommandBuffer *command = nn::os::GetIpcCommandBuffer();
    nn::os::SetIpcWord(command, 0, 0x10040102);
    memcpy(&command->words[0], &mode, sizeof(mode));
    nn::os::SetIpcWord(command, 4, size);
    memcpy(&command->words[1], &handle, sizeof(handle));
    nn::os::SetIpcWord(command, 6, (u32)buffer);
    nn::os::SetIpcWord(command, 5, (size << 5) | 10);
    s32 result = nn::svc::SendSyncRequest(DAT_005c149c);
    if (nnResultIsSuccess(result)) {
        result = command->words[0];
    }
    return result;
}
}
