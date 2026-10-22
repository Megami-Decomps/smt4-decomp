/* NON_MATCHING: Request arguments spill into saved VFP registers rather than retail's r4-r10 set; the error-code copy to r2 is omitted. */
#include "nn/cec/ModuleState.h"
#include "nn/Result.h"

extern "C" {
void FUN_0042d3d8(u32 enabled, u32 options);
s32 FUN_0042fcc0(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g);
extern CecModuleFlags g_asdCecModuleFlags;

/* Enables the CEC fallback and repeats the request on its specific initialization error. */
s32 FUN_0042ea6c(u32 unused, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g)
{
    s32 result = FUN_0042fcc0(a, b, c, d, e, f, g);
    if (!nnResultIsSuccess(result) && result == (s32)0xc8a10bf0) {
        FUN_0042d3d8(1, 0);
        g_asdCecModuleFlags.fallbackEnabled = 1;
        result = FUN_0042fcc0(a, b, c, d, e, f, g);
    }
    return result;
}
}
