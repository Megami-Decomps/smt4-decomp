/* NON_MATCHING: retail moves the state pointer before adding the group offset; compiled code combines that address setup into one ADD. */
#include "common.h"

struct PendingFlagGroup {
    u8 unk00[0x25]; // 0x00
    u8 flags[5];    // 0x25
};
struct PendingFlags {
    u8 unk0000[0x5900];   // 0x0000
    PendingFlagGroup pending; // 0x5900
};

// Reports whether both groups of pending flags are clear.
extern "C" u32 FUN_00217954(const PendingFlags* state)
{
    const PendingFlagGroup* pending = &state->pending;
    u32 clear = 1;
    if (pending->flags[0] != 0 || pending->flags[1] != 0) {
        clear = 0;
    } else if (pending->flags[2] != 0 || pending->flags[3] != 0 || pending->flags[4] != 0) {
        clear = 0;
    }
    return clear;
}
