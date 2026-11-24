#include "battle/BtlStatusPanelA.h"

/* Starts the frame animation in phase 5 when the panel is idle. */
extern "C" void statusPanelStartIdleFrameAnimation(StatusPanel *panel)
{
    if (panel->timer.state == 0) {
        statusPanelStartPhase(panel, 5);
        uiSpriteSetKeyframe(&panel->sprites[STATUS_PANEL_FRAME], 0, 0);
    }
}
