#include "shard/Shard0034.h"

extern "C" {

extern ObjBRef g_gameGlobals;

void objBSetWordByIndex(s32 which, u32 value)
{
    if (which == 0) {
        g_gameGlobals.instance->unk205C = value;
    } else if (which == 1) {
        g_gameGlobals.instance->unk2060 = value;
    } else if (which == 2) {
        g_gameGlobals.instance->unk2064 = value;
    }
}

} /* extern "C" */
