#include "common.h"

extern "C" {

void FUN_002e93da(void *object);
void FUN_002e93ec(u32 value, u32 arg);

typedef struct Optional {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 value;
    /* 0x08 */ u8 unk08[0x5D];
    /* 0x65 */ u8 valid;
} Optional;

/* Resets the optional, clears `valid` and passes its value and `arg` to FUN_002e93ec. */
void FUN_002e9334(Optional *object, u32 arg)
{
    FUN_002e93da(object);
    object->valid = 0;
    FUN_002e93ec(object->value, arg);
}

} /* extern "C" */
