#include "common.h"

extern "C" {

typedef struct Holder {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s16 value;
} Holder;

/* Returns 1 when the 16-bit value of `a` is greater than that of `b`. */
u32 seq16IsGreater(Holder *a, Holder *b)
{
    if (0 < (s16)(a->value - b->value)) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
