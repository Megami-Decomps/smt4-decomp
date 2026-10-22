#include "ui/PartyPanelState.h"

extern "C" {
extern PartyPanelStateA *g_partyPanel;

void uiSpriteSetKeyframe(u8 *member, s32 a, s32 b);
void FUN_003f5220(u32 handle, u32 value);

/* Toggles the screen's flag, restarts its member at 0x180 and passes the new flag to each of the 4 + 24 handles. */
void FUN_0026e848(void)
{
    PartyPanelStateA *screen;
    s32 i;

    screen = g_partyPanel;
    g_partyPanel->toggle = g_partyPanel->toggle ^ 1;
    uiSpriteSetKeyframe((u8 *)&screen->animation, 5, 0);
    i = 0;
    do {
        FUN_003f5220(screen->handlesA[i], screen->toggle);
        i = i + 1;
    } while (i < 4);
    i = 0;
    do {
        FUN_003f5220(screen->handlesB[i], screen->toggle);
        i = i + 1;
    } while (i < 0x18);
}

} /* extern "C" */
