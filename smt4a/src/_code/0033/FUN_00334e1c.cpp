/* NON_MATCHING: the stack slot layout and the compare-branch/store ordering differ (retail keeps the stat pair and its comparison copy in different frame slots, and reloads the work-area bytes through a shared base); the logic is the same. */
#include "shard/GameGlobals.h"

extern "C" {

/* One row of the display table (0x8C bytes): only its effect speed is read here. */
typedef struct StatDisplayRow {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ f32 speed;
    /* 0x24 */ u8 unk24[0x68];
} StatDisplayRow;

typedef struct StatDisplayTable {
    /* 0x00 */ u8 unk00[0x44];
    /* 0x44 */ StatDisplayRow rows[1]; /* the table's rows (0x8C bytes each) */
} StatDisplayTable;

/* A sprite record: its Y offset is read. */
typedef struct StatSprite {
    /* 0x00 */ u8 unk00[0xA];
    /* 0x0A */ s16 yOffset;
} StatSprite;

/* The work area of the list the stat rows belong to (only the fields read here). */
typedef struct StatListWork {
    /* 0x0000 */ u8 unk0000[0x1390];
    /* 0x1390 */ u16 selection;
    /* 0x1392 */ u8 unk1392[0xC81];
    /* 0x2013 */ s8 compareEnabled;      /* nonzero: also read the comparison value and color by it */
    /* 0x2014 */ u8 unk2014[3];
    /* 0x2017 */ u8 mode;
} StatListWork;

typedef struct IntPair {
    s32 first;
    s32 second;
} IntPair;

enum {
    STAT_ROW_BASE = 18,
    STAT_SPRITE_BASE = 123
};

void drawSetColorFromRGBA8(u32 rgba);
void unitGetStereoScreenPosition(s32 *x, s32 *y, s32 row, f32 scale);
f32 jobGetScalarValue(void);
void efctSetSpeed(f32 speed);
void FUN_002f752c(StatListWork *work, s32 *value, s32 *extra, s32 entry, s32 compare);
void statRowDrawValue(StatListWork *work, s32 entry, s32 x, s32 y, s32 value, s32 difference);
s32 FUN_0026264c(u32 selection);
StatSprite *FUN_001834a4(s32 kind, s32 index);
void FUN_003c4250(StatListWork *work, s32 x, s32 y, s32 value, ...);
void FUN_003b7960(StatListWork *work, s32 x, s32 y, s32 iconA, s32 iconB);
void FUN_00183bb0(void);

/* Draws one stat entry of the list: colored by how it compares with the other value, then its
 * value, its icon and the extra detail for the current mode. */
void FUN_00334e1c(StatListWork *work, s32 entry)
{
    IntPair position = {0, 0};   /* where the row is drawn */
    IntPair stat = {0, 0};       /* the stat's value and its extra detail */
    s32 valueDifference = 0;
    s32 extraDifference = 0;

    drawSetColorFromRGBA8(0xFFFFFFFF);
    unitGetStereoScreenPosition(&position.first, &position.second, entry + STAT_ROW_BASE, 0.26f);
    f32 savedSpeed = jobGetScalarValue();
    efctSetSpeed(((StatDisplayTable *)g_gameGlobals.data)->rows[entry + STAT_ROW_BASE].speed);
    FUN_002f752c(work, &stat.first, &stat.second, entry, work->compareEnabled);
    if (work->compareEnabled != 0) {
        IntPair other = {0, 0};

        FUN_002f752c(work, &other.first, &other.second, entry, 0);
        if (stat.first < other.first) {
            drawSetColorFromRGBA8(0xDC0F14FF);
        } else if (stat.first == other.first) {
            drawSetColorFromRGBA8(0xFFFFFFFF);
        } else {
            drawSetColorFromRGBA8(0x72E027FF);
        }
        valueDifference = stat.first - other.first;
        extraDifference = stat.second - other.second;
    }
    statRowDrawValue(work, entry, position.first, position.second, stat.first, valueDifference);
    if (work->mode != 14 && (work->mode != 7 || FUN_0026264c(work->selection) != 0) && work->mode != 16) {
        f32 outerSpeed = jobGetScalarValue();
        StatSprite *sprite = FUN_001834a4(18, entry + STAT_SPRITE_BASE);

        if (stat.first < 200) {
            FUN_003c4250(work, position.first, sprite->yOffset + position.second, stat.first, stat.second, extraDifference);
        } else if (stat.first == 999) {
            FUN_003b7960(work, position.first, sprite->yOffset + position.second, 117, 116);
        } else {
            FUN_003b7960(work, position.first, sprite->yOffset + position.second, 115, 114);
        }
        efctSetSpeed(outerSpeed);
    }
    efctSetSpeed(savedSpeed);
    FUN_00183bb0();
}

}
