#include "common.h"

extern "C" {

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x3C];
    /* 0x3C */ u8 *pointer;
} Holder;

/* Stores the address 8 bytes past `base` at 0x3C. */
void FUN_001757b8(Holder *object, u8 *base)
{
    object->pointer = base + 8;
}

} /* extern "C" */
