#include "map/mapDepart.h"

extern "C" {

void FUN_002769b4(s32 a, u32 b, u32 c);
u32 scrGetArg(void);

extern GameState g_gameState;

/* Script command: runs FUN_002769b4 with 0xC9 and the script's argument and clears unk2F8. */
s32 FUN_002f6168(void)
{
    u32 value = scrGetArg();

    FUN_002769b4(0xC9, value, 0xFFFFFFFF);
    g_gameState.unk2F8 = 0;
    return 1;
}

} /* extern "C" */
