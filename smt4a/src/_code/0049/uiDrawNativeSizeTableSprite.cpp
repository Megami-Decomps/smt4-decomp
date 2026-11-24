#include "gfx/SpriteVertexColors.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {
void FUN_00492c98(u32 mode, u32 group, u32 id, s32 x, s32 y,
                  s32 width, s32 height, u32 first, u32 second);

/* Draws a table 0x13 sprite at its native size. */
void uiDrawNativeSizeTableSprite(u32 id, s32 x, s32 y, u32 first, u32 second)
{
    u32 width;
    u32 height;
    asdTMTexTableEntrySize(0x13, id, &width, &height);
    FUN_00492c98(2, 0x13, id, x, y, width, height, first, second);
}

} /* extern "C" */
