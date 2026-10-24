#include "nn/Result.h"
#include "nn/svc.h"

extern "C" u32 DAT_00471ba4;

/* Sends the parameterless request; on success stores the third response word in *out and returns the service's result word. */
extern "C" s32 FUN_0011cec8(u32 *out)
{
    nn::os::IpcCommandBuffer *command = nn::os::GetIpcCommandBuffer();
    command->header = 0x20000;
    s32 result = nn::svc::SendSyncRequest(DAT_00471ba4);
    if (nnResultIsSuccess(result)) {
        *out = command->words[2];
        result = command->words[0];
    }
    return result;
}
