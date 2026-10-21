/* NON_MATCHING: retail uses a writeback mapping load and two short-circuit bit tests; compiled code separates the address ADD and combines the mode bits into TST #3. */
#include "common.h"

struct ButtonMapping {
    u32 type; // 0x00
    u32 mask; // 0x04
};
struct InputMode {
    u32 unk00[2]; // 0x00
    u32 flags;    // 0x08
};
struct ButtonState {
    u32 unk00[2]; // 0x00
    u32 buttons;  // 0x08
};

extern "C" {
extern const ButtonMapping DAT_0053d740[31];
extern InputMode DAT_005b4000;
extern ButtonState DAT_0063fff0;
extern ButtonState DAT_0063ffd0;

// Tests a mapped digital button in the normal or alternate input state.
bool FUN_002bedac(u32 button)
{
    if (button >= 31) {
        return false;
    }
    const ButtonMapping* mapping = &DAT_0053d740[button];
    if (mapping->type != 0) {
        return false;
    }
    u32 mask = mapping->mask;
    ButtonState* state;
    if ((DAT_005b4000.flags & 3) != 0) {
        state = &DAT_0063fff0;
    } else {
        state = &DAT_0063ffd0;
    }
    u32 buttons = state ? state->buttons : 0;
    return (buttons & mask) != 0;
}
}
