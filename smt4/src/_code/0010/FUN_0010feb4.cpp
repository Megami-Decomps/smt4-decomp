/* NON_MATCHING: native nn::Result local and named activity-state pointer restore saved registers and final flag store; only first failure predicate uses r1 instead of retail r2. */
#include "nn/Result.h"
#include "code/Code002c_Result.h"

extern "C" {
extern u8 DAT_00471a10;
u32 libc_strlen(const char* text);
s32 asdModelForwardChecked(u32 context, const char* text, u32 length, u32 flags);

// Begin the text operation once and mark it active only when both SDK calls succeed.
s32 FUN_0010feb4(u32 context, const char* text)
{
    u8 *active = &DAT_00471a10;
    nn::Result status;
    if (*active != 0) {
        status = (s32)0xe0a0d3f9;
    } else {
        status = (s32)FUN_002c1398();
        if (!nnResultIsFailure(status)) {
            u32 length = libc_strlen(text);
            status = asdModelForwardChecked(context, text, length, 0);
            if (!nnResultIsFailure(status)) {
                *active = 1;
                status = 0;
            }
        }
    }
    return status;
}
}
