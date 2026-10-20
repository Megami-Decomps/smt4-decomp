#include "common.h"

extern "C" {

extern u32 g_aocMain;

extern s32 FUN_001b2d88(u32 a, u32 b, u32 c);
extern s32 FUN_001b3148(u32 main);

/* Returns 1 when FUN_001b3148 passes (only checked when `check` is set) and FUN_001b2d88(a, 0x10, b) succeeds. */
u32 FUN_00470b18(u32 a, u32 b, s32 check)
{
    if (check == 0 || FUN_001b3148(g_aocMain) != 0) {
        return FUN_001b2d88(a, 0x10, b) != 0;
    }
    return 0;
}

} /* extern "C" */
