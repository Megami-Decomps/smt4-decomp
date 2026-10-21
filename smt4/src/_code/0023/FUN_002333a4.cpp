/* NON_MATCHING: mode-one call block is merged before the comparison instead of placed after the return. */
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
s32 FUN_002333a4(StateWindow *window, s32 offset)
{
    s32 value;
    if (window->mode != 1) {
        value = FUN_0029efc0(&window->counter);
    } else {
        value = FUN_0029e93c(&window->counter);
    }
    return window->limit > value + offset;
}
}
