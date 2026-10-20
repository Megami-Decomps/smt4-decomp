#include "shard/Shard0035.h"

extern "C" {

extern ObjBRef g_gameGlobals;
extern void uiSpriteSelectAnim(u8 *block, s32 value);

void objBInitBlocks274300(void)
{
    ObjB *obj = g_gameGlobals.instance;

    obj->unk20AD = 1;
    uiSpriteSelectAnim(obj->block274, 7);
    uiSpriteSelectAnim(obj->block300, 8);
}

} /* extern "C" */
