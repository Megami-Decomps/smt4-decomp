#include "ui/UiSpriteApi.h"
#include "ui/PartyPanelState.h"

extern "C" {

// Check whether the party panel accepts an action in its current scene and timer state.
u32 FUN_001ed80c()
{
    PartyPanelState *panel = g_partyPanel;
    if (panel == NULL)
        return 0;
    if (panel->sceneState == 23) {
        if ((s32)panel->phase > 4)
            return 0;
    } else if (panel->sceneState == 11) {
        return 0;
    } else if (panel->sceneState == 13) {
        if (panel->previousState != 8)
            return 0;
    }
    if ((uiSpriteGetOperationMode(&panel->sprites[PARTY_PANEL_SPRITE_MEMBERS]) != 8 && uiSpriteGetOperationMode(&panel->sprites[PARTY_PANEL_SPRITE_MEMBERS]) != 7) ||
        uiSpriteGetCompletionState(&panel->sprites[PARTY_PANEL_SPRITE_MEMBERS]) == 0)
        return 1;
    return 0;
}
}
