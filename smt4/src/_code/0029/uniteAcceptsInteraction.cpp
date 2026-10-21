#include "common.h"

namespace {
struct UniteState {
    /* 0x000 */ u8 unk000[0x430];
    /* 0x430 */ u8 active;
    /* 0x431 */ u8 unk431[3];
    /* 0x434 */ s32 state;
};
}

extern "C" {
extern UniteState *g_unite;

/* Tests the active fusion states that accept interaction. */
s32 uniteAcceptsInteraction(void)
{
    if (g_unite->active != 0) {
        s32 state = g_unite->state;
        if (state == 7 || state == 8 ||
            state == 9 || state == 10 ||
            state == 11 || state == 12 || state == 13) {
            return 1;
        }
    }
    return 0;
}
}
