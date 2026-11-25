/* NON_MATCHING: retail sets both translation descriptors in spare registers before loading the
 * session address; the build interleaves the immediate loads and descriptor stores differently. */
#include "nn/Result.h"
#include "nn/svc.h"
#include "nn/os/IpcCommandBuffer.h"
#include "nn/os/ProcessEventIpc.h"
#include <string.h>

extern "C" {
extern u32 DAT_005b4438; /* IPC session */

enum {
    REGISTER_EVENT_HEADER = 0x300004,
    IPC_COPY_ONE_HANDLE = 0,
    IPC_CURRENT_PROCESS_ID = 0x20
};

/* Sends the event handle and asks the kernel to include the sending process's ID. */
s32 FUN_00426754(u32 eventHandle)
{
    nn::os::IpcCommandBuffer *command = nn::os::GetIpcCommandBuffer();
    nn::os::SetIpcWord(command, 0, REGISTER_EVENT_HEADER);
    nn::os::SetIpcWord(command, 4, eventHandle);
    const u32 handleDescriptor = IPC_COPY_ONE_HANDLE;
    const u32 processDescriptor = IPC_CURRENT_PROCESS_ID;
    memcpy(&command->words[2], &handleDescriptor, sizeof(handleDescriptor));
    memcpy(&command->words[0], &processDescriptor, sizeof(processDescriptor));
    s32 result = nn::svc::SendSyncRequest(DAT_005b4438);
    if (nnResultIsSuccess(result)) {
        result = command->words[0];
    }
    return result;
}

} /* extern "C" */
