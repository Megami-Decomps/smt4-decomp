#include "map/mapDepart.h"

extern "C" {

void FUN_00270c58(u32 value);
void FUN_003b5050(void);
u32 scrGetArg(void);

extern GameStateA g_gameState;

/* Script command: runs FUN_003b5050 and FUN_00270c58 on the script's argument. */
s32 FUN_0031c388(void)
{
    u32 value = scrGetArg();

    FUN_003b5050();
    g_gameState.unk454 = -1;
    FUN_00270c58(value);
    return 3;
}

} /* extern "C" */
