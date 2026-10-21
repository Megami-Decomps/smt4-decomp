/* NON_MATCHING: status tests now match via nnResultIsFailure, but context/text/active-flag saved registers and final flag-store scheduling differ. */
#include "nn/Result.h"

extern "C" {
extern u8 DAT_00471a10;
s32 FUN_002c1398();
u32 libc_strlen(const char* text);
s32 asdModelForwardChecked(u32 context, const char* text, u32 length, u32 flags);

// Begin the text operation once and mark it active only when both SDK calls succeed.
s32 FUN_0010feb4(u32 context, const char* text)
{
    s32 status;
    if (DAT_00471a10 != 0) {
        status = (s32)0xe0a0d3f9;
    } else {
        status = FUN_002c1398();
        if (!nnResultIsFailure(status)) {
            u32 length = libc_strlen(text);
            status = asdModelForwardChecked(context, text, length, 0);
            if (!nnResultIsFailure(status)) {
                DAT_00471a10 = 1;
                status = 0;
            }
        }
    }
    return status;
}
}
