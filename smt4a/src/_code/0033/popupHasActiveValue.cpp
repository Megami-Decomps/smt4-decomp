/* NON_MATCHING: retail uses `ldr r1, [r1]` where armcc emits `ldr r2, [r0]`. */
#include "common.h"

extern "C" {

struct State { u8 unk00[0xb0]; u32 values[16]; };
extern State *g_popupState;

s32 popupHasActiveValue(void)
{
    State *state = g_popupState;
    for (s32 i = 0; i < 16; i += 2) {
        if (state->values[i] != 0 || state->values[i + 1] != 0) {
            return 1;
        }
    }
    return 0;
}

} /* extern "C" */
