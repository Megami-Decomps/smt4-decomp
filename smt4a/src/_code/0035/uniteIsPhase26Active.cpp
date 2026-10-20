#include "common.h"

extern "C" {

typedef struct Unite {
    /* 0x000 */ u8 unk000[0x400];
    /* 0x400 */ s32 state;
    /* 0x404 */ u8 unk404[0x2C];
    /* 0x430 */ u8 active;
    /* 0x431 */ u8 unk431[3];
    /* 0x434 */ s32 phase;
} Unite;

extern Unite *g_unite;
extern s32 gameFlagIsSet(u32 flag);

/* True while the unite exists, isn't in state 0x28, game flag 0x458 is clear and it is active in phase 0x1A. */
u32 uniteIsPhase26Active(void)
{
    if (g_unite == NULL) {
        return 0;
    }
    if (g_unite->state == 0x28 || gameFlagIsSet(0x458) != 0 || g_unite == NULL || g_unite->phase != 0x1a ||
        g_unite->active == 0) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
