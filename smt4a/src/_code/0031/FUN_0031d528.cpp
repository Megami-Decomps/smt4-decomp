#include "map/mapDepart.h"

extern "C" {

void FUN_001f4e20(s32 a, s32 b);
void FUN_002360dc(void);
void FUN_002392b8(void);

extern GameStateA g_gameState;

s32 FUN_0031d528(void)
{
    FUN_002360dc();
    FUN_002392b8();
    FUN_001f4e20(0, 1);
    g_gameState.unk484 = 0;
    return 1;
}

} /* extern "C" */
