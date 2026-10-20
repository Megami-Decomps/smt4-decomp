#include "common.h"

extern "C" {

void FUN_002e93da(void *object);

typedef struct Holder {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u8 value;
} Holder;

/* Resets the object (FUN_002e93da) and returns the byte at 8. */
u8 FUN_002eabdc(Holder *object)
{
    FUN_002e93da(object);
    return object->value;
}

} /* extern "C" */
