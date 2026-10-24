/* NON_MATCHING: armcc loads the 64-bit halves with ldm; retail loads each word separately. */
#include "common.h"

struct S64Pair {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ s64 first;
    /* 0x18 */ s64 second;
};

extern "C" {

/* Virtual slot: answers whether the two 64-bit values are equal. */
u32 FUN_002e5a98(const S64Pair *self)
{
    return self->first == self->second;
}

} /* extern "C" */
