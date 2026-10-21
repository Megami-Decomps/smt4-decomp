#include "shard/GameGlobals.h"

extern "C" {

extern int objSlotsAllEmpty(u32 value);

u32 FUN_00299fc0(void)
{
    int mode = g_gameGlobals.data->unk12DC;
    u32 result;

    if (((mode == 4 || mode == 5) || (mode == 6 || mode == 8)) &&
        (mode = objSlotsAllEmpty(g_gameGlobals.data->unk1E80), mode != 0)) {
        result = 1;
    } else {
        result = 0;
    }
    return result;
}

} /* extern "C" */
