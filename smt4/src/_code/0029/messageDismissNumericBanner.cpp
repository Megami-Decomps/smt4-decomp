#include "ui/MessageMain.h"
#include "font/ComWin/ComWin.h"

extern "C" {
void titleOverlaySetModeAnimation(void *overlay, u32 mode);
}

static __inline void messageNumericReset(MessageWindow *banner, s32 value)
{
    banner->counterValue = value;
    banner->counterDuration = 10;
    banner->counterElapsed = 0;
    banner->counterBase = value;
}

static __inline void messageRequestClose(MessageWindow *window)
{
    if (window != NULL && window->state != 0) {
        titleOverlaySetModeAnimation(window, window->mode);
        window->state = 3;
        window->closeRequested = 0;
    }
}

// Finish an active numeric counter and start the banner's closing animation (closing both message objects when asked).
extern "C" u32 messageDismissNumericBanner(s32 close)
{
    MessageWindow *banner = g_messageMain.banner;
    if (banner->counterState == 3) {
        if (banner->wideValue != 0) {
            messageNumericReset(banner, banner->counterBase + banner->counterDelta);
            if (banner->counterValue <= 0) {
                banner->counterValue = 0;
            }
            if (banner->counterValue > 999999999) {
                banner->counterValue = 999999999;
            }
            banner->counterState = 0;
        }
        if (banner->smallValue != 0) {
            messageNumericReset(banner, banner->counterBase + banner->counterDelta);
            if (banner->counterValue <= 0) {
                banner->counterValue = 0;
            }
            if (banner->counterValue > 99) {
                banner->counterValue = 99;
            }
            banner->counterState = 0;
        }
    }
    if (close != 0 && banner->mode == 11 && banner->state != 0) {
        if (banner->counterState == 0 || banner->counterState == 2) {
            s32 animation = banner->alternateAnimation != 0 ? 2 : 7;
            banner->counterState = 4;
            spriteStartAnimationByIndex(&g_messageMain.banner->sprites[12], animation);
            messageRequestClose(g_messageMain.window);
            messageRequestClose(banner);
        }
        return 0;
    }
    if (banner->counterState == 0 || banner->counterState == 2 || banner->counterState == 1) {
        s32 animation = banner->alternateAnimation != 0 ? 2 : 7;
        banner->counterState = 4;
        spriteStartAnimationByIndex(&g_messageMain.banner->sprites[12], animation);
    }
    return 1;
}
