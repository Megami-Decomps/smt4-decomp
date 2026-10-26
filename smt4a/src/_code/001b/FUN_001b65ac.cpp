/* NON_MATCHING: readable IPC stub; only register assignment of the output pointers differs (retail keeps the two stack arguments in r8/r9 via one ldrd, the build in r5/r6 via ldm). */
#include "nn/Result.h"
#include "nn/svc.h"
#include "nn/os/IpcCommandBuffer.h"

extern "C" {
extern u32 DAT_005b4480;

s32 FUN_001b65ac(u32 first, u64 *pair, u8 *byteA, u8 *byteB, u8 *byteC, u32 *word)
{
    nn::os::IpcCommandBuffer *command = nn::os::GetIpcCommandBuffer();
    command->header = 0x00060040;
    command->words[0] = first;
    s32 result = nn::svc::SendSyncRequest(DAT_005b4480);
    if ((s32)(result & 0x80000000) >= 0) {
        *pair = *reinterpret_cast<u64 *>(&command->words[1]);
        *byteA = *reinterpret_cast<u8 *>(&command->words[3]);
        *byteB = *reinterpret_cast<u8 *>(&command->words[4]);
        *byteC = *reinterpret_cast<u8 *>(&command->words[5]);
        *word = command->words[6];
        result = command->words[0];
    }
    return result;
}
}
