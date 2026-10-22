#include "shard/GameGlobals.h"

extern "C" {

int statusDownRestoreTabForMode(void);


void FUN_0026d670(void)
{
    GameData *data = g_gameGlobals.data;

    g_gameGlobals.data->unk12E4 = 0;
    statusDownRestoreTabForMode();
    data->unk1E63 = 0;
}

} /* extern "C" */
