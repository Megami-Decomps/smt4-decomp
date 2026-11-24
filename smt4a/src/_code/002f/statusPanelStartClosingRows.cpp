#include "battle/BtlStatusPanelA.h"

/* Starts the panel's row closing animation and selects its first row. */
extern "C" void statusPanelStartClosingRows(StatusPanel *panel)
{
    statusPanelStartPhase(panel, 4);
    panel->selected = 0;
    s32 row = 0;
    if (row < panel->rowCount) {
        do {
            uiSpriteSelectAnim(&panel->sprites[STATUS_PANEL_FACE + row], 8);
            uiSpriteSelectAnim(&panel->sprites[STATUS_PANEL_BACK + row], 8);
            statusPanelSelectTabAnims(panel, row, 13);
        } while (panel->rowCount > ++row);
    }
}
