#include "shard/Scene43dcf0.h"

extern "C" {

int FUN_0029378c(u32 a, u32 b);
int timerStart(void *timer, int a, int b);

void FUN_00293268(void)
{
    Scene43dcf0 *scene = g_partyPanel;
    int i;

    g_partyPanel->unk2C = g_partyPanel->unk2C ^ 1;
    timerStart(scene->timerC, 4, 0);
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
