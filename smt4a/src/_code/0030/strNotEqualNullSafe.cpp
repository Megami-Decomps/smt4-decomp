#include "common.h"

extern "C" {

u32 strEqualsNullSafe(u32 a, u32 b);

typedef struct Holder {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 value;
} Holder;

/* Returns the negation of strEqualsNullSafe on the words at 4 of both objects. */
u32 strNotEqualNullSafe(Holder *a, Holder *b)
{
    u32 result;

    result = strEqualsNullSafe(a->value, b->value);
    return result ^ 1;
}

} /* extern "C" */
