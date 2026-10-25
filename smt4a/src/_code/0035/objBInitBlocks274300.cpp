#include "shard/Shard0035.h"
#include "ui/UiSpriteState.h"

extern "C" {

extern ObjBRef g_gameGlobals;

void objBInitBlocks274300(void)
{
    ObjB *obj = g_gameGlobals.instance;

    obj->unk20AD = 1;
    uiSpriteSelectAnim(obj->block274, 7);
    uiSpriteSelectAnim(obj->block300, 8);
}

} /* extern "C" */
