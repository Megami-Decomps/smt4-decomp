#include "battle/BtlStatusPanelA.h"

/* Ends the first phase and restarts the panel's frame animation in phase 6. */
extern "C" void statusPanelEndPhaseOne(StatusPanel *panel)
{
    if (panel->timer.state == 1) {
        statusPanelStartPhase(panel, 6);
        uiSpriteSetKeyframe(&panel->sprites[STATUS_PANEL_FRAME], 0, 1);
    }
}
