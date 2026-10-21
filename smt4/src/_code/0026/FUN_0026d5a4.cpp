#include "shard/Scene43dcf0.h"

extern "C" {

int FUN_0026d654(int arg);
int partyPanelSetState(int a, int b);
int FUN_00298d28(int a, int b);
int beginStatusPanelClose(void);
int timerStart(void *timer, int a, int b);

void FUN_0026d5a4(void)
{
    Scene43dcf0 *scene = g_partyPanel;
    u8 state;
    int i;

    if (g_partyPanel == NULL) {
        return;
    }
    state = g_partyPanel->state;
    if ((state != 12 && state != 4) && (state != 15)) {
        i = 0;
        do {
            timerStart(scene->timers[i].data, 7, 0);
            i++;
        } while (i < 4);
        timerStart(scene->timerB.data, 7, 0);
    }
    FUN_00298d28(0, 0);
    state = scene->state;
    if ((state != 1 && state != 6) && (state != 7)) {
        beginStatusPanelClose();
    }
    FUN_0026d654(1);
    partyPanelSetState(0x15, 1);
}

} /* extern "C" */
