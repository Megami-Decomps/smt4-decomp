#include "ui/UiSpriteApi.h"
#include "ui/PartyPanelState.h"
#include "bible/bibleMain.h"

extern "C" {

int FUN_0026d654(int arg);
int partyPanelSetState(int a, int b);
int FUN_00298d28(int a, int b);
int beginStatusPanelClose(void);

void FUN_0026d5a4(void)
{
    PartyPanelState *scene = g_partyPanel;
    u8 state;
    int i;

    if (g_partyPanel == NULL) {
        return;
    }
    state = g_partyPanel->panelState;
    if ((state != 12 && state != 4) && (state != 15)) {
        i = 0;
        do {
            uiSpriteSetKeyframe(&scene->sprites[PARTY_PANEL_SPRITE_MEMBERS + i], 7, 0);
            i++;
        } while (i < 4);
        uiSpriteSetKeyframe(&scene->sprites[PARTY_PANEL_SPRITE_LAYOUT], 7, 0);
    }
    FUN_00298d28(0, 0);
    state = scene->panelState;
    if ((state != 1 && state != 6) && (state != 7)) {
        beginStatusPanelClose();
    }
    FUN_0026d654(1);
    partyPanelSetState(0x15, 1);
}

} /* extern "C" */
