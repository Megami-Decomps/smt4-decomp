#include "map/mapDepart.h"

extern "C" {

void FUN_002769b4(u32 a, u32 b, u32 c);
u32 scrGetArg(s32 index);
void asdSequenceRequest(s32 a, s32 b, s32 c);

extern GameState g_gameState;

/* Script command: runs FUN_002769b4 on the script's first three arguments and clears unk2F8. */
s32 FUN_00222930(void)
{
    u32 a = scrGetArg(0);
    u32 b = scrGetArg(1);
    u32 c = scrGetArg(2);

    FUN_002769b4(a, b, c);
    g_gameState.unk2F8 = 0;
    asdSequenceRequest(8, 0, 0);
    return 1;
}

} /* extern "C" */
