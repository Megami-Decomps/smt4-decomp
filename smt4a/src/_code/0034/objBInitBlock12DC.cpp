#include "shard/Shard0034.h"

extern "C" {

extern ObjBRef g_gameGlobals;
extern void uiSpriteSetKeyframe(u8 *block, s32 a, s32 b);

void objBInitBlock12DC(void)
{
    uiSpriteSetKeyframe(g_gameGlobals.instance->block12DC, 0xF, 0);
}

} /* extern "C" */
