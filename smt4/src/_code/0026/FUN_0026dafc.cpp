#include "shard/GameGlobals.h"

extern "C" {

extern int FUN_0029e9cc(u16 value);


void FUN_0026dafc(u32 value)
{
    GameData *data = g_gameGlobals.data;

    if (((g_gameGlobals.data != NULL) && (g_gameGlobals.data->unk1E66 != 13)) &&
        ((g_gameGlobals.data->unk1E66 != 6 || (FUN_0029e9cc(g_gameGlobals.data->unk1300) != 0)))) {
        data->unk1898 = value;
    }
}

} /* extern "C" */
