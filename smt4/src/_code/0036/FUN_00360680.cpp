#include "nn/Result.h"
#include "nn/svc.h"
#include <string.h>

extern "C" u32 DAT_00471bac;

/* Sends five parameters (two words, two halfwords and a trailing word) to the service. */
extern "C" s32 FUN_00360680(u32 first, u32 second, u32 third, u16 fourth, u16 fifth)
{
    nn::os::IpcCommandBuffer *command = nn::os::GetIpcCommandBuffer();
    command->header = 0x120102;
    command->words[0] = second;
    command->words[1] = third;
    memcpy(&command->words[2], &fourth, sizeof(fourth));
    memcpy(&command->words[3], &fifth, sizeof(fifth));
    command->words[5] = first;
    command->words[4] = 0;
    s32 result = nn::svc::SendSyncRequest(DAT_00471bac);
    if (nnResultIsSuccess(result)) {
        result = command->words[0];
    }
    return result;
}
