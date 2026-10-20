#include "shard/Shard0035.h"

extern "C" {

extern ObjBRef g_gameGlobals;
extern void uiSpriteSetKeyframe(u8 *block, s32 a, s32 b);

void objBInitBlock12DC5(void)
{
    uiSpriteSetKeyframe(g_gameGlobals.instance->block12DC, 5, 0);
}

} /* extern "C" */
