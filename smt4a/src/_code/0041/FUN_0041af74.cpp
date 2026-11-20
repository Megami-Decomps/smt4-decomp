/* NON_MATCHING: signed quotient/remainder temporaries and glyph-draw saved registers differ from retail. */
#include "gfx/SpriteTextureRect.h"
#include "shard/TextureDrawCall.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

struct NumericDrawPosition { s32 x, y; };
extern "C" {
extern const u8 DAT_00533f48[];
void drawSetColorFromRGBA8(u32 color);
void statRowDrawValueImpl(u32 layer, s32 x, s32 y, u32 enabled, u32 flags, u32 mode, const void *table, s32 value);
void gxResetColorQuadToWhite();

// Draw the numeric badge background and its two metric-aligned glyph passes.
void FUN_0041af74(u32, s32 value, const NumericDrawPosition *position, u32 color)
{
    drawSetColorFromRGBA8(color);
    texDrawTableEntryAtStoredOrigin(2, 43, 153, position->x, position->y, 2);
    s32 quotient = value / 10;
    TextureTableEntryIV *first = asdTMTexTableEntryAt(43, 154 + value % 10);
    statRowDrawValueImpl(6, position->x + (s16)first->x, position->y + (s16)first->y,
        1, 1, 2, DAT_00533f48, quotient);
    TextureTableEntryIV *second = asdTMTexTableEntryAt(43, 155);
    statRowDrawValueImpl(6, position->x + (s16)second->x, position->y + (s16)second->y,
        1, 1, 4, DAT_00533f48, quotient);
    gxResetColorQuadToWhite();
}
}
