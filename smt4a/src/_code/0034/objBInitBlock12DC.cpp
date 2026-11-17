#include "ui/UiSpriteApi.h"
#include "shard/Shard0034.h"

extern "C" {

extern ObjBRef g_gameGlobals;

void objBInitBlock12DC(void)
{
    uiSpriteSetKeyframe((UiSpriteState *)g_gameGlobals.instance->block12DC, 0xF, 0);
}

} /* extern "C" */
