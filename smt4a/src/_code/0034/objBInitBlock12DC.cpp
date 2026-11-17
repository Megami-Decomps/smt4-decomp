#include "ui/UiSpriteApi.h"
#include "shard/Shard0034.h"
#include "game/GameGlobalsRef.h"

extern "C" {

void objBInitBlock12DC(void)
{
    uiSpriteSetKeyframe((UiSpriteState *)g_gameGlobals.instance->block12DC, 0xF, 0);
}

} /* extern "C" */
