#include "common.h"

extern "C" {

struct State { u8 unk00[0xb0]; u32 values[16]; };
extern State *g_popupState;

s32 popupHasActiveValue(void)
{
    s32 i = 0;
    while (i < 16) {
        State *state = g_popupState;
        if (state->values[i] != 0 || state->values[i + 1] != 0) {
            return 1;
        }
        i += 2;
    }
    return 0;
}

} /* extern "C" */
