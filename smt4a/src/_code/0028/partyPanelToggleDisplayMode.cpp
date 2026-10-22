#include "common.h"

extern "C" {

void uiSpriteSetKeyframe(u8 *member, s32 a, s32 b);
void FUN_003f5220(u32 handle, u32 value);

typedef struct Screen {
    /* 0x000 */ u8 unk000[0x2C];
    /* 0x02C */ u32 toggle;
    /* 0x030 */ u8 unk030[0x150];
    /* 0x180 */ u8 member180[0x890];
    /* 0xA10 */ u32 handlesA[4];
    /* 0xA20 */ u32 handlesB[0x18];
} Screen;
extern Screen *g_partyPanel;

/* Toggles the screen's flag, restarts its member at 0x180 and passes the new flag to each of the 4 + 24 handles. */
void partyPanelToggleDisplayMode(void)
{
    Screen *screen;
    s32 i;

    screen = g_partyPanel;
    g_partyPanel->toggle = g_partyPanel->toggle ^ 1;
    uiSpriteSetKeyframe(screen->member180, 4, 0);
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
