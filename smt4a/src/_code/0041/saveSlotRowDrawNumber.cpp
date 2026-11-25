/* NON_MATCHING: retail loads the first glyph's offsets and the position (one ldrd) before the stack arguments of the
   first draw and interleaves the second draw's; armcc stores the stack arguments first. */
#include "gfx/SpriteTextureRect.h"
#include "gfx/UiControlDraw.h"
#include "saveLoadUI/SaveSlotRow.h"
#include "shard/TextureDrawCall.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "ui/NumberFont.h"

extern "C" {
extern const char DAT_00533f48[];
void drawSetColorFromRGBA8(u32 color);
void gxResetColorQuadToWhite();

/* Draws the numeric badge background, then its ones and tens digits at their glyph offsets. */
void saveSlotRowDrawNumber(const SaveSlotRow *, s32 value, const UiScaledDrawPosition *position, u32 color)
{
    drawSetColorFromRGBA8(color);
    texDrawTableEntryAtStoredOrigin(2, 43, 153, position->x, position->y, 2);
    s32 tens = value / 10;
    s32 ones = value % 10;
    TextureTableEntryIV *first = asdTMTexTableEntryAt(43, 154);
    numberFontDrawFormatted(6, position->x + (s16)first->x, position->y + (s16)first->y,
        1, 1, 2, DAT_00533f48, ones);
    TextureTableEntryIV *second = asdTMTexTableEntryAt(43, 155);
    numberFontDrawFormatted(6, position->x + (s16)second->x, position->y + (s16)second->y,
        1, 1, 2, DAT_00533f48, tens);
    gxResetColorQuadToWhite();
}
}
