#include "common.h"

extern "C" {

typedef struct Pair {
    /* 0x00 */ s32 first;
    /* 0x04 */ s32 second;
} Pair;

/* Returns 1 when the two pairs differ. */
u32 pairIsDifferent(Pair *a, Pair *b)
{
    u32 equal;

    if ((a->first == b->first) && (a->second == b->second)) {
        equal = 1;
    } else {
        equal = 0;
    }
    return equal ^ 1;
}

} /* extern "C" */
