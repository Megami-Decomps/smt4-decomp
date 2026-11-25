/* NON_MATCHING: the timer stores match. The gauge loop's comparison and arguments are assigned
 * different registers, and retail keeps both non-variant arms out of line rather than sharing a call. */
#include "battle/BtlStatusPanelA.h"
#include "battle/BattleContextCommandsA.h"
#include "map/lmapMain.h"
#include "common.h"

enum {
    PANEL_ROW_CHANGE = 3,
    kVoiceRowChange = 0x1000214
};

extern "C" {

/* Starts the status panel's row change: `rowDelta` rows appear below the current ones (or the last ones leave when
 * it is negative, clamped to the ten rows the panel has) and `gaugeCount` gauges above the selection are redrawn.
 * The rows' images follow the display variant, as statusPanelResetRows sets them. */
void statusPanelStartRowChange(StatusPanel *panel, s32 rowDelta, s32 gaugeCount)
{
    s32 rows;
    s32 row;
    s32 i;

    statusPanelStartPhase(panel, PANEL_ROW_CHANGE);
    panel->rowDelta = rowDelta;
    panel->gaugeCount = gaugeCount;
    rows = panel->rowCount;
    if (rows + rowDelta < 0) {
        panel->rowDelta = -rows;
    }
    if (panel->rowDelta + rows > 10) {
        panel->rowDelta = 10 - rows;
    }

    if (gaugeCount > 0) {
        if (panel->rowDelta > 0) {
            rows += panel->rowDelta;
        }
        sysPlayVoice(kVoiceRowChange);
        for (i = 0; i < panel->gaugeCount; i++) {
            row = rows - panel->selected - i + STATUS_PANEL_GAUGE - 1;
            if (panel->variant != 0) {
                pairSetFirstResetSecond(&panel->sprites[row], 8);
            } else {
                pairSetFirstResetSecond(&panel->sprites[row], btlIsDefeatSuppressed() != 0 ? 0xA5 : 7);
            }
            row = rows - panel->selected - i + STATUS_PANEL_HP - 1;
            uiSpriteSelectAnim(&panel->sprites[row], 10);
            if (panel->variant != 0) {
                pairSetFirstResetSecond(&panel->sprites[row], 0xFA7);
            } else {
                pairSetFirstResetSecond(&panel->sprites[row], btlIsDefeatSuppressed() != 0 ? 0xFA8 : 0xFA6);
            }
        }
    }

    if (panel->rowDelta > 0) {
        for (i = 0; i < panel->rowDelta; i++) {
            uiSpriteSelectAnim(&panel->sprites[STATUS_PANEL_FACE + panel->rowCount + i], 2);
            uiSpriteSelectAnim(&panel->sprites[STATUS_PANEL_BACK + panel->rowCount + i], 2);
            statusPanelSelectTabAnims(panel, panel->rowCount + i, 12);
            if (panel->variant != 0) {
                pairSetFirstResetSecond(&panel->sprites[STATUS_PANEL_FACE + panel->rowCount + i], 1);
                pairSetFirstResetSecond(&panel->sprites[STATUS_PANEL_GAUGE + panel->rowCount + i], 8);
                pairSetFirstResetSecond(&panel->sprites[STATUS_PANEL_NAME + panel->rowCount + i], 3);
                pairSetFirstResetSecond(&panel->sprites[STATUS_PANEL_MP + panel->rowCount + i], 0xFA1);
                statusPanelSetTabImages(panel, panel->rowCount + i, 0xBD);
            } else if (btlIsDefeatSuppressed() != 0) {
                pairSetFirstResetSecond(&panel->sprites[STATUS_PANEL_FACE + panel->rowCount + i], 0xA3);
                pairSetFirstResetSecond(&panel->sprites[STATUS_PANEL_GAUGE + panel->rowCount + i], 0xA5);
                pairSetFirstResetSecond(&panel->sprites[STATUS_PANEL_NAME + panel->rowCount + i], 0xA4);
                pairSetFirstResetSecond(&panel->sprites[STATUS_PANEL_MP + panel->rowCount + i], 0xFB0);
                statusPanelSetTabImages(panel, panel->rowCount + i, 0xC2);
            } else {
                pairSetFirstResetSecond(&panel->sprites[STATUS_PANEL_FACE + panel->rowCount + i], 0);
                pairSetFirstResetSecond(&panel->sprites[STATUS_PANEL_GAUGE + panel->rowCount + i], 7);
                pairSetFirstResetSecond(&panel->sprites[STATUS_PANEL_NAME + panel->rowCount + i], 2);
                pairSetFirstResetSecond(&panel->sprites[STATUS_PANEL_MP + panel->rowCount + i], 4000);
                statusPanelSetTabImages(panel, panel->rowCount + i, 0xB8);
            }
        }
    } else if (panel->rowDelta < 0) {
        for (i = 0; i > panel->rowDelta; i--) {
            uiSpriteSelectAnim(&panel->sprites[STATUS_PANEL_FACE + panel->rowCount + i - 1], 8);
            uiSpriteSelectAnim(&panel->sprites[STATUS_PANEL_BACK + panel->rowCount + i - 1], 8);
            uiSpriteSelectAnim(&panel->sprites[STATUS_PANEL_GAUGE + panel->rowCount + i - 1], 9);
            uiSpriteSelectAnim(&panel->sprites[STATUS_PANEL_NAME + panel->rowCount + i - 1], 8);
            statusPanelSelectTabAnims(panel, panel->rowCount + (i - 1), 13);
        }
    }
}

} /* extern "C" */
