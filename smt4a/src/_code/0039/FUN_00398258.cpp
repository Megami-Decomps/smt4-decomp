#include "map/mapIf.h"

extern "C" {

void FUN_002392b8(u32 arg);
void FUN_002c2cc4(u32 a, s32 b, s32 c, u32 d, u32 e);
void FUN_002c2d5c(u32 arg);

extern MapIfGlobalsA g_mapIf;

void FUN_00398258(u32 a, u32 b, s32 flag, u32 c, u32 d)
{
    MapIfStateA *state = g_mapIf.state;

    if (flag != 0) {
        state->unk1D = 1;
        state->unk20 = 0;
        FUN_002392b8(b);
        FUN_002c2cc4(a, 0, 1, c, d);
        return;
    }
    FUN_002392b8(b);
    FUN_002c2cc4(a, 1, 1, c, d);
    FUN_002c2d5c(0xFFFFFFFF);
}

} /* extern "C" */
