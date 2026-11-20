#include "shard/Shard0038.h"
#include "game/GameGlobalsRef.h"

extern "C" {

extern void copyDefaultWordsPair(u8 *dest);

void objBMarkAndInit20D4(void)
{
    ObjB *obj = g_gameGlobals.instance;

    if (g_gameGlobals.instance != NULL) {
        g_gameGlobals.instance->unk20D1 = 1;
        copyDefaultWordsPair(obj->block20D4);
    }
}

} /* extern "C" */
