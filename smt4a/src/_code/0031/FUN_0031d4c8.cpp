#include "map/mapDepart.h"

extern "C" {

void mapPlaceSet(u32 a, u32 b, u32 c);
u32 scrGetArg(s32 index);
void asdSequenceRequest(s32 a, s32 b, s32 c);

extern GameStateA g_gameState;

/* Script command: runs mapPlaceSet on the script's first three arguments and clears unk574. */
s32 FUN_0031d4c8(void)
{
    u32 a = scrGetArg(0);
    u32 b = scrGetArg(1);
    u32 c = scrGetArg(2);

    mapPlaceSet(a, b, c);
    g_gameState.unk574 = 0;
    asdSequenceRequest(8, 0, 0);
    return 1;
}

} /* extern "C" */
