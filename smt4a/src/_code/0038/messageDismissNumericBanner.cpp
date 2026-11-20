#include "ui/UiSpriteApi.h"
#include "ui/MessageMainA.h"
#include "shard/W6_W6Match2_EffectEditor.h"

extern "C" {
void uiPanelCloseStateSection(MessageWindowA *window, u32 mode);
}

static __inline void messageNumericReset(MessageWindowA *banner, s32 value)
{
    banner->counterValue = value;
    banner->counterDuration = 10;
    banner->counterElapsed = 0;
    banner->counterBase = value;
}

static __inline void messageRequestClose(MessageWindowA *window)
{
    if (window != NULL && window->state != 0) {
        uiPanelCloseStateSection(window, window->mode);
        window->state = 3;
        window->closeRequested = 0;
    }
}

extern "C" u32 messageDismissNumericBanner(s32 close)
{
    MessageWindowA *banner = g_messageMain.banner;
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
            banner->counterState = 4;
            if (banner->alternateAnimation != 0) {
                uiSpriteSelectAnim(&banner->sprites[17], 2);
            } else {
                uiSpriteSelectAnim(&banner->sprites[17], 7);
            }
            messageRequestClose(g_messageMain.window);
            messageRequestClose(banner);
        }
        return 0;
    }
    if (banner->counterState == 0 || banner->counterState == 2 || banner->counterState == 1) {
        banner->counterState = 4;
        uiSpriteSelectAnim(&banner->sprites[17], 2);
    }
    return 1;
}
