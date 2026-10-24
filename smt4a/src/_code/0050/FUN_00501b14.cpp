/* NON_MATCHING: register pressure: retail spills the last result to the outgoing-argument slot and keeps the stack arguments in core registers; ours keeps the result in r4 and the fifth argument in d8 (vpush). */
#include "common.h"

extern "C" {

extern u8 g_asdCecModuleFlags[];
s32 FUN_0042fdcc(s32 a, s32 b, s32 c, s32 d, s32 e);
void FUN_0042d3d8(s32 a, s32 b);

#define CEC_RESULT_RETRY ((s32)0xC8A10BF0)

/* Runs the CEC request, retrying up to three times while it reports the retryable result. */
s32 FUN_00501b14(s32 unused, s32 a, s32 b, s32 c, s32 d, s32 e)
{
    s32 result;

    for (s32 attempt = 0; attempt < 3; attempt++) {
        result = FUN_0042fdcc(a, b, c, d, e);
        if (result != CEC_RESULT_RETRY) {
            return result;
        }
        FUN_0042d3d8(1, 0);
        g_asdCecModuleFlags[1] = 1;
    }
    return result;
}

} /* extern "C" */
