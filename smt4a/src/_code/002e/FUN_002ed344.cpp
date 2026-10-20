#include "common.h"

extern "C" {

typedef struct Holder {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 value;
} Holder;

/* Returns 1 unless the second object's value is below the first's (equal values give 1). */
u32 FUN_002ed344(Holder *a, Holder *b)
{
    if ((b->value != a->value) && (b->value - a->value <= 0)) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
