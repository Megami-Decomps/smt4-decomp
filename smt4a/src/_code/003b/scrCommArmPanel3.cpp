#include "shard/Shard003B.h"
#include "ui/UiSpriteState.h"

extern "C" {

extern MessageGlobalsA g_messageMain;

/* Script command: arms the panel (state 3) and initializes its block at +0x1820. */
u32 scrCommArmPanel3(void)
{
    MessagePanelA *panel = g_messageMain.panel;

    panel->unk191 = 1;
    panel->unk192 = 1;
    panel->unk190 = 3;
    uiSpriteSelectAnim(panel->block1820, 0x1D);
    return 1;
}

} /* extern "C" */
