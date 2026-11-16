#include "common.h"

extern "C" {

typedef struct Global5b408c {
    /* 0x00 */ u8 unk00;
    /* 0x01 */ s8 homeButtonHeld;
} Global5b408c;
extern Global5b408c g_appletEventState;

/* Sets the home-button-held flag to `held` and returns its previous value. */
s32 appletSetHomeButtonHeld(s8 held)
{
    s32 previous = g_appletEventState.homeButtonHeld;

    g_appletEventState.homeButtonHeld = held;
    return previous;
}

} /* extern "C" */
