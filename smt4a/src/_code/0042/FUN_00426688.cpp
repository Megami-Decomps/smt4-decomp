/* NON_MATCHING: retail copies the 8-byte descriptor pair with ldrd/strd in r6:r7 (frame push {r4-r8, lr}); armcc copies it through VFP d8 (vldm/vstm) and merges the header/selector stores into stm */
/* Sends service command 0x14 (header 0x140002) with a static receive buffer descriptor for `buffer`, restoring the thread's
 * previous static-buffer slots afterwards; returns the reply word on success. */
#include "nn/Result.h"
#include "nn/svc.h"

extern "C" {
extern u32 DAT_005b4438;

s32 FUN_00426688(u32 buffer)
{
    nn::os::IpcCommandBuffer *command = nn::os::GetIpcCommandBuffer();
    command->header = 0x140002;
    command->words[0] = 32;

    /* The static buffer descriptor pair lives at thread-local storage + 0x180. */
    u32 *descriptor = (u32 *)((u8 *)nn::os::GetThreadLocalStorage() + 0x180);
    u64 savedDescriptor = *(u64 *)descriptor;

    descriptor[1] = buffer;
    descriptor[0] = 0x2C002;
    s32 result = nn::svc::SendSyncRequest(DAT_005b4438);
    *(u64 *)descriptor = savedDescriptor;
    if (nnResultIsSuccess(result)) {
        result = command->words[0];
    }
    return result;
}
}
