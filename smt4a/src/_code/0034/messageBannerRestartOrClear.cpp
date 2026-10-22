#include "ui/MessageMain.h"
extern "C" MessageGlobalsA g_messageMain;

struct MessageBannerStateA {
    u32 unk00;        // 0x00
    u32 box;          // 0x04
    u8 state;         // 0x08
    u8 mode;          // 0x09
    u8 unk0a[0x2b];  // 0x0a
    u8 pending;       // 0x35
    u8 unk36[0x37];  // 0x36
    u8 immediate;     // 0x6d
};

extern "C" {
void msgBoxFlagsClearBit7(u32 box);
void FUN_00165088(MessageBannerStateA* banner, u32 mode);

// Clear a finished banner, or restart its active message operation.
void messageBannerRestartOrClear()
{
    MessageBannerStateA* banner = (MessageBannerStateA*)g_messageMain.panel;
    if (banner->state != 0) {
        if (banner->immediate != 0) {
            banner->state = 0;
            msgBoxFlagsClearBit7(banner->box);
        } else if (banner != NULL) {
            FUN_00165088(banner, banner->mode);
            banner->state = 3;
            banner->pending = 0;
        }
    }
}
}
