#include "common.h"

extern "C" {

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ u8 *pointer;
} Holder;

/* Stores the address 8 bytes past `base` at 0x38. */
void FUN_001757c4(Holder *object, u8 *base)
{
    object->pointer = base + 8;
}

} /* extern "C" */
