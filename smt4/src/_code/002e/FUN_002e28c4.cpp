#include "map/mapDepart.h"

extern "C" {

void mapDepartSetTarget(u32 a, u32 b, u32 c);
u32 scrGetArg(s32 index);

extern GameState g_gameState;

/* Script command: runs mapDepartSetTarget on the script's first three arguments and clears unk2F8. */
s32 FUN_002e28c4(void)
{
    u32 a = scrGetArg(0);
    u32 b = scrGetArg(1);
    u32 c = scrGetArg(2);

    mapDepartSetTarget(a, b, c);
    g_gameState.unk2F8 = 0;
    return 1;
}

} /* extern "C" */
