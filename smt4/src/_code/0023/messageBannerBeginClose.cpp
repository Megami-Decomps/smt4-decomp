#include "shard/W4_W4Match5b_MessageMain.h"

extern "C" {
void msgBoxFlagsClearBit7(u32 box);
void titleOverlaySetModeAnimation(MessageObject *object, u32 mode);

// Finish a banner immediately when marked, otherwise start its closing transition.
void messageBannerBeginClose(void)
{
    MessageObject *banner = g_messageMain.banner;
    if (banner->close.state != 0) {
        if (banner->unk5f != 0) {
            banner->close.state = 0;
            msgBoxFlagsClearBit7(messageObjectGetBox(banner));
            return;
        }
        if (banner != NULL) {
            titleOverlaySetModeAnimation(banner, banner->close.mode);
            banner->close.state = 3;
            banner->close.pending = 0;
        }
    }
}
}
