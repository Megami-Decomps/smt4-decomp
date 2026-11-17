/* NON_MATCHING: notification halfword addressing and saved-register allocation differ. */
#include "status/StatusDownA.h"

struct StatusNotification {
    u32 words[3];
    u16 value;
    u16 padding;
};
extern "C" {
s32 FUN_002c7e3c(void);
s32 fieldStateAllowsAction(void);
void sysPlaySe(u32);
void gridNavigationConfigure(void *, s32, s32, s32, s32, s32);
}

extern "C" void FUN_002f001c(const StatusNotification *notification)
{
    StatusDownStateA *status = g_statusDown;
    if (s16(status->selectedEntry) >= 0 && status->tab == 1) {
        s32 state = FUN_002c7e3c();
        if (state != 14 && state != 7) {
            sysPlaySe(fieldStateAllowsAction() ? 0xF9 : 0x1F);
        } else {
            sysPlaySe(0x31);
        }
    }
    status->selectedEntry = 0xFFFF;
    status->entryUnk00 = notification->words[0];
    status->entryUnk04 = notification->words[1];
    status->entryUnk08 = notification->words[2];
    status->entryUnk0C = notification->value;
    gridNavigationConfigure(status->window, 7, 7, 1, 0, 1);
    status->listActive = 1;
}
