/* NON_MATCHING: 41 lines: retail hoists 0xFA8 and the animation id 12 into saved registers where the build hoists
 * 0xFA7/0xFA1, and keeps the header sprite's address in sl (built: r9). */
#include "ui/UiSpriteApi.h"
#include "ui/UiSpriteState.h"
#include "battle/BattleContextCommandsA.h"
#include "common.h"

/* unit-local: the battle status panel's work (BtlUiObjAA), only the fields this function resets */
struct StatusPanel {
    /* 0x0000 */ UiResourceParameters parameters;
    /* 0x0020 */ UiSpriteState sprites[66]; /* six rows of ten party sprites, then the frame sprites */
    /* 0x2438 */ s32 unk2438;
    /* 0x243C */ s32 unk243C;
    /* 0x2440 */ s32 variant;
    /* 0x2444 */ u8 unk2444[4];
    /* 0x2448 */ s16 rowCount;
    /* 0x244A */ s16 selected;
    /* 0x244C */ u8 unk244C[0x54];
    /* 0x24A0 */ s16 rowIds[10];
};

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

/* Sets the header and the row's tab image of the first four rows; each tab shows the image before the previous one. */
static void statusPanelSetTabImages(StatusPanel *panel, s32 row, s32 headerImage)
{
    if (row <= 3) {
        if (row == 0)
            pairSetFirstResetSecond(&panel->sprites[STATUS_PANEL_HEADER], headerImage);
        pairSetFirstResetSecond(&panel->sprites[STATUS_PANEL_TABS + row], headerImage - 1 - row);
    }
}

/* Reset the party panel's rows and set each row's sprites for the current display variant. */
void statusPanelResetRows(StatusPanel *panel, s32 variant, u16 rowCount, u16 selected)
{
    panel->rowCount = rowCount;
    panel->selected = selected;
    panel->variant = variant;
    for (s32 i = 0; i < 10; i++)
        panel->rowIds[i] = -1;
    panel->unk243C = 2;
    panel->unk2438 = 0;
    for (s32 i = 0; i < 66; i++)
        uiSpriteSetUpdated(&panel->sprites[i], 0);
    for (s32 i = 0; i < panel->rowCount; i++) {
        if (panel->variant != 0) {
            pairSetFirstResetSecond(&panel->sprites[STATUS_PANEL_FACE + i], 1);
            pairSetFirstResetSecond(&panel->sprites[STATUS_PANEL_GAUGE + i], 8);
            pairSetFirstResetSecond(&panel->sprites[STATUS_PANEL_NAME + i], 3);
            pairSetFirstResetSecond(&panel->sprites[STATUS_PANEL_HP + i], 0xFA7);
            pairSetFirstResetSecond(&panel->sprites[STATUS_PANEL_MP + i], 0xFA1);
            statusPanelSetTabImages(panel, i, 0xBD);
        } else if (btlIsDefeatSuppressed() != 0) {
            pairSetFirstResetSecond(&panel->sprites[STATUS_PANEL_FACE + i], 0xA3);
            pairSetFirstResetSecond(&panel->sprites[STATUS_PANEL_GAUGE + i], 0xA5);
            pairSetFirstResetSecond(&panel->sprites[STATUS_PANEL_NAME + i], 0xA4);
            pairSetFirstResetSecond(&panel->sprites[STATUS_PANEL_HP + i], 0xFA8);
            pairSetFirstResetSecond(&panel->sprites[STATUS_PANEL_MP + i], 0xFB0);
            statusPanelSetTabImages(panel, i, 0xC2);
        } else {
            pairSetFirstResetSecond(&panel->sprites[STATUS_PANEL_FACE + i], 0);
            pairSetFirstResetSecond(&panel->sprites[STATUS_PANEL_GAUGE + i], 7);
            pairSetFirstResetSecond(&panel->sprites[STATUS_PANEL_NAME + i], 2);
            pairSetFirstResetSecond(&panel->sprites[STATUS_PANEL_HP + i], 0xFA6);
            pairSetFirstResetSecond(&panel->sprites[STATUS_PANEL_MP + i], 4000);
            statusPanelSetTabImages(panel, i, 0xB8);
        }
        uiSpriteSelectAnim(&panel->sprites[STATUS_PANEL_FACE + i], 2);
        uiSpriteSelectAnim(&panel->sprites[STATUS_PANEL_GAUGE + i], 5);
        uiSpriteSelectAnim(&panel->sprites[STATUS_PANEL_NAME + i], 3);
        uiSpriteSelectAnim(&panel->sprites[STATUS_PANEL_HP + i], 10);
        if (i <= 3) {
            if (i == 0)
                uiSpriteSelectAnim(&panel->sprites[STATUS_PANEL_HEADER], 0xC);
            uiSpriteSelectAnim(&panel->sprites[STATUS_PANEL_TABS + i], 0xC);
        }
        pairSetFirstResetSecond(&panel->sprites[STATUS_PANEL_BACK + i], 6);
        uiSpriteSelectAnim(&panel->sprites[STATUS_PANEL_BACK + i], 1);
    }
}

} /* extern "C" */
