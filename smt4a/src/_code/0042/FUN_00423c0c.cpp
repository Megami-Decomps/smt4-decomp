/* NON_MATCHING: retail clears the position with one stm of three zero registers (mov r1, r0; mov r2, r0); armcc stores the one zero register three times. */
#include "common.h"

/* Three words cleared together (a position). */
struct ResourcePosition {
    ResourcePosition(u32 x, u32 y, u32 z) : x(x), y(y), z(z) {}
    u32 x, y, z;
};

struct ResourceState {
    /* 0x00 */ u8 unk00[12];
    /* 0x0C */ s32 handle;
    /* 0x10 */ u8 unk10[8];
    /* 0x18 */ ResourcePosition position;
    /* 0x24 */ u8 first;
    /* 0x25 */ u8 second;
};

extern "C" {
void FUN_00423144(s32 handle);

/* Releases a valid resource and clears its transform state. */
void FUN_00423c0c(ResourceState *state)
{
    if (state->handle != -1) {
        FUN_00423144(state->handle);
        state->first = 0;
        state->second = 0;
        state->position = ResourcePosition(0, 0, 0);
    }
}
}
