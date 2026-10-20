#include "common.h"

extern "C" {

typedef struct Global5b408c {
    /* 0x00 */ u8 unk00;
    /* 0x01 */ s8 homeButtonHeld;
} Global5b408c;
extern Global5b408c DAT_005b408c;

/* Sets the home-button-held flag to `held` and returns its previous value. */
s32 FUN_001406f0(s8 held)
{
    s32 previous = DAT_005b408c.homeButtonHeld;

    DAT_005b408c.homeButtonHeld = held;
    return previous;
}

} /* extern "C" */
