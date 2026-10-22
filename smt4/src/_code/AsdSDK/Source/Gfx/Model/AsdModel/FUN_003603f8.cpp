/* NON_MATCHING: retail inlines CloseHandle; the existing wrapper remains out of line and result branches fold differently. */
#include "nn/Result.h"

extern "C" {
extern u8 DAT_00471ba8;
s32 FUN_002c1398();
void asdFatalError();
u32 libc_strlen(const char *text);
s32 asdModelForwardChecked(u32 *handle, const char *name, u32 length, u32 flags);
s32 FUN_003608d8();
s32 svcCloseHandle(u32 handle);

bool FUN_003603f8(u32 *handle, const char *name)
{
    if (DAT_00471ba8) {
        return true;
    }
    if (nnResultIsFailure(FUN_002c1398())) {
        asdFatalError();
    }
    s32 result = asdModelForwardChecked(handle, name, libc_strlen(name), 1);
    if (nnResultIsFailure(result)) {
        if ((u32)result == 0xd0401834) {
            return false;
        }
        asdFatalError();
    }
    if (nnResultIsSuccess(FUN_003608d8())) {
        DAT_00471ba8 = 1;
        return true;
    }
    if (nnResultIsFailure(svcCloseHandle(*handle))) {
        asdFatalError();
    }
    return false;
}
}
