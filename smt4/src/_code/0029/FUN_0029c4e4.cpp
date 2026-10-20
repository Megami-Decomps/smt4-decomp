#include "shard/GameGlobals.h"

extern "C" {

int FUN_0024d7d0(u8 *block, u32 value);

void FUN_0029c4e4(u32 value, int copy)
{
    GameData *data = g_gameGlobals.data;

    FUN_0024d7d0(data->unk18B0, value);
    if (copy != 0) {
        data->unk18B8 = data->unk18BC;
        data->unk18BA = data->unk18BE;
    }
}

} /* extern "C" */
