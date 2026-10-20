#include "shard/Shard003B.h"

extern "C" {

extern PanelRef g_messageMain;
extern void uiSpriteSelectAnim(u8 *block, s32 value);

/* Script command: arms the panel (state 3) and initializes its block at +0x1820. */
u32 scrCommArmPanel3(void)
{
    Panel85 *panel = g_messageMain.panel;

    panel->unk191 = 1;
    panel->unk192 = 1;
    panel->unk190 = 3;
    uiSpriteSelectAnim(panel->block1820, 0x1D);
    return 1;
}

} /* extern "C" */
