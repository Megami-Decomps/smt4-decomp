#include "shard/GameGlobals.h"

extern "C" {

int FUN_0024d94c(u16 *block, u32 value);

void FUN_0029a0e8(u32 value)
{
    GameData *data = g_gameGlobals.data;

    FUN_0024d94c(&data->unk1300, value);
    data->unk1E66 = 0;
    data->unk1EB8 = 1;
}

} /* extern "C" */
