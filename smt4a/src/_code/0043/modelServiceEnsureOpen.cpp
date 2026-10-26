#include "nn/Result.h"

extern "C" {
extern u8 DAT_005c0b48;
nn::Result FUN_0016f864();
void sysFatalBreak();
u32 libc_strlen(const char *text);
s32 FUN_0016f988(u32 *handle, const char *name, u32 length, u32 flags);
s32 FUN_0043ab50();
s32 svcCloseHandle(u32 handle);

bool modelServiceEnsureOpen(u32 *handle, const char *name)
{
    u8 *ready = &DAT_005c0b48;
    if (*ready) {
        return true;
    }
    if (nnResultIsFailure((s32)FUN_0016f864())) {
        sysFatalBreak();
    }
    s32 result = FUN_0016f988(handle, name, libc_strlen(name), 1);
    if ((s32)(result & 0x80000000) < 0) {
        if ((u32)result == 0xd0401834) {
            return false;
        }
        if (nnResultIsFailure(result)) {
            sysFatalBreak();
        }
    }
    s32 closeResult = FUN_0043ab50();
    if ((s32)(closeResult & 0x80000000) < 0) {
        if (nnResultIsFailure(svcCloseHandle(*handle))) {
            sysFatalBreak();
        }
        return false;
    }
    *ready = 1;
    return true;
}
}
