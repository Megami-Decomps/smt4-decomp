#include "shard/Shard0033.h"
#include "game/GameGlobalsRef.h"

extern "C" {

void FUN_003343d8(u8 value)
{
    g_gameGlobals.instance->unk137E = value;
}

} /* extern "C" */
