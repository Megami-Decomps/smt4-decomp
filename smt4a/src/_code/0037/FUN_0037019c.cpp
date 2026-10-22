#include "map/mapDepart.h"

extern "C" {

void mapPlaceSet(s32 a, s32 b, s32 c);
void FUN_00376fb8(u32 value);
u32 scrGetArg(...);
void asdSequenceRequest(s32 a, s32 b, s32 c);

extern GameStateA g_gameState;

/* Script command: passes the script's first argument to FUN_00376fb8, then runs mapPlaceSet and asdSequenceRequest. */
s32 FUN_0037019c(void)
{
    u32 value = scrGetArg();

    scrGetArg(1);
    FUN_00376fb8(value);
    mapPlaceSet(0x18, 1, 0);
    g_gameState.transitionActive = 0;
    asdSequenceRequest(6, 0, 0);
    return 1;
}

} /* extern "C" */
