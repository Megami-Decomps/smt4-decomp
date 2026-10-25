#include "gamedata/SpriteTemplatePreferredDevil.h"

extern "C" {

extern u8 DAT_00447620[];

u8 spriteTemplateGetDevilTableByte(s32 kind)
{
    u32 index = spriteTemplateGetPreferredDevilId(kind);

    return DAT_00447620[index];
}

} /* extern "C" */
