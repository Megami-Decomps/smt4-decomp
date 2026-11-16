/* NON_MATCHING: as an nn::Result the result now lives in its stack slot (push r3; str r0, [sp]) like retail; only the callee-saved numbering differs (retail: one in r6, flags in r7, arguments in r8-fp; build: arguments in r6-r8/r5, constants in r9-fp). */
#include "nn/Result.h"

struct CecModuleFlags {
    u8 unk00;   // 0x00
    u8 retried; // 0x01
};

extern "C" {

extern CecModuleFlags g_asdCecModuleFlags; /* 0x5b448b */

nn::Result FUN_00430358(u32 a, u32 b, u32 c, u32 d);
void FUN_0042d3d8(s32 a, s32 b);

/* Calls FUN_00430358, retrying up to twice (and flagging the module) while it fails with 0xC8A10BF0. */
nn::Result FUN_00501cf0(u32 unused, u32 a, u32 b, u32 c, u32 d)
{
    nn::Result result;
    s32 tries = 0;

    do {
        result = FUN_00430358(a, b, c, d);
        if ((s32)(result & 0x80000000) >= 0 || tries >= 2) {
            break;
        }
        if (result != 0xC8A10BF0) {
            break;
        }
        FUN_0042d3d8(1, 0);
        tries++;
        g_asdCecModuleFlags.retried = 1;
    } while (tries < 3);
    return result;
}

} /* extern "C" */
