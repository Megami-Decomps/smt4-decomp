#include "ui/MessageMain.h"

extern "C" {
void msgBoxFlagsClearBit7(u32 box);
void titleOverlaySetModeAnimation(MessageWindow *window, u32 mode);

// Finish a banner immediately when marked, otherwise start its closing transition.
void messageBannerBeginClose(void)
{
    MessageWindow *banner = g_messageMain.banner;
    if (banner->state != 0) {
        if (banner->closeLocked != 0) {
            banner->state = 0;
            msgBoxFlagsClearBit7(banner->box);
            return;
        }
        if (banner != NULL) {
            titleOverlaySetModeAnimation(banner, banner->mode);
            banner->state = 3;
            banner->closeRequested = 0;
        }
    }
}
}
