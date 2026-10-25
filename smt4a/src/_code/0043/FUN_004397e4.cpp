/* NON_MATCHING: armcc forwards the two stack-passed words through VFP registers (vldm/vstr); retail keeps all four stack arguments in general registers (ldm) and stores them with stm. */
#include "nn/Result.h"
#include "nn/svc.h"
#include "nn/os/IpcCommandBuffer.h"

extern "C" {

extern u32 DAT_005c0a80; /* service session handle */

/* IPC request 0x12: two sized input buffers (first, second), four word parameters and a third
 * buffer, each buffer passed as a size/pointer translate pair; returns the transport result, or the
 * service's result word when the transport succeeded, and passes one response word back in *out. */
s32 FUN_004397e4(u32 first, u32 firstSize, u32 second, u32 secondSize, u32 *out, u32 arg5, u32 third, u32 thirdSize)
{
    nn::os::IpcCommandBuffer *cmd = nn::os::GetIpcCommandBuffer();

    nn::os::SetIpcWord(cmd, 0, 0x120106);
    nn::os::SetIpcWord(cmd, 1, firstSize);
    nn::os::SetIpcWord(cmd, 2, secondSize);
    nn::os::SetIpcWord(cmd, 3, arg5);
    nn::os::SetIpcWord(cmd, 4, thirdSize);
    nn::os::SetIpcWord(cmd, 5, (firstSize << 14) | 0xC02);
    nn::os::SetIpcWord(cmd, 6, first);
    nn::os::SetIpcWord(cmd, 7, (secondSize << 20) | 0x402);
    nn::os::SetIpcWord(cmd, 8, second);
    nn::os::SetIpcWord(cmd, 9, (thirdSize << 4) | 0xC);
    nn::os::SetIpcWord(cmd, 10, third);
    s32 result = nn::svc::SendSyncRequest(DAT_005c0a80);
    if (nnResultIsSuccess(result)) {
        *out = cmd->words[1];
        result = cmd->words[0];
    }
    return result;
}

} /* extern "C" */
