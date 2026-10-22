/* NON_MATCHING: notification halfword addressing and saved-register allocation differ. */
#include "status/StatusDown.h"

struct StatusNotification {
    u32 words[3];
    u16 value;
    u16 padding;
};
struct StatusNotificationView {
    u8 prefix[0x66C];
    StatusNotification notification;
    u8 animation[1];
};
extern "C" {
extern StatusDownStateA *g_statusDown;
s32 FUN_002c7e3c(void);
s32 fieldStateAllowsAction(void);
void sysPlaySe(u32);
void FUN_00203b40(void *, s32, s32, s32, s32, s32);
}

extern "C" void FUN_002f001c(const StatusNotification *notification)
{
    StatusDownStateA *status = g_statusDown;
    if (s16(status->unk598) >= 0 && status->unk514 == 1) {
        s32 state = FUN_002c7e3c();
        if (state != 14 && state != 7) {
            sysPlaySe(fieldStateAllowsAction() ? 0xF9 : 0x1F);
        } else {
            sysPlaySe(0x31);
        }
    }
    status->unk598 = 0xFFFF;
    StatusNotificationView *view = reinterpret_cast<StatusNotificationView *>(status);
    view->notification.words[0] = notification->words[0];
    view->notification.words[1] = notification->words[1];
    view->notification.words[2] = notification->words[2];
    view->notification.value = notification->value;
    FUN_00203b40(view->animation, 7, 7, 1, 0, 1);
    status->inventoryDirty = 1;
}
