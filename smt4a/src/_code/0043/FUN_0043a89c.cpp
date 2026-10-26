/* Sends IPC command 0x00110102 with two words, two halfwords and a handle-like value; returns the
 * result code, or the first reply word on success. */
#include "nn/Result.h"
#include "nn/svc.h"
#include <string.h>

extern "C" {

extern u32 DAT_005c0b4c; /* service session handle */

s32 FUN_0043a89c(u32 handle, u32 first, u32 second, u16 third, u16 fourth)
{
    nn::os::IpcCommandBuffer *command = nn::os::GetIpcCommandBuffer();

    command->header = 0x00110102;
    command->words[0] = first;
    command->words[1] = second;
    memcpy(&command->words[2], &third, sizeof(third));
    memcpy(&command->words[3], &fourth, sizeof(fourth));
    command->words[4] = 0;
    command->words[5] = handle;
    s32 result = nn::svc::SendSyncRequest(DAT_005c0b4c);
    if (nnResultIsSuccess(result)) {
        result = command->words[0];
    }
    return result;
}

} /* extern "C" */
