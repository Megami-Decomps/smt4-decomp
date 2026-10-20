#include "common.h"

extern "C" {

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x60];
    /* 0x60 */ u8 flagA;
    /* 0x61 */ u8 flagB;
} Holder;

/* Clears the bytes at 0x61 and 0x60. */
void FUN_002c2c88(Holder *object)
{
    object->flagB = 0;
    object->flagA = 0;
}

} /* extern "C" */
