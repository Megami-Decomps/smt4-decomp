#include "common.h"

extern "C" {

void FUN_0030f69c(u32 value, s32 a, s32 b);

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x44];
    /* 0x44 */ u32 value;
} Holder;

/* Calls FUN_0030f69c with the word at 0x44, 100 and 1. */
void FUN_00122db6(Holder *object)
{
    FUN_0030f69c(object->value, 100, 1);
}

} /* extern "C" */
