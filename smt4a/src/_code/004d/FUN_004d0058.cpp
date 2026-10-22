#include "common.h"

struct StateCounter { u8 data[0x64]; };
struct StateWindow {
    u8 mode; // 0x00
    u8 unk01[7];
    s32 limit; // 0x08
    u32 unk0c;
    StateCounter counter; // 0x10
};

extern "C" {
s32 resourceRunEmbeddedOperationIfUnblocked(const StateCounter *counter);
s32 resourceRunOperationIfUnblocked(const StateCounter *counter);

// Check whether the mode-selected counter plus an offset remains below its limit.
s32 FUN_004d0058(StateWindow *window, s32 offset)
{
    s32 value = window->mode == 1 ? resourceRunEmbeddedOperationIfUnblocked(&window->counter) : resourceRunOperationIfUnblocked(&window->counter);
    return window->limit > value + offset;
}
}
