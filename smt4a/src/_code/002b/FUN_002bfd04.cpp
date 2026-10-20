/* NON_MATCHING: branch layout only: built adds a redundant `bne` to the final return after the conditional `moveq r0, #1`; retail falls through */
#include "common.h"

extern "C" {

typedef struct CampCec {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ struct CampState *state;
} CampCec;

typedef struct CampState {
    /* 0x000 */ u8 unk000[0x140];
    /* 0x140 */ s32 mode;
} CampState;

extern CampCec g_campCec;

/* True while the camp's state exists and is in mode 1. */
u32 FUN_002bfd04(void)
{
    u32 result = 0;

    if (g_campCec.state != NULL && g_campCec.state->mode == 1) {
        result = 1;
    }
    return result;
}

} /* extern "C" */
