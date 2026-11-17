#include "ui/MessageMainA.h"

extern "C" {

void uiSpriteSelectAnim(void *sprite, s32 anim);
s32 scrGetCommandFrame(void);

/* Starts the banner window's close animation on a fresh command frame; true when it is not busy. */
u8 messageCloseWindowAndIsIdle(void)
{
    MessageWindowA *banner = g_messageMain.banner;

    if (scrGetCommandFrame() == 0 && banner->closePending != 0) {
        MessageWindowA *current = g_messageMain.banner;
        uiSpriteSelectAnim(&current->sprites[34], 12);
        current->closeBusy = 1;
        current->closeMode = 4;
    }
    return banner->closeBusy == 0;
}

} /* extern "C" */
