/* Shows the banner with `param`: stamps the current tick into its counter and starts its frame sprite. */
#include "ui/UiSpriteApi.h"
#include "ui/MessageMainA.h"

extern "C" {

u32 flagValueRead(void);

u32 messageArmMenuAnimation(u32 param)
{
    MessageWindowA *banner = g_messageMain.banner;
    u32 tick;

    banner->smallValue = 1;
    banner->counterState = 1;
    banner->bannerId = param;
    tick = flagValueRead();
    banner->counterValue = tick;
    banner->counterBase = tick;
    uiSpriteStateInitFromSource(&banner->sprites[17], 8, 0xffffffff, &banner->parameters, 0xb, 1.0f);
    pairSetFirstResetSecond(&banner->sprites[17], 10);
    uiSpriteSelectAnim(&banner->sprites[17], 6);
    return 1;
}

} /* extern "C" */
