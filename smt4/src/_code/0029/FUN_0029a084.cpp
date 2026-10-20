#include "shard/GameGlobals.h"

extern "C" {

void FUN_0029a084(int which, u32 value)
{
    GameData *data = g_gameGlobals.data;

    switch (which) {
    case 1:
        data->unk1EAC = value;
        break;
    case 0:
        data->unk1EA8 = value;
        break;
    case 2:
        data->unk1EB0 = value;
        break;
    }
}

} /* extern "C" */
