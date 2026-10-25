#include "shard/GameGlobals.h"
#include "util/CalleeContracts.h"

extern "C" {

void FUN_002a0cc8(u8 value)
{
    if (g_gameGlobals.data != NULL) {
        g_gameGlobals.data->unk1E64 = value;
    }
}

} /* extern "C" */
