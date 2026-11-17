#include "ui/MessageMainA.h"
#include "shard/Shard003B.h"
#include "ui/UiSpriteState.h"

extern "C" {

/* Script command: arms the panel (state 3) and initializes its block at +0x1820. */
u32 scrCommArmPanel3(void)
{
    MessageWindowA *panel = g_messageMain.banner;

    panel->introStep = 1;
    panel->introFlag = 1;
    panel->introMode = 3;
    uiSpriteSelectAnim(&panel->sprites[41], 0x1D);
    return 1;
}

} /* extern "C" */
