/* NON_MATCHING: as an nn::Result the result lives in the outgoing-argument slot like retail; remaining register pressure: retail spills r0-r3 in its push and rereads the third argument from that slot, the build keeps the fifth argument in d8 (vpush). */
#include "nn/Result.h"

extern "C" {

extern u8 g_asdCecModuleFlags[];
nn::Result FUN_0042fdcc(s32 a, s32 b, s32 c, s32 d, s32 e);
void FUN_0042d3d8(s32 a, s32 b);

#define CEC_RESULT_RETRY 0xC8A10BF0u

/* Runs the CEC request, retrying up to three times while it reports the retryable result. */
nn::Result FUN_00501b14(s32 unused, s32 a, s32 b, s32 c, s32 d, s32 e)
{
    nn::Result result;

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
