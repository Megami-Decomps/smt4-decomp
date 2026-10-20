#include "common.h"

extern "C" {

typedef struct Holder {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s16 value;
} Holder;

/* Returns the difference of the 16-bit values at 4. */
s32 seq16Diff(Holder *a, Holder *b)
{
    return (s16)(a->value - b->value);
}

} /* extern "C" */
