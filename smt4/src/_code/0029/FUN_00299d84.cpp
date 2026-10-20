#include "shard/GameGlobals.h"

extern "C" {

void FUN_00299d84(u8 value)
{
    g_gameGlobals.data->unk1EA4 = value;
}

} /* extern "C" */
