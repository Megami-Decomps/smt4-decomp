#include "ui/UiSpriteApi.h"
#include "shard/Shard0035.h"

extern "C" {

extern ObjBRef g_gameGlobals;

void objBInitBlock12DC5(void)
{
    uiSpriteSetKeyframe((UiSpriteState *)g_gameGlobals.instance->block12DC, 5, 0);
}

} /* extern "C" */
