/* NON_MATCHING: same IPC call; retail spills r0-r3 and reloads the two halfword arguments from the stack (the original signature differs), armcc keeps them in registers. */
#include "nn/Result.h"
#include "nn/svc.h"

extern "C" {

extern u32 DAT_00471bac; /* service session handle */

/* Sends IPC command 0x00110102 with two words, two halfwords and a handle-like value; returns the
 * result code, or the first reply word on success. */
s32 FUN_00360624(u32 handle, u32 first, u32 second, u16 third, u32 unused, u32 unused2, u16 fourth)
{
    nn::os::IpcCommandBuffer *command = nn::os::GetIpcCommandBuffer();

    command->header = 0x00110102;
    command->words[0] = first;
    command->words[1] = second;
    *reinterpret_cast<u16 *>(&command->words[2]) = third;
    *reinterpret_cast<u16 *>(&command->words[3]) = fourth;
    command->words[4] = 0;
    command->words[5] = handle;
    s32 result = nn::svc::SendSyncRequest(DAT_00471bac);
    if (nnResultIsSuccess(result)) {
        result = command->words[0];
    }
    return result;
}

} /* extern "C" */
