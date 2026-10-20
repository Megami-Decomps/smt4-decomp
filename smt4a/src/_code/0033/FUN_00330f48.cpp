#include "map/mapDepart.h"

extern "C" {

void FUN_00324bc8(u32 a, u32 b, u32 c);
void FUN_003fd63c(s32 a, s32 b, s32 c);
s32 FUN_0018719c(u32 id);
u32 scrGetArg(s32 index);

extern GameStateA g_gameState;

/* Script command: clears effect 0x11F9 when it is set, then runs FUN_00324bc8 on the first three arguments. */
s32 FUN_00330f48(void)
{
    u32 a = scrGetArg(0);
    u32 b = scrGetArg(1);
    u32 c = scrGetArg(2);

    if (FUN_0018719c(0x11F9) != 0) {
        FUN_003fd63c(0x11F9, 0, 1);
    }
    FUN_00324bc8(a, b, c);
    g_gameState.unk574 = 0;
    return 1;
}

} /* extern "C" */
