#include "ui/UiSpriteApi.h"
#include "ui/MessageMainA.h"

extern "C" {

/* Script command: plays animation 7 on the banner's counter-panel sprite and sets the panel state to 4. */
u32 FUN_003af980(void)
{
    MessageWindowA *banner = g_messageMain.banner;

    uiSpriteSelectAnim(&banner->sprites[21], 7);
    banner->panelState = 4;
    return 1;
}

} /* extern "C" */
