/* NON_MATCHING: the flag byte and the push {r0-r3} spill match (memcpy of the parameter); armcc orders the count/descriptor stores differently from retail (stm vs singles) */
#include "nn/Result.h"
#include "nn/svc.h"
#include "nn/os/IpcCommandBuffer.h"
#include <string.h>

extern "C" {

extern u32 DAT_005c149c; /* service session handle */

/* IPC request 0x1005 with a flag byte, a count, a buffer of count 8-byte records read from `input`
 * and a buffer of count 24-byte records written to `output`; returns the transport result, or the
 * service's result word when the transport succeeded. */
s32 FUN_004269b4(void *output, u8 flag, const void *input, s32 count)
{
    nn::os::IpcCommandBuffer *cmd = nn::os::GetIpcCommandBuffer();
    nn::os::SetIpcWord(cmd, 0, 0x10050084);
    memcpy(&cmd->words[0], &flag, sizeof(flag));
    nn::os::SetIpcWord(cmd, 2, count);
    nn::os::SetIpcWord(cmd, 3, (count << 7) | 10);
    nn::os::SetIpcWord(cmd, 4, (u32)input);
    nn::os::SetIpcWord(cmd, 5, ((count * 3) << 7) | 12);
    nn::os::SetIpcWord(cmd, 6, (u32)output);
    s32 result = nn::svc::SendSyncRequest(DAT_005c149c);
    if (nnResultIsSuccess(result)) {
        result = cmd->words[0];
    }
    return result;
}

} /* extern "C" */
