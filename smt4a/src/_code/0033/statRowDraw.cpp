/* NON_MATCHING: the logic and calls match; the frame differs (retail: x/y at sp+8/12, value/extra at 16/20, the comparison pair at 4 and 28, 56 bytes with d9 saved for the extra value), retail indexes the speed sprite as (entry + 18) * 0x8C + 0x44 where this build folds the constant, and the compare-branch registers differ. */
#include "game/GameGlobalsRef.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "ui/UiSpriteApi.h"

extern "C" {

/* unit-local: the display object behind g_gameGlobals.instance, seen only as its sprite rows. */
typedef struct StatDisplayTable {
    /* 0x00 */ u8 unk00[0x44];
    /* 0x44 */ UiSpriteState rows[1]; /* the display's sprites */
} StatDisplayTable;


/* The work area of the list the stat rows belong to (only the fields read here). */
typedef struct StatListWork {
    /* 0x0000 */ u8 unk0000[0x1390];
    /* 0x1390 */ u16 selection;
    /* 0x1392 */ u8 unk1392[0xC81];
    /* 0x2013 */ s8 compareEnabled;      /* nonzero: also read the comparison value and color by it */
    /* 0x2014 */ u8 unk2014[3];
    /* 0x2017 */ u8 mode;
} StatListWork;

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
s32 itemIsCollectedWithRelated(u32 selection);
void FUN_003c4250(StatListWork *work, s32 x, s32 y, s32 value, ...);
void uiDrawMaskedSprite(StatListWork *work, s32 x, s32 y, s32 iconA, s32 iconB);
void gxResetColorQuadToWhite(void);

/* Draws one stat entry of the list: colored by how it compares with the other value, then its
 * value, its icon and the extra detail for the current mode. */
void statRowDraw(StatListWork *work, s32 entry)
{
    s32 x = 0;
    s32 y = 0;
    s32 value = 0;
    s32 extra = 0;
    s32 valueDifference = 0;
    s32 extraDifference = 0;

    drawSetColorFromRGBA8(0xFFFFFFFF);
    unitGetStereoScreenPosition(&x, &y, entry + STAT_ROW_BASE, 0.26f);
    f32 savedSpeed = jobGetScalarValue();
    efctSetSpeed(vec2GetSpeed(&((StatDisplayTable *)g_gameGlobals.instance)->rows[entry + STAT_ROW_BASE]));
    FUN_002f752c(work, &value, &extra, entry, work->compareEnabled);
    if (work->compareEnabled != 0) {
        s32 otherValue = 0;
        s32 otherExtra = 0;

        FUN_002f752c(work, &otherValue, &otherExtra, entry, 0);
        if (value < otherValue) {
            drawSetColorFromRGBA8(0xDC0F14FF);
        } else if (value == otherValue) {
            drawSetColorFromRGBA8(0xFFFFFFFF);
        } else {
            drawSetColorFromRGBA8(0x72E027FF);
        }
        valueDifference = value - otherValue;
        extraDifference = extra - otherExtra;
    }
    statRowDrawValue(work, entry, x, y, value, valueDifference);
    if (work->mode != 14 && (work->mode != 7 || itemIsCollectedWithRelated(work->selection) != 0) && work->mode != 16) {
        f32 outerSpeed = jobGetScalarValue();
        TextureTableEntryIV *sprite = asdTMTexTableEntryAt(18, entry + STAT_SPRITE_BASE);

        if (value < 200) {
            FUN_003c4250(work, x, sprite->y + y, value, extra, extraDifference);
        } else if (value == 999) {
            uiDrawMaskedSprite(work, x, sprite->y + y, 117, 116);
        } else {
            uiDrawMaskedSprite(work, x, sprite->y + y, 115, 114);
        }
        efctSetSpeed(outerSpeed);
    }
    efctSetSpeed(savedSpeed);
    gxResetColorQuadToWhite();
}

}
