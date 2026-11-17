#include "shard/Shard0033.h"
#include "game/GameGlobalsRef.h"

extern "C" {

void FUN_003343c0(u8 value)
{
    g_gameGlobals.instance->unk20B0 = value;
}

} /* extern "C" */
