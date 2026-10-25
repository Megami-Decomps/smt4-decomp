/* NON_MATCHING: signed quotient/remainder temporaries and glyph-draw saved registers differ from retail. */
#include "gfx/SpriteTextureRect.h"
#include "shard/TextureDrawCall.h"

struct NumericDrawPosition { s32 x, y; };
extern "C" {
extern const u8 DAT_00533f48[];
void drawSetColorFromRGBA8(u32 color);
SpriteTextureRect *FUN_001834a4(u32 group, u32 id);
void FUN_00180310(u32 layer, s32 x, s32 y, u32 enabled, u32 flags, u32 mode, const void *table, s32 value);
void FUN_00183bb0();

// Draw the numeric badge background and its two metric-aligned glyph passes.
void FUN_0041af74(u32, s32 value, const NumericDrawPosition *position, u32 color)
{
    drawSetColorFromRGBA8(color);
    FUN_001835b4(2, 43, 153, position->x, position->y, 2);
    s32 quotient = value / 10;
    SpriteTextureRect *first = FUN_001834a4(43, 154 + value % 10);
    FUN_00180310(6, position->x + (s16)first->textureWidth, position->y + (s16)first->textureHeight,
        1, 1, 2, DAT_00533f48, quotient);
    SpriteTextureRect *second = FUN_001834a4(43, 155);
    FUN_00180310(6, position->x + (s16)second->textureWidth, position->y + (s16)second->textureHeight,
        1, 1, 4, DAT_00533f48, quotient);
    FUN_00183bb0();
}
}
