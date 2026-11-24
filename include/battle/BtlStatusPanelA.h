/* Apocalypse: the battle status panel (BtlUiA.objA): one row of sprites per party member and the frame
 * around them. */
#ifndef BATTLE_BTLSTATUSPANELA_H
#define BATTLE_BTLSTATUSPANELA_H

#include "common.h"
#include "battle/btlUI.h"
#include "ui/UiSpriteApi.h"
#include "ui/UiSpriteState.h"
#include <stddef.h>

/* The panel's work (the BtlUiObjAA block). */
struct StatusPanel {
    /* 0x0000 */ UiResourceParameters parameters;
    /* 0x0020 */ UiSpriteState sprites[66]; /* six rows of ten party sprites, then the frame sprites */
    /* 0x2438 */ BtlUiPanelTimerA timer;    /* the animation phase and its frame, as the event panel keeps them */
    /* 0x2440 */ s32 variant;
    /* 0x2444 */ u8 unk2444[4];
    /* 0x2448 */ s16 rowCount;
    /* 0x244A */ s16 selected;
    /* 0x244C */ s16 rowDelta;      /* rows being added (positive) or removed (negative) */
    /* 0x244E */ s16 gaugeCount;    /* gauges being refreshed with the change */
    /* 0x2450 */ u8 unk2450[0x50];
    /* 0x24A0 */ s16 rowIds[10];
};

typedef char StatusPanelLayoutCheck[offsetof(StatusPanel, timer) == 0x2438 && offsetof(StatusPanel, variant) == 0x2440 &&
    offsetof(StatusPanel, rowCount) == 0x2448 && offsetof(StatusPanel, rowDelta) == 0x244C &&
    offsetof(StatusPanel, rowIds) == 0x24A0 && sizeof(StatusPanel) == 0x24B4 ? 1 : -1];

enum {
    STATUS_PANEL_FACE = 0,      /* the unit's face, one per row */
    STATUS_PANEL_BACK = 10,
    STATUS_PANEL_GAUGE = 20,
    STATUS_PANEL_NAME = 30,
    STATUS_PANEL_MP = 40,
    STATUS_PANEL_HP = 50,
    STATUS_PANEL_HEADER = 61,
    STATUS_PANEL_TABS = 62      /* four, the first rows only */
};

extern "C" {
/* Rebuilds the rows for the display variant: `rowCount` rows, `selected` highlighted. */
void statusPanelResetRows(StatusPanel *panel, s32 variant, s32 rowCount, s32 selected);
/* Starts a row change: `rowDelta` rows added or removed, `gaugeCount` gauges refreshed with it. */
void statusPanelStartRowChange(StatusPanel *panel, s32 rowDelta, s32 gaugeCount);
} /* extern "C" */

/* Sets the header and the row's tab image of the first four rows; each tab shows the image before the previous one.
 * Plain `static`: armcc inlines it after its own optimisation, which is what retail's callers show. */
static void statusPanelSetTabImages(StatusPanel *panel, s32 row, s32 headerImage)
{
    if (row <= 3) {
        if (row == 0)
            pairSetFirstResetSecond(&panel->sprites[STATUS_PANEL_HEADER], headerImage);
        pairSetFirstResetSecond(&panel->sprites[STATUS_PANEL_TABS + row], headerImage - 1 - row);
    }
}

/* Starts animation `anim` on the row's tab of the first four rows, and on the header with the first. */
static __inline void statusPanelSelectTabAnims(StatusPanel *panel, s32 row, s32 anim)
{
    if (row > 3)
        return;
    if (row == 0)
        uiSpriteSelectAnim(&panel->sprites[STATUS_PANEL_HEADER], anim);
    uiSpriteSelectAnim(&panel->sprites[STATUS_PANEL_TABS + row], anim);
}

#endif
