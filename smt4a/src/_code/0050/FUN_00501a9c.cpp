/* NON_MATCHING: as an nn::Result the result lives in the outgoing-argument slot like retail; remaining register pressure: retail spills r0-r3 in its push and rereads the first argument pair from that slot (ldm), copying the stack pair with ldrd/strd, where the build copies it through d8 (vpush). */
#include "nn/Result.h"

extern "C" {

extern u8 g_asdCecModuleFlags[]; /* 0x5b448b */
nn::Result FUN_0042fd64(u32 handle, u32 a, u32 b, u32 c, u32 d, u32 e);
void FUN_0042d3d8(s32 a, s32 b);

// Run the CEC request up to three times, retrying (and flagging the module) while it reports result 0xc8a10bf0.
nn::Result FUN_00501a9c(u32 unused, u32 handle, u32 a, u32 b, u32 c, u32 d, u32 e)
{
    nn::Result result;
    s32 tries = 0;
    do {
        result = FUN_0042fd64(handle, a, b, c, d, e);
        if (result != 0xc8a10bf0) {
            break;
        }
        FUN_0042d3d8(1, 0);
        tries++;
        g_asdCecModuleFlags[1] = 1;
    } while (tries < 3);
    return result;
}

} /* extern "C" */
