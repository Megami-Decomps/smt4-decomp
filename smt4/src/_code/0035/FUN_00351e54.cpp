/* Sends service command 0x24 (header 0x240042) with a value, a buffer handle and a static buffer descriptor for `buffer`,
 * restoring the thread's previous static-buffer slots afterwards; returns the reply word on success. */
#include "nn/Result.h"
#include "nn/svc.h"
#include "nn/os/IpcCommandBuffer.h"

extern "C" {
extern u32 DAT_004655f8;

s32 FUN_00351e54(u32 handle, u32 buffer, u32 value)
{
    nn::os::IpcCommandBuffer *command = nn::os::GetIpcCommandBuffer();
    nn::os::SetIpcWord(command, 0, 0x240042);
    nn::os::SetIpcWord(command, 1, value);
    nn::os::SetIpcWord(command, 2, 0x800002);
    nn::os::SetIpcWord(command, 3, handle);

    /* The static buffer descriptor pair lives at thread-local storage + 0x180. */
    u32 *descriptor = (u32 *)((u8 *)nn::os::GetThreadLocalStorage() + 0x180);
    u64 savedDescriptor = *(u64 *)descriptor;

    descriptor[0] = 0x800002;
    descriptor[1] = buffer;
    s32 result = nn::svc::SendSyncRequest(DAT_004655f8);
    *(u64 *)descriptor = savedDescriptor;
    if (nnResultIsSuccess(result)) {
        result = command->words[0];
    }
    return result;
}
}
