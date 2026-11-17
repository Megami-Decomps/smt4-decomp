#include "common.h"
#include "battle/BtlUiGlobal.h"

extern "C" {


void btlUiPanelFadeInWhenReady(BtlUi *block);

/* Script command: fades in the battle UI panel once it is ready. */
u32 FUN_0032337c(void)
{
    btlUiPanelFadeInWhenReady(g_btlUiBlock);
    return 1;
}

} /* extern "C" */
