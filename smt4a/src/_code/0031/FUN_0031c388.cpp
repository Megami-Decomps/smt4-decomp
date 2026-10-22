#include "map/mapDepart.h"

extern "C" {

void FUN_00270c58(u32 value);
void sysClearCachedFlag(void);
u32 scrGetArg(void);

extern GameStateA g_gameState;

/* Script command: runs sysClearCachedFlag and FUN_00270c58 on the script's argument. */
s32 FUN_0031c388(void)
{
    u32 value = scrGetArg();

    sysClearCachedFlag();
    g_gameState.mapFlags.unk454 = -1;
    FUN_00270c58(value);
    return 3;
}

} /* extern "C" */
