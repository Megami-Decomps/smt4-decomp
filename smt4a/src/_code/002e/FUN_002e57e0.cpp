#include "map/mapDepart.h"

extern "C" {

void FUN_00270c58(u32 value);
void FUN_003847ac(u32 a, u32 b);
u32 scrGetArg(s32 index);

extern GameStateA g_gameState;

/* Script command: runs FUN_003847ac on arguments 1 and 2 and FUN_00270c58 on argument 0. */
s32 FUN_002e57e0(void)
{
    u32 a = scrGetArg(0);
    u32 c = scrGetArg(2);
    u32 b = scrGetArg(1);

    FUN_003847ac(b, c);
    g_gameState.unk454 = -1;
    FUN_00270c58(a);
    return 3;
}

} /* extern "C" */
