#include "common.h"

extern "C" {

typedef struct Holder {
    /* 0x0000 */ u8 unk0000[0x3894];
    /* 0x3894 */ u8 value;
} Holder;

/* Returns whether the byte at 0x3894 equals `value`. */
u8 FUN_002ccd58(Holder *object, u32 value)
{
    return object->value == value;
}

} /* extern "C" */
