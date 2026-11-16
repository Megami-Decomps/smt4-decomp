#include "common.h"

extern "C" {

/* The bust-up cut animation work; only its state word is read here. */
struct StateCheckWork {
    /* 0x000 */ u8 unk00[0x5EC];
    /* 0x5EC */ s32 state;
};

extern StateCheckWork *g_bustupCutAnim;
void FUN_002fc29c(void);

/* Returns whether the cut animation is in state 1; reports the missing work when it isn't allocated. */
s32 recordQueryOptionalState(void)
{
    if (g_bustupCutAnim == NULL) {
        FUN_002fc29c();
    } else {
        return g_bustupCutAnim->state == 1;
    }
    return 0;
}

} /* extern "C" */
