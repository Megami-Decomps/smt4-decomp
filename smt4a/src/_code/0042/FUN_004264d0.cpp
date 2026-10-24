/* NON_MATCHING: retail copies the 8-byte descriptor pair with ldrd/strd in r6:r7 (frame push {r4-r8, lr}); armcc copies it through VFP d8 (vldm/vstm) and the command stores pair into strd */
/* Sends service command 0x24 (header 0x240042) with a value, a buffer handle and a static buffer descriptor for `buffer`,
 * restoring the thread's previous static-buffer slots afterwards; returns the reply word on success. */
#include "nn/Result.h"
#include "nn/svc.h"

extern "C" {
extern u32 DAT_005b4438;

s32 FUN_004264d0(u32 handle, u32 buffer, u32 value)
{
    nn::os::IpcCommandBuffer *command = nn::os::GetIpcCommandBuffer();
    command->header = 0x240042;
    command->words[0] = value;
    command->words[1] = 0x800002;
    command->words[2] = handle;

    /* The static buffer descriptor pair lives at thread-local storage + 0x180. */
    u32 *descriptor = (u32 *)((u8 *)nn::os::GetThreadLocalStorage() + 0x180);
    u64 savedDescriptor = *(u64 *)descriptor;

    descriptor[0] = 0x800002;
    descriptor[1] = buffer;
    s32 result = nn::svc::SendSyncRequest(DAT_005b4438);
    *(u64 *)descriptor = savedDescriptor;
    if (nnResultIsSuccess(result)) {
        result = command->words[0];
    }
    return result;
}
}
