#include "shard/GameGlobals.h"
#include "gamedata/DataTable.h"

extern "C" {

void FUN_0029dfc0(int value)
{
    GameData *data = g_gameGlobals.data;
    int state;

    data->unk1E60 = (s8)value;
    if (((value == 0) && (data->unk1E67 != 9)) &&
        (state = data->activeState, (state == 4 || state == 5) || state == 6)) {
        data->unk12E0 = 0;
    }
}

} /* extern "C" */
