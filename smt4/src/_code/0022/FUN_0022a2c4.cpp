#include "common.h"

extern "C" {

extern u32 g_aocMain;

extern s32 FUN_002a6c5c(u32 a, u32 b, u32 c);
extern s32 FUN_002a6d08(u32 main);

/* Returns 1 when FUN_002a6d08 passes and FUN_002a6c5c(a, 0x1e, b) succeeds. */
u32 FUN_0022a2c4(u32 a, u32 b)
{
    if (FUN_002a6d08(g_aocMain) != 0) {
        return FUN_002a6c5c(a, 0x1E, b) != 0;
    }
    return 0;
}

} /* extern "C" */
