/* NON_MATCHING: the three stack words are one by-value struct (retail copies them with ldm/stm through r4-r6 and the saved set r4-r10); armcc keeps the copy in saved VFP registers (vldmia/vstmia s16-s18) and the error-code copy to r2 is omitted. */
#include "nn/cec/ModuleState.h"
#include "nn/Result.h"

/* Three request words passed by value on the stack. */
struct CecRequestWords {
    u32 first;
    u32 second;
    u32 third;
};

extern "C" {
void FUN_0042d3d8(u32 enabled, u32 options);
s32 FUN_0042fcc0(u32 a, u32 b, u32 c, u32 d, CecRequestWords words);
extern CecModuleFlags g_asdCecModuleFlags;

/* Enables the CEC fallback and repeats the request on its specific initialization error. */
s32 FUN_0042ea6c(u32 unused, u32 a, u32 b, u32 c, u32 d, CecRequestWords words)
{
    s32 result = FUN_0042fcc0(a, b, c, d, words);
    if (!nnResultIsSuccess(result) && result == (s32)0xc8a10bf0) {
        FUN_0042d3d8(1, 0);
        g_asdCecModuleFlags.fallbackEnabled = 1;
        result = FUN_0042fcc0(a, b, c, d, words);
    }
    return result;
}
}
