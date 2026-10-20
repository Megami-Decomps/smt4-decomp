#include "common.h"

extern "C" {

void FUN_002e93da(void *object);
void FUN_002e9538(u32 dest, u32 source);

typedef struct Optional {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 value;
    /* 0x08 */ u8 unk08[0x5D];
    /* 0x65 */ u8 valid;
} Optional;

/* Resets the optional, fills its value from `source` and clears `valid`; returns 1. */
u32 FUN_002ea9c0(Optional *object, u32 source)
{
    FUN_002e93da(object);
    FUN_002e9538(object->value, source);
    object->valid = 0;
    return 1;
}

} /* extern "C" */
