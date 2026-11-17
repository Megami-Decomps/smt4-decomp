#include "shard/Shard0033.h"
#include "code/Code0033.h"
#include "shard/Shard004A.h"
#include "game/GameGlobalsRef.h"

extern "C" {

void gameGlobalsSetMenuOpenFlag(u8 value)
{
    if (g_gameGlobals.instance != NULL) {
        g_gameGlobals.instance->unk2015 = value;
    }
}

} /* extern "C" */
