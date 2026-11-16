/* NON_MATCHING: IDENTICAL when compiled with --cpu=MPCore --fpu=softvfp (no VFP: retail copies the three stack words (ldm/stm) with core registers); the default build uses VFP. Needs that unit cflags. */
#include "nn/svc.h"
#include "nn/os/IpcStaticBuffer.h"
#include "nn/Result.h"
#include <string.h>

extern "C" {
extern u32 DAT_005c149c;

/* Sends IPC command 0x301 describing `count` elements at `a`/`b`/`c`; stores the reply's second word in *out and returns the reply word or the error. */
s32 FUN_00426940(u32 *out, u32 handle, s32 count, u8 mode, u32 a, u32 b, u32 c)
{
    nn::os::IpcCommandBuffer *command = nn::os::GetIpcCommandBuffer();

    command->header = 0x10030142;
    command->words[0] = count;
    memcpy(&command->words[1], &mode, sizeof(mode));
    command->words[2] = a;
    command->words[3] = b;
    command->words[4] = c;
    command->words[5] = ipcMappedBufferDescriptor(count * 24, 0xc);
    command->words[6] = handle;
    s32 result = nn::svc::SendSyncRequest(DAT_005c149c);
    if (nnResultIsSuccess(result)) {
        *out = command->words[1];
        result = command->words[0];
    }
    return result;
}
}
