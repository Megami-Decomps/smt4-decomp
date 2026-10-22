#include "ui/PartyPanelState.h"

extern "C" {
extern PartyPanelState *g_partyPanel;

int FUN_0026c214(void);
int partyPanelSetState(int a, int b);
int timerStart(void *timer, int a, int b);

void FUN_0028a368(int reset)
{
    PartyPanelState *scene = g_partyPanel;
    int i;

    if (g_partyPanel != NULL) {
        g_partyPanel->unk34 = 0;
        scene->unk35 = 0;
        if (reset != 0) {
            i = 0;
            do {
                timerStart(scene->timers[i].data, 4, 0);
                i++;
            } while (i < 4);
            if (scene->unk42 != 0) {
                timerStart(scene->timerB.data, 6, 0);
            } else {
                timerStart(scene->timerB.data, 4, 0);
            }
        }
        if (scene->panelState != 0 && scene->panelState != 1) {
            FUN_0026c214();
        }
        partyPanelSetState(0, 1);
    }
}

} /* extern "C" */
