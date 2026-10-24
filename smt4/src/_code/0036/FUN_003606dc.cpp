/* NON_MATCHING: retail spills r0-r3 (push {r0-r3, r4, lr}) and reads the two halfword parameters from the frame with ldrh ([sp, #12] and [sp, #24]); armcc keeps them in r3/ip */
/* Sends service command 0x10 (header 0x100102) with two words, two halfwords and a value; returns the reply word on success. */
#include "nn/Result.h"
#include "nn/svc.h"

extern "C" {
extern u32 DAT_00471bac;

s32 FUN_003606dc(u32 value, u32 first, u32 second, u16 third, u16 fourth)
{
    nn::os::IpcCommandBuffer *command = nn::os::GetIpcCommandBuffer();
    command->header = 0x100102;
    command->words[0] = first;
    command->words[1] = second;
    *(u16 *)&command->words[2] = third;
    *(u16 *)&command->words[3] = fourth;
    command->words[4] = 0;
    command->words[5] = value;
    s32 result = nn::svc::SendSyncRequest(DAT_00471bac);
    if (nnResultIsSuccess(result)) {
        result = command->words[0];
    }
    return result;
}
}
