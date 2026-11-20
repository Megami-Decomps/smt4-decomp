#include "gamedata/SpriteTemplatePreferredDevil.h"

extern "C" {

extern u8 g_devilSpriteTemplateTable[];

u8 spriteTemplateGetDevilTableByte(s32 kind)
{
    u32 index = spriteTemplateGetPreferredDevilId(kind);

    return g_devilSpriteTemplateTable[index];
}

} /* extern "C" */
