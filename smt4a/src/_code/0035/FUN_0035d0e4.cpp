#include "ui/PartyPanelStateA.h"

extern "C" {
void partyPanelRefreshFromSlotTable(void);
void FUN_0023f900(void);

/* Update the panel mode, copying its saved data when enabled or resetting it when disabled. */
void FUN_0035d0e4(s32 mode)
{
    PartyPanelStateA *panel = g_partyPanel;
    if (panel == NULL || panel->layoutMode == mode) {
        return;
    }

    panel->layoutMode = mode;
    partyWidgetSetUnitId(panel->characters[0], mode == 0 ? -1 : -2);

    if (mode == 0) {
        partyPanelRefreshFromSlotTable();
    } else {
        panel->fullGrid = panel->partyGrid;
        panel->fullGridAlternate = panel->partyGrid;
    }
    FUN_0023f900();
}
} /* extern "C" */
