#include "common.h"
#include "battle/BtlUiGlobal.h"

extern "C" {

s32 scrGetArg(u32 index);
s32 btlUiIsSpriteInactive(BtlUiA *block);
s32 btlUiPanelShow(BtlUiA *block);
s32 btlUiPanelHide(BtlUiA *block);
s32 btlUiPanelIsAnimationDone(BtlUiA *block);

/* Script command: shows (nonzero argument 0) or hides the battle UI panel, starting its show or
 * hide animation when needed; returns 1 once the panel is shown or hidden, 0 to be called again. */
u32 scrCommBtlUiShowPanel(void)
{
    u32 done;
    if (scrGetArg(0) != 0) {
        if (btlUiIsSpriteInactive(g_btlUiBlock) != 0) {
            btlUiPanelShow(g_btlUiBlock);
        }
        done = btlUiPanelIsAnimationDone(g_btlUiBlock) != 0;
    } else {
        if (btlUiPanelIsAnimationDone(g_btlUiBlock) != 0) {
            btlUiPanelHide(g_btlUiBlock);
        }
        done = btlUiIsSpriteInactive(g_btlUiBlock) != 0;
    }
    return done;
}

} /* extern "C" */
