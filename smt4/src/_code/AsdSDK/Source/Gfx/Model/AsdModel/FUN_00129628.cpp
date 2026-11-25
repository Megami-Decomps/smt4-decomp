/* NON_MATCHING: the packet and result handling agree; retail saves the output handle in r5 and
 * reuses the command buffer base for the length/flags store, where the build keeps a payload pointer. */
#include "nn/Result.h"
#include "nn/srv/SessionIpc.h"
#include "nn/svc.h"
#include <string.h>

extern "C" {
extern u32 DAT_00471ba4; /* srv session handle */

/* Requests the handle of a named service; writes it only on a successful transport call. */
s32 FUN_00129628(u32 *handle, const char *name, s32 nameLength, u32 flags)
{
    nn::os::IpcCommandBuffer *command = nn::os::GetIpcCommandBuffer();
    command->header = SRV_GET_SERVICE_HANDLE_HEADER;
    u32 *parameters = command->words;
    memcpy(parameters, name, SRV_SERVICE_NAME_BYTES);
    parameters[2] = nameLength;
    parameters[3] = flags;
    s32 result = nn::svc::SendSyncRequest(DAT_00471ba4);
    if (nnResultIsSuccess(result)) {
        *handle = command->words[2];
        result = command->words[0];
    }
    return result;
}

} /* extern "C" */
