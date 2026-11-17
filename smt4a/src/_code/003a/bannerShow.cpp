#include "ui/UiSpriteApi.h"
#include "ui/MessageMainA.h"
#include "common.h"
#include "ui/UiControl.h"

extern "C" {


/* Script command: turns on the banner's flags, sets up its window with the text and starts it. */
u32 bannerShow(void)
{
    MessageWindowA *banner = g_messageMain.banner;

    banner->introMode = 1;
    banner->introStep = 1;
    banner->introFlag = 1;
    uiSpriteStateInitFromSource(&banner->sprites[41], 19, 0xffffffff, &banner->parameters, 11, 1.0f);
    pairSetFirstResetSecond(&banner->sprites[41], 38);
    uiSpriteSelectAnim(&banner->sprites[41], 28);
    return 1;
}

} /* extern "C" */
