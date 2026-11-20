#include "ui/UiSpriteApi.h"
#include "ui/PartyPanelState.h"

extern "C" {

int FUN_0026c214(void);
int partyPanelSetState(int a, int b);

void FUN_0028a368(int reset)
{
    PartyPanelState *scene = g_partyPanel;
    int i;

    if (g_partyPanel != NULL) {
        g_partyPanel->unk0034 = 0;
        scene->unk0035 = 0;
        if (reset != 0) {
            i = 0;
            do {
                uiSpriteSetKeyframe(&scene->sprites[PARTY_PANEL_SPRITE_MEMBERS + i], 4, 0);
                i++;
            } while (i < 4);
            if (scene->alternate != 0) {
                uiSpriteSetKeyframe(&scene->sprites[PARTY_PANEL_SPRITE_LAYOUT], 6, 0);
            } else {
                uiSpriteSetKeyframe(&scene->sprites[PARTY_PANEL_SPRITE_LAYOUT], 4, 0);
            }
        }
        if (scene->panelState != 0 && scene->panelState != 1) {
            FUN_0026c214();
        }
        partyPanelSetState(0, 1);
    }
}

} /* extern "C" */
