/* NON_MATCHING: arithmetic and calls match; register allocation of the sprite frame/total/position differs and retail interleaves the frame field loads (x/y) differently. */
#include "common.h"
#include "saveLoadUI/SaveSlotRow.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "ui/NumberFont.h"



extern "C" {
void drawSetColorFromRGBA8(u32 color);
void gxResetColorQuadToWhite(void);

// Draw an elapsed time as hours:minutes:seconds, right-aligned against `position`.
void saveSlotRowDrawPlayTime(const SaveSlotRow *, SaveSlotRecord *record, const UiScaledDrawPosition *position)
{
    TextureTableEntryIV *frame = asdTMTexTableEntryAt(43, 35);
    s32 time = record->playSeconds;
    drawSetColorFromRGBA8(0xb9d7d7ff);
    s32 hours = time / 3600;
    s32 rest = time % 3600;
    s32 minutes = rest / 60;
    s32 seconds = rest % 60;
    s32 x = position->x + (frame->x + frame->placement->width);
    x -= 7;
    s32 y = position->y + frame->y;
    numberFontDrawFormatted(0, x, y, 1, 1, 2, "%d", seconds % 10);
    x -= 7;
    numberFontDrawFormatted(0, x, y, 1, 1, 2, "%d", seconds / 10);
    x -= 4;
    numberFontDrawFormatted(0, x, y, 1, 1, 2, ":");
    x -= 7;
    numberFontDrawFormatted(0, x, y, 1, 1, 2, "%d", minutes % 10);
    x -= 7;
    numberFontDrawFormatted(0, x, y, 1, 1, 2, "%d", minutes / 10);
    x -= 4;
    numberFontDrawFormatted(0, x, y, 1, 1, 2, ":");
    x -= 28;
    numberFontDrawFormatted(0, x, y, 1, 4, 2, "%d", hours);
    gxResetColorQuadToWhite();
}

}
