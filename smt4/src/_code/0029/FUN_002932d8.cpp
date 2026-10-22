#include "ui/PartyPanelState.h"

extern "C" {
extern PartyPanelState *g_partyPanel;

int FUN_0029378c(u32 a, u32 b);
int timerStart(void *timer, int a, int b);

void FUN_002932d8(void)
{
    PartyPanelState *scene = g_partyPanel;
    int i;

    g_partyPanel->unk2C = g_partyPanel->unk2C ^ 1;
    timerStart(scene->timerC, 5, 0);
    i = 0;
    do {
        FUN_0029378c(scene->unk6C8[i], scene->unk2C);
        i++;
    } while (i < 4);
    i = 0;
    do {
        FUN_0029378c(scene->unk6D8[i], scene->unk2C);
        i++;
    } while (i < 0x18);
}

} /* extern "C" */
