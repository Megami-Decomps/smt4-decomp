#include "status/StatusDown.h"
#include "ui/UiControl.h"

extern "C" {
extern StatusDownStateA *g_statusDown;
s32 FUN_0035db94();
void FUN_00230b9c(u32 direction, u32 selection, s32 mode);
void ifTouchRegionRemove();
void buttonHelpSetText(s32 channel, u32 color);
void __aeabi_memset4(void *destination, s32 size, s32 value);

// Change status tabs, clear their touch regions, and schedule the corresponding page state.
void statusDownSwitchTab(u32 tab)
{
    StatusDownStateA *screen = g_statusDown;
    u8 *currentTab = &screen->unk514;
    if (*currentTab == tab)
        return;
    screen->unk515[0] = *currentTab;
    *currentTab = static_cast<u8>(tab);
    if (FUN_0035db94() < 0)
        FUN_00230b9c(3, 0xffffffff, 0);
    else if (FUN_0035db94() > 0)
        FUN_00230b9c(2, 0xffffffff, 0);
    StatusDownStateA *state = g_statusDown;
    for (s32 region = 0; region < state->touchRegionCount; ++region)
        ifTouchRegionRemove();
    state->touchRegionCount = 0;
    __aeabi_memset4(state->slots, sizeof(state->slots), -1);
    state = g_statusDown;
    state->timer = 0;
    u32 previous = state->track.state;
    state->track.state = 2;
    state->track.previous = previous;
    if (tab == 0)
        screen->unk520 = 0;
    else if (tab == 1)
        screen->unk520 = 3;
    else if (tab == 2)
        screen->unk520 = 0x13;
    else if (tab == 3)
        screen->unk520 = 0x14;
    else if (tab == 4)
        screen->unk520 = 0x16;
    else if (tab == 5)
        screen->unk520 = 0x18;
    else if (tab == 6)
        screen->unk520 = 0x1f;
    buttonHelpSetText(0, 0xf4f4f4ff);
}
}
