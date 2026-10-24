#include "common.h"

extern "C" {

extern u32 g_btlUiBlock;

void btlUiPanelFadeInWhenReady(u32 block);

/* Script command: fades in the battle UI panel once it is ready. */
u32 FUN_0032337c(void)
{
    btlUiPanelFadeInWhenReady(g_btlUiBlock);
    return 1;
}

} /* extern "C" */
