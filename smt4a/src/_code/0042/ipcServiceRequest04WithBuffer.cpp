/* NON_MATCHING: the mode byte, the push {r0-r3} spill, the handle strd and the descriptor's constant register match; retail loads buffer/size with one ldrd (buffer r0, size r1) and stores size, handle, buffer, descriptor in that order, armcc loads size into r0 and buffer into r1 with two ldr and stores the buffer first (also with --fpu=softvfp). */
/* Sends service command 0x04 with a mode byte, a 64-bit handle and an output buffer with its size
 * (header 0x10040102, a mapped-buffer descriptor); returns the reply word on success. */
#include "nn/Result.h"
#include "nn/svc.h"
#include "nn/os/IpcCommandBuffer.h"
#include "nn/os/IpcStaticBuffer.h"
#include <string.h>

extern "C" {
extern u32 DAT_005c149c;

s32 ipcServiceRequest04WithBuffer(u8 mode, u64 handle, void *buffer, u32 size)
{
    nn::os::IpcCommandBuffer *command = nn::os::GetIpcCommandBuffer();
    command->header = 0x10040102;
    memcpy(&command->words[0], &mode, sizeof(mode));
    command->words[3] = size;
    memcpy(&command->words[1], &handle, sizeof(handle));
    command->words[5] = (u32)buffer;
    command->words[4] = ipcMappedBufferDescriptor(size * 2, 10);
    s32 result = nn::svc::SendSyncRequest(DAT_005c149c);
    if (nnResultIsSuccess(result)) {
        result = command->words[0];
    }
    return result;
}
}
