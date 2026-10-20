#include "common.h"

extern "C" {

typedef struct Pair {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ u32 value;
    /* 0x10 */ u8 unk10[0x0C];
    /* 0x1C */ u8 flag;
} Pair;

/* Swaps the flag byte at 0x1C and the word at 0x0C between the two objects. */
void FUN_00121240(Pair *a, Pair *b)
{
    u8 flag = a->flag;
    u32 value;

    a->flag = b->flag;
    b->flag = flag;
    value = a->value;
    a->value = b->value;
    b->value = value;
}

} /* extern "C" */
