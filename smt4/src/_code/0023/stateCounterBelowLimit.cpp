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
s32 FUN_0029e93c(const StateCounter *counter);
s32 FUN_0029efc0(const StateCounter *counter);

// Check whether the mode-selected counter plus an offset remains below its limit.
s32 stateCounterBelowLimit(StateWindow *window, s32 offset)
{
    s32 value;
    switch (window->mode) {
    case 1:
        value = FUN_0029e93c(&window->counter);
        break;
    default:
        value = FUN_0029efc0(&window->counter);
        break;
    }
    return window->limit > value + offset;
}
}
