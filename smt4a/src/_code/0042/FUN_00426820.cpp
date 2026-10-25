/* NON_MATCHING: the mode byte and the push {r0-r3} spill match (memcpy of the parameter); retail loads buffer/size with one ldrd and stores them singly, armcc loads them in the opposite order into r0/r1 and merges size/descriptor into stm */
/* Sends service command 0x04 with a mode byte, a 64-bit handle and an output buffer with its size
 * (header 0x10040102, a size-encoded static-buffer descriptor); returns the reply word on success. */
#include "nn/Result.h"
#include "nn/svc.h"
#include <string.h>

extern "C" {
extern u32 DAT_005b4438;

s32 FUN_00426820(u8 mode, u64 handle, void *buffer, u32 size)
{
    nn::os::IpcCommandBuffer *command = nn::os::GetIpcCommandBuffer();
    command->header = 0x10040102;
    memcpy(&command->words[0], &mode, sizeof(mode));
    command->words[3] = size;
    memcpy(&command->words[1], &handle, sizeof(handle));
    command->words[5] = (u32)buffer;
    command->words[4] = (size << 5) | 10;
    s32 result = nn::svc::SendSyncRequest(DAT_005b4438);
    if (nnResultIsSuccess(result)) {
        result = command->words[0];
    }
    return result;
}
}
