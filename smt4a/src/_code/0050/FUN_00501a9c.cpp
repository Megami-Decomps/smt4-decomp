/* NON_MATCHING: retail copies the two stack arguments with ldrd/strd and keeps the first pair in its spilled slots (ldm); built copies via VFP (vldmia/vstmia) and keeps them in registers. */
#include "common.h"

extern "C" {

extern u8 g_asdCecModuleFlags[]; /* 0x5b448b */
s32 FUN_0042fd64(u32 handle, u32 a, u32 b, u32 c, u32 d, u32 e);
void FUN_0042d3d8(s32 a, s32 b);

// Run the CEC request up to three times, retrying (and flagging the module) while it reports result 0xc8a10bf0.
s32 FUN_00501a9c(u32 unused, u32 handle, u32 a, u32 b, u32 c, u32 d, u32 e)
{
    s32 result;
    s32 tries = 0;
    do {
        result = FUN_0042fd64(handle, a, b, c, d, e);
        if (result != (s32)0xc8a10bf0) {
            break;
        }
        FUN_0042d3d8(1, 0);
        tries++;
        g_asdCecModuleFlags[1] = 1;
    } while (tries < 3);
    return result;
}

} /* extern "C" */
