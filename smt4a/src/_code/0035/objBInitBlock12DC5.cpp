#include "ui/UiSpriteApi.h"
#include "shard/Shard0035.h"
#include "game/GameGlobalsRef.h"

extern "C" {

void objBInitBlock12DC5(void)
{
    uiSpriteSetKeyframe((UiSpriteState *)g_gameGlobals.instance->block12DC, 5, 0);
}

} /* extern "C" */
