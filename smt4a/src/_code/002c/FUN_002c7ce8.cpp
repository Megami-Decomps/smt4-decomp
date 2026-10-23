/* NON_MATCHING: owner/tab saved registers, memset versus memset4 selection, and final color constant scheduling differ. */
#include "status/StatusDown.h"
#include <string.h>

extern "C" {
extern StatusDownStateA *g_statusDown;
s32 FUN_0035db94();
void FUN_00230b9c(u32 direction, u32 selection, s32 mode);
void ifTouchRegionRemove();
void FUN_0019de98(s32 channel, u32 color);

// Change status tabs, clear their touch regions, and schedule the corresponding page state.
void FUN_002c7ce8(u32 tab)
{
    StatusDownStateA *screen = g_statusDown;
    if (screen->unk514 == tab)
        return;
    screen->unk515[0] = screen->unk514;
    screen->unk514 = static_cast<u8>(tab);
    if (FUN_0035db94() < 0)
        FUN_00230b9c(3, 0xffffffff, 0);
    else if (FUN_0035db94() > 0)
        FUN_00230b9c(2, 0xffffffff, 0);
    StatusDownStateA *state = g_statusDown;
    for (s32 region = 0; region < state->touchRegionCount; ++region)
        ifTouchRegionRemove();
    state->touchRegionCount = 0;
    memset(state->slots, -1, sizeof(state->slots));
    state = g_statusDown;
    state->timer = 0;
    u32 previous = state->track.state;
    state->track.state = 2;
    state->track.previous = previous;
    if (tab == 0)
        screen->unk520 = 0;
    else {
        u32 page;
        if (tab == 1)
            page = 3;
        else if (tab == 2)
            page = 0x13;
        else if (tab == 3)
            page = 0x14;
        else if (tab == 4)
            page = 0x16;
        else if (tab == 5)
            page = 0x18;
        else if (tab == 6)
            page = 0x1f;
        else {
            FUN_0019de98(0, 0xf4f4f4ff);
            return;
        }
        screen->unk520 = page;
    }
    FUN_0019de98(0, 0xf4f4f4ff);
}
}
