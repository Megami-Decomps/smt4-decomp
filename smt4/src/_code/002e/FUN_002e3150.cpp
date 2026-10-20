#include "shard/GameGlobals.h"

extern "C" {

int FUN_002bee58(void *block, int a);

void FUN_002e3150(void)
{
    GameData *data = g_gameGlobals.data;

    g_gameGlobals.data->unk1EB4 = 1;
    FUN_002bee58(data->unk274, 7);
    FUN_002bee58(data->unk300, 8);
}

} /* extern "C" */
