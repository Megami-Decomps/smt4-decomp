#include "shard/GameGlobals.h"
#include "classes/Obj55ca08.h"

extern "C" {


void FUN_0022e500(u8 value)
{
    if (g_gameGlobals.data != NULL) {
        g_gameGlobals.data->unk1E65 = value;
    }
}

} /* extern "C" */
