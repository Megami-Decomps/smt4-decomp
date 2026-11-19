/* NON_MATCHING: retail loads the header constant into r3 after setting the descriptor's zero id in r2, so the header store follows `mov r2, #0`;
 * this build loads the header into r2 and stores it first. */
#include "nn/svc.h"
#include "nn/Result.h"
#include "nn/os/IpcCommandBuffer.h"
#include "nn/os/IpcStaticBuffer.h"

extern "C" {

extern u32 DAT_004719e8; /* service session handle */

/* IPC request 0x0004 with one parameter (length) and one read-only buffer (length bytes at buffer);
 * returns the transport result, or the service's result word when the transport succeeded. */
s32 ipcServiceRequest04ReadBuffer(const void *buffer, u32 length)
{
    nn::os::IpcCommandBuffer *cmd = nn::os::GetIpcCommandBuffer();
    cmd->header = 0x00040042;
    cmd->words[0] = length;
    cmd->words[1] = ipcStaticBufferDescriptor(length, 0);
    cmd->words[2] = (u32)buffer;
    s32 result = nn::svc::SendSyncRequest(DAT_004719e8);
    if (nnResultIsSuccess(result)) {
        result = cmd->words[0];
    }
    return result;
}

} /* extern "C" */
