#include "common.h"

extern "C" {

extern u32 g_aocMain;

extern s32 FUN_002a6c5c(u32 a, u32 b, u32 c);
extern s32 FUN_002a6d08(u32 main);

/* Returns 1 when FUN_002a6d08 passes (only checked when `check` is set) and FUN_002a6c5c(a, 0x10, b) succeeds. */
u32 FUN_0023e3a4(u32 a, u32 b, s32 check)
{
    if (check == 0 || FUN_002a6d08(g_aocMain) != 0) {
        return FUN_002a6c5c(a, 0x10, b) != 0;
    }
    return 0;
}

} /* extern "C" */
