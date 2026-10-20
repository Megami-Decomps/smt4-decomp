/* NON_MATCHING: the two arguments are copied to r3 then r2 before the FUN_00354dac call (retail: r2 then r3). */
#include "nn/Result.h"

extern "C" {

extern u64 FUN_002c3520(void);
extern s32 FUN_00354dac(u64 value, u32 a, u32 b);
extern int FUN_002c3510(void);

extern u8 g_appletBusyFlag; /* 0x465228 */

/* Runs FUN_00354dac on the value from FUN_002c3520; marks the applet busy when it returns a successful nn::Result. */
s32 FUN_001c0954(u32 a, u32 b)
{
    s32 result = FUN_00354dac(FUN_002c3520(), a, b);

    FUN_002c3510();
    if (nnResultIsSuccess(result)) {
        g_appletBusyFlag = 1;
    }
    return result;
}

}
