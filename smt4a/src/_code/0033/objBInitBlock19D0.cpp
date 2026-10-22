#include "shard/Shard0033.h"

extern "C" {

extern ObjBRef g_gameGlobals;
extern void FUN_0026fd50(u8 *block, u32 a, s32 b, u32 c);

void objBInitBlock19D0(u32 a, s32 copyPair, u32 c)
{
    ObjB *obj = g_gameGlobals.instance;

    FUN_0026fd50(obj->snapshotSlot, a, 0, c);
    if (copyPair != 0) {
        obj->previousPositionX = obj->positionX;
        obj->previousPositionY = obj->positionY;
    }
}

} /* extern "C" */
