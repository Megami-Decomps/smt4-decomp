/* NON_MATCHING: retail keeps the result in a stack slot (str r0,[sp]; push {r3,...}) and copies the arguments to sl/r8/r9/fp; built keeps it in a register and spills r0-r3 */
#include "common.h"

struct CecModuleFlags {
    u8 unk00;   // 0x00
    u8 retried; // 0x01
};

extern "C" {

extern CecModuleFlags g_asdCecModuleFlags; /* 0x5b448b */

u32 FUN_00430358(u32 a, u32 b, u32 c, u32 d);
void FUN_0042d3d8(s32 a, s32 b);

/* Calls FUN_00430358, retrying up to twice (and flagging the module) while it fails with 0xC8A10BF0. */
u32 FUN_00501cf0(u32 unused, u32 a, u32 b, u32 c, u32 d)
{
    u32 result;
    s32 tries = 0;

    while (true) {
        result = FUN_00430358(a, b, c, d);
        if ((s32)(result & 0x80000000) >= 0 || tries >= 2) {
            return result;
        }
        if (result != 0xC8A10BF0) {
            break;
        }
        FUN_0042d3d8(1, 0);
        tries++;
        g_asdCecModuleFlags.retried = 1;
        if (tries >= 3) {
            return result;
        }
    }
    return result;
}

} /* extern "C" */
