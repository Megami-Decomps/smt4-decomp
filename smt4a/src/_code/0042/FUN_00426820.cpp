/* NON_MATCHING: parameter shape differs (retail receives a 64-bit value in r2:r3 and further words on the stack and stores them singly/strd); armcc merges the command stores into stm */
/* Sends service command 0x04 with a byte, an id and two 32-bit parameters (header 0x10040102, a size-encoded descriptor);
 * returns the reply word on success. */
#include "nn/Result.h"
#include "nn/svc.h"

extern "C" {
extern u32 DAT_005b4438;

s32 FUN_00426820(u8 flag, u32 id, u64 value, u32 buffer)
{
    nn::os::IpcCommandBuffer *command = nn::os::GetIpcCommandBuffer();
    command->header = 0x10040102;
    command->words[0] = flag;
    *(u64 *)&command->words[1] = value;
    command->words[3] = id;
    command->words[4] = (id << 5) | 10;
    command->words[5] = buffer;
    s32 result = nn::svc::SendSyncRequest(DAT_005b4438);
    if (nnResultIsSuccess(result)) {
        result = command->words[0];
    }
    return result;
}
}
