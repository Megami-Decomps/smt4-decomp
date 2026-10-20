#include "common.h"

extern "C" {

void FUN_00302fec(u32 dest, u32 value);

typedef struct Holder {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 value;
} Holder;

/* Passes `dest` and the word at 8 of `holder` to FUN_00302fec. */
void FUN_0030314e(u32 dest, Holder *holder)
{
    FUN_00302fec(dest, holder->value);
}

} /* extern "C" */
