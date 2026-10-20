#include "shard/GameGlobals.h"

extern "C" {

void FUN_0029e890(int value, u8 flag)
{
    GameData *data = g_gameGlobals.data;

    data->unk12EF = (s8)value;
    if (value < 0) {
        data->unk12F4 = 0;
    } else {
        data->unk12F4 = flag;
    }
}

} /* extern "C" */
