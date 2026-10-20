#include "common.h"

extern "C" {

void strEqualsNullSafe(u32 dest, u32 source);

typedef struct Holder {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 value;
} Holder;

/* Passes the words at 4 of both objects to strEqualsNullSafe. */
void FUN_002ee96a(Holder *a, Holder *b)
{
    strEqualsNullSafe(a->value, b->value);
}

} /* extern "C" */
