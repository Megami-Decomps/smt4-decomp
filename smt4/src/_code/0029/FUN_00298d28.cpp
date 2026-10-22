#include "shard/GameGlobals.h"

extern "C" {


void FUN_00298d28(u32 a, u32 b)
{
    GameData *data = g_gameGlobals.data;

    data->unk1E68 = a;
    data->unk1E6C = b;
}

} /* extern "C" */
