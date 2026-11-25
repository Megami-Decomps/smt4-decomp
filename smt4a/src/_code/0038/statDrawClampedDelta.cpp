#include <stdio.h>
#include "font/SearchWin/RunWin.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "ui/NumberFont.h"

extern "C" {
s32 FUN_004bd098(void *owner, u32 stat);
s32 partyRecordClampEquippedRankUp(u32 stat);
s32 partyRecordClampEquippedRankDown(u32 stat);
void drawSetColorFromRGBA8(u32 color);
void gxResetColorQuadToWhite(void);

enum {
    STAT_DELTA_LOWER_LIMIT_COLOR = 0xFF00FFFF,
    STAT_DELTA_LOSS_COLOR = 0xDC0F14FF,
    STAT_DELTA_UPPER_LIMIT_COLOR = 0xFBEB39FF,
    STAT_DELTA_GAIN_COLOR = 0x72E027FF,
};

/* Show the clamped stat delta, coloring values at the bounds separately. */
void statDrawClampedDelta(void *owner, u32 stat, s32 x, s32 y, s32 depth, s32 delta)
{
    if (owner == NULL) {
        return;
    }
    s32 value = delta + FUN_004bd098(owner, stat);
    s32 maximum = partyRecordClampEquippedRankUp(stat);
    s32 minimum = partyRecordClampEquippedRankDown(stat);
    if (value > maximum) {
        value = maximum;
    }
    if (value < minimum) {
        value = minimum;
    }
    if (value != 0) {
        char text[64];
        if (minimum >= value) {
            sprintf(text, "-");
            drawSetColorFromRGBA8(STAT_DELTA_LOWER_LIMIT_COLOR);
        } else if (value < 0) {
            sprintf(text, "-");
            drawSetColorFromRGBA8(STAT_DELTA_LOSS_COLOR);
        } else if (value >= maximum) {
            sprintf(text, "+");
            drawSetColorFromRGBA8(STAT_DELTA_UPPER_LIMIT_COLOR);
        } else {
            sprintf(text, "+");
            drawSetColorFromRGBA8(STAT_DELTA_GAIN_COLOR);
        }
        const TextureTableEntryIV *position = asdTMTexTableEntryAt(11, 0x402);
        numberFontDrawFormatted(2, position->x + x, position->y + y, 0, 1, depth + 1, text);
        position = asdTMTexTableEntryAt(11, 0x401);
        if (value < 0) {
            value = -value;
        }
        numberFontDrawFormatted(2, position->x + x, position->y + y, 0, 1, depth + 1, "%d", value);
        gxResetColorQuadToWhite();
    }
}
} /* extern "C" */
