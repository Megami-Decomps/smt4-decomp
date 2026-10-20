#include "common.h"

extern "C" {

typedef struct Owner002ca6a8 {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ s32 state;
} Owner002ca6a8;

typedef struct Holder002ca6a8 {
    /* 0x00 */ Owner002ca6a8 *owner;
} Holder002ca6a8;

void FUN_0020dd98(void);

extern Holder002ca6a8 g_mapDepart;

/* Runs FUN_0020dd98 while the owner is in state 5 or 6. Always returns 0. */
u32 scrCommWaitStateAction(void)
{
    s32 state = g_mapDepart.owner->state;

    if (state >= 2) {
        if (state < 11) {
            if (state == 5 || state == 6) {
                FUN_0020dd98();
            }
        }
    }
    return 0;
}

} /* extern "C" */
