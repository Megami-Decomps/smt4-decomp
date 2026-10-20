#include "common.h"

extern "C" {

void FUN_0030ffe0(u32 dest, u32 source);

typedef struct Holder {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 value;
} Holder;

/* Passes the words at 4 of both objects to FUN_0030ffe0. */
void FUN_002ee96a(Holder *a, Holder *b)
{
    FUN_0030ffe0(a->value, b->value);
}

} /* extern "C" */
