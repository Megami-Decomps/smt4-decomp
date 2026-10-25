/* NON_MATCHING: status tests now match via nnResultIsFailure, but context/text/active-flag saved registers and final flag-store scheduling differ. */
#include "nn/Result.h"

extern "C" {
extern u8 DAT_005c0a84;
s32 FUN_0016f864();
u32 libc_strlen(const u16* text);
s32 FUN_0016f988(u32 context, const u16* text, u32 length, u32 flags);

// Begin the text operation once and mark it active only when both SDK calls succeed.
s32 FUN_00147088(u32 context, const u16* text)
{
    s32 status;
    if (DAT_005c0a84 != 0) {
        status = (s32)0xe0a0d3f9;
    } else {
        status = FUN_0016f864();
        if (!nnResultIsFailure(status)) {
            u32 length = libc_strlen(text);
            status = FUN_0016f988(context, text, length, 0);
            if (!nnResultIsFailure(status)) {
                DAT_005c0a84 = 1;
                status = 0;
            }
        }
    }
    return status;
}
}
