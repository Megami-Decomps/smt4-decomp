#include "common.h"

extern "C" {

void FUN_003105b0(u8 *dest, const u8 *source);

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ u8 member0C[1];
} Holder;

/* Assignment of the member at 0xC; returns `dest`. */
Holder *FUN_002ec728(Holder *dest, const Holder *source)
{
    u8 *a = dest->member0C;
    const u8 *b = source->member0C;

    FUN_003105b0(a, (u8 *)b);
    return dest;
}

} /* extern "C" */
