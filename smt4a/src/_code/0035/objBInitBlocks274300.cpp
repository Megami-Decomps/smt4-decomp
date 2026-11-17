#include "shard/Shard0035.h"
#include "ui/UiSpriteApi.h"

extern "C" {

extern ObjBRef g_gameGlobals;

void objBInitBlocks274300(void)
{
    ObjB *obj = g_gameGlobals.instance;

    obj->unk20AD = 1;
    uiSpriteSelectAnim((UiSpriteState *)obj->block274, 7);
    uiSpriteSelectAnim((UiSpriteState *)obj->block300, 8);
}

} /* extern "C" */
