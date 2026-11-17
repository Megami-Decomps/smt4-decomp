#include "ui/UiSpriteApi.h"
#include "ui/MessageMain.h"

extern "C" {

u32 flagValueRead(void);

/* Script command: shows the banner with `id`: stamps the time, sets up its window with the text and starts it. */
u32 bannerShow(u32 id)
{
    MessageWindow *banner = g_messageMain.banner;
    u32 now;

    banner->smallValue = 1;
    banner->counterState = 1;
    banner->bannerId = id;
    now = flagValueRead();
    banner->counterValue = now;
    banner->counterBase = now;
    uiSpriteStateInitFromSource(&banner->sprites[12], 14, 0xffffffff, &banner->parameters, 11, 1.0f);
    pairSetFirstResetSecond(&banner->sprites[12], 10);
    spriteStartAnimationByIndex(&banner->sprites[12], 6);
    return 1;
}

} /* extern "C" */
