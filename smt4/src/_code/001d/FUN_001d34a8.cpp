#include "map/MapIfTimer.h"
#include "map/mapDepart.h"
#include "code/Code001d_Smt4.h"

extern "C" {



void FUN_002bfdd4(void);
void FUN_002dfefc(s32 arg);
s32 gameFlagIsSet(u32 id);

extern GameState g_gameState;

void FUN_001d34a8(s32 a, s32 b)
{
    MapIfTimer *extra;

    FUN_002bfdd4();
    extra = g_mapIfTimer;
    g_mapIfTimer->unk08 = a;
    extra->unk0C = b;
    if (g_gameState.unk18 == 0 && gameFlagIsSet(0x16) != 0 && g_mapIfTimer->state == 0) {
        FUN_002dfefc(0);
    }
}

} /* extern "C" */
