#include "ui/MessageMainA.h"
#include "shard/W6_W6Match8_AnimatedSprite.h"

extern "C" {

u16 gameDataBlocksGetCounter(void);

/* Script command: opens the counter panel in mode 10 with the current counter value and starts its sprite animation. */
u32 FUN_003a6a8c(void)
{
    MessageWindowA *banner = g_messageMain.banner;

    banner->panelMode = 10;
    banner->panelStep = 1;
    u16 counter = gameDataBlocksGetCounter();
    banner->panelCount = counter;
    banner->panelDisplayCount = counter;
    banner->panelCountValue = (f32)counter;
    banner->panelState = 1;
    uiSpriteStateInitFromSource(&banner->sprites[21], 8, 0xFFFFFFFF, &banner->parameters, 11, 1.0f);
    pairSetFirstResetSecond(&banner->sprites[21], 0x11);
    uiSpriteSelectAnim(&banner->sprites[21], 6);
    return 1;
}

} /* extern "C" */
