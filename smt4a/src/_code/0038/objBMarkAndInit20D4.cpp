#include "shard/Shard0038.h"

extern "C" {

extern ObjBRef g_gameGlobals;
extern void FUN_003e4140(u8 *dest);

void objBMarkAndInit20D4(void)
{
    ObjB *obj = g_gameGlobals.instance;

    if (g_gameGlobals.instance != NULL) {
        g_gameGlobals.instance->unk20D1 = 1;
        FUN_003e4140(obj->block20D4);
    }
}

} /* extern "C" */
