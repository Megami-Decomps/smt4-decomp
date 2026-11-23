#include "common.h"
#include "ui/MessageMainA.h"
#include "script/ScriptArgs.h"
#include "ui/UiControl.h"

extern "C" {

/* Starts the paired message panel's close animation on a fresh command frame;
 * returns true when the panel is not busy. */
bool messageClosePairedFrameAndIsIdle(void)
{
    MessageWindowA *panel = g_messageMain.banner;

    if (scrGetCommandFrame() == 0 && panel->pairedFrameEnabled != 0) {
        MessageWindowA *current = g_messageMain.banner;
        uiSpriteSelectAnim(&current->sprites[37], 15);
        uiSpriteSelectAnim(&current->sprites[38], 16);
        uiSpriteSelectAnim(&current->sprites[40], 18);
        current->pairedFrameBusy = 1;
        current->pairedFrameState = current->pairedFrameStyle == 0 ? 6 : 4;
    }
    return panel->pairedFrameBusy == 0;
}

} /* extern "C" */
