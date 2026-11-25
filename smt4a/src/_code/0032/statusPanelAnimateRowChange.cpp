/* NON_MATCHING: the deferred preset path shares the image call rather than outline it, and the closing loop initializes its index unconditionally. */
#include "battle/BtlStatusPanelA.h"
#include "battle/BattleContextCommandsA.h"

/* Selects opening and closing animations for the active rows and their markers. */
extern "C" void statusPanelAnimateRowChange(StatusPanel *panel, s8 addedRows, s8 closingRows)
{
    if (panel == NULL) {
        return;
    }
    panel->rowCount += addedRows;
    panel->selected += closingRows;
    enum { MARKER_ANIMATION = 12, IMMEDIATE_FACE = 1, DEFEAT_FACE = 0xFB0 };
    for (s32 index = 0; index < panel->rowCount; ++index) {
        uiSpriteSelectAnim(&panel->sprites[STATUS_PANEL_GAUGE + index], 6);
        uiSpriteSelectAnim(&panel->sprites[STATUS_PANEL_NAME + index], 4);
        uiSpriteSelectAnim(&panel->sprites[STATUS_PANEL_BACK + index], 0);
        uiSpriteSelectAnim(&panel->sprites[STATUS_PANEL_FACE + index], 2);
        statusPanelSelectTabAnims(panel, index, MARKER_ANIMATION);
        s32 preset = panel->variant ? IMMEDIATE_FACE : (btlIsDefeatSuppressed() ? DEFEAT_FACE : 0);
        pairSetFirstResetSecond(&panel->sprites[STATUS_PANEL_FACE + index], preset);
    }
    for (s32 index = 0; index < panel->selected; ++index) {
        s32 row = panel->rowCount - index - 1;
        pairSetFirstResetSecond(&panel->sprites[STATUS_PANEL_BACK + row], 6);
        uiSpriteSelectAnim(&panel->sprites[STATUS_PANEL_BACK + row], 1);
        uiSpriteSelectAnim(&panel->sprites[STATUS_PANEL_GAUGE + row], 6);
        uiSpriteSelectAnim(&panel->sprites[STATUS_PANEL_NAME + row], 4);
    }
}
