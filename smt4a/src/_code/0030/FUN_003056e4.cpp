#include "common.h"

extern "C" {

void FUN_002e95c4(void *dest, u32 value);

typedef struct Holder {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 value;
} Holder;

/* Calls FUN_002e95c4(dest, the word at 4 of `source`) and returns `dest`. */
void *FUN_003056e4(void *dest, Holder *source)
{
    FUN_002e95c4(dest, source->value);
    return dest;
}

} /* extern "C" */
