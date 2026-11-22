#include "common.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

/* The stat list's work block (only the mode bytes and selection). */
typedef struct StatListWork {
    /* 0x0000 */ u8 unk0000[0x1390];
    /* 0x1390 */ u16 selection;
    /* 0x1392 */ u8 unk1392[0xC81];
    /* 0x2013 */ s8 compareEnabled;
    /* 0x2014 */ u8 unk2014[3];
    /* 0x2017 */ u8 mode;
} StatListWork;

f32 jobGetScalarValue(void);
s32 itemIsCollectedWithRelated(u32 selection);
void numberFontDrawFormatted(s32 a, s32 x, s32 y, s32 b, s32 c, s32 d, const char *format, ...);
void efctSetSpeed(f32 speed);
void gxResetColorQuadToWhite(void);

/* Draws a stat value at its row: the value itself ("999" for big values, "??" when hidden by the
 * mode), and, when comparing, the signed difference with a "+" or "-" mark. */
void statRowDrawValue(StatListWork *work, s32 row, s32 x, s32 y, s32 value, s32 difference)
{
    f32 savedSpeed = jobGetScalarValue();
    TextureTableEntryIV *offset = asdTMTexTableEntryAt(18, row + 0x7B);
    TextureTableEntryIV *base = asdTMTexTableEntryAt(18, 0x7A);

    if (work->mode == 14 || (work->mode == 7 && itemIsCollectedWithRelated(work->selection) == 0) || work->mode == 16) {
        numberFontDrawFormatted(0, base->x + x, offset->y + base->y + y, 1, 3, 0xDD, "??");
    } else if (value >= 1000) {
        numberFontDrawFormatted(0, base->x + x, offset->y + base->y + y, 1, 3, 0xDD, "999");
    } else {
        numberFontDrawFormatted(0, base->x + x, base->y + offset->y + y, 1, 3, 0xDD, "%d", value);
    }
    if (work->compareEnabled != 0) {
        TextureTableEntryIV *diffOffset = asdTMTexTableEntryAt(18, row + 0x85);
        TextureTableEntryIV *diffBase = asdTMTexTableEntryAt(18, 0x84);

        if (difference > 0) {
            numberFontDrawFormatted(0, diffBase->x + diffOffset->x + x, diffOffset->y + diffBase->y + y, 1, 1, 0xDD, "+");
        } else if (difference < 0) {
            numberFontDrawFormatted(0, diffBase->x + diffOffset->x + x, diffOffset->y + diffBase->y + y, 1, 1, 0xDD, "-");
        }
        TextureTableEntryIV *numberBase = asdTMTexTableEntryAt(18, 0x83);

        if (difference > 0) {
            numberFontDrawFormatted(0, diffOffset->x + numberBase->x + x, diffOffset->y + numberBase->y + y, 1, 3, 0xDD, "%d", difference);
        } else if (difference < 0) {
            numberFontDrawFormatted(0, diffOffset->x + numberBase->x + x, diffOffset->y + numberBase->y + y, 1, 3, 0xDD, "%d", -difference);
        }
    }
    efctSetSpeed(savedSpeed);
    gxResetColorQuadToWhite();
}

}
