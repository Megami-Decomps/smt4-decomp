/* NON_MATCHING: instructions match except the saved-register numbering (retail keeps the ready-flag address in r4 and the arguments in r5/r6); armcc here numbers them the other way round. */
#include "nn/Result.h"
#include "code/Code002c_Result.h"

extern "C" {
extern u8 DAT_00471ba8;
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
    if (nnResultIsFailure((s32)FUN_002c1398())) {
        asdFatalError();
    }
    s32 result = asdModelForwardChecked(handle, name, libc_strlen(name), 1);
    if ((s32)(result & 0x80000000) < 0) {
        if ((u32)result == 0xd0401834) {
            return false;
        }
        if (nnResultIsFailure(result)) {
            asdFatalError();
        }
    }
    s32 closeResult = FUN_003608d8();
    if ((s32)(closeResult & 0x80000000) < 0) {
        if (nnResultIsFailure(svcCloseHandle(*handle))) {
            asdFatalError();
        }
        return false;
    }
    DAT_00471ba8 = 1;
    return true;
}
}
