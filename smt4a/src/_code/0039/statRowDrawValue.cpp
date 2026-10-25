#include "common.h"

extern "C" {

/* A layout record: its position at 8 and 10. */
typedef struct StatLayout {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s16 x;
    /* 0x0A */ s16 y;
} StatLayout;

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
StatLayout *asdTMTexTableEntryAt(s32 kind, s32 index);
s32 FUN_0026264c(u32 selection);
void FUN_00180310(s32 a, s32 x, s32 y, s32 b, s32 c, s32 d, const char *format, ...);
void efctSetSpeed(f32 speed);
void FUN_00183bb0(void);

/* Draws a stat value at its row: the value itself ("999" for big values, "??" when hidden by the
 * mode), and, when comparing, the signed difference with a "+" or "-" mark. */
void statRowDrawValue(StatListWork *work, s32 row, s32 x, s32 y, s32 value, s32 difference)
{
    f32 savedSpeed = jobGetScalarValue();
    StatLayout *offset = asdTMTexTableEntryAt(18, row + 0x7B);
    StatLayout *base = asdTMTexTableEntryAt(18, 0x7A);

    if (work->mode == 14 || (work->mode == 7 && FUN_0026264c(work->selection) == 0) || work->mode == 16) {
        FUN_00180310(0, base->x + x, offset->y + base->y + y, 1, 3, 0xDD, "??");
    } else if (value >= 1000) {
        FUN_00180310(0, base->x + x, offset->y + base->y + y, 1, 3, 0xDD, "999");
    } else {
        FUN_00180310(0, base->x + x, base->y + offset->y + y, 1, 3, 0xDD, "%d", value);
    }
    if (work->compareEnabled != 0) {
        StatLayout *diffOffset = asdTMTexTableEntryAt(18, row + 0x85);
        StatLayout *diffBase = asdTMTexTableEntryAt(18, 0x84);

        if (difference > 0) {
            FUN_00180310(0, diffBase->x + diffOffset->x + x, diffOffset->y + diffBase->y + y, 1, 1, 0xDD, "+");
        } else if (difference < 0) {
            FUN_00180310(0, diffBase->x + diffOffset->x + x, diffOffset->y + diffBase->y + y, 1, 1, 0xDD, "-");
        }
        StatLayout *numberBase = asdTMTexTableEntryAt(18, 0x83);

        if (difference > 0) {
            FUN_00180310(0, diffOffset->x + numberBase->x + x, diffOffset->y + numberBase->y + y, 1, 3, 0xDD, "%d", difference);
        } else if (difference < 0) {
            FUN_00180310(0, diffOffset->x + numberBase->x + x, diffOffset->y + numberBase->y + y, 1, 3, 0xDD, "%d", -difference);
        }
    }
    efctSetSpeed(savedSpeed);
    FUN_00183bb0();
}

}
