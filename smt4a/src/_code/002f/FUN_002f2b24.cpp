#include "common.h"

extern "C" {

void FUN_002e76a0(u32 dest, u32 value);

typedef struct Holder {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 value;
} Holder;

/* Passes the word at 8 of `holder` to FUN_002e76a0 together with `dest`. */
void FUN_002f2b24(u32 dest, Holder *holder)
{
    FUN_002e76a0(dest, holder->value);
}

} /* extern "C" */
