#include "common.h"

extern "C" {

void FUN_002e93da(void *object);

typedef struct Holder {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 value;
} Holder;

/* Resets the object (FUN_002e93da) and returns the word at 4. */
u32 FUN_002ea93c(Holder *object)
{
    FUN_002e93da(object);
    return object->value;
}

} /* extern "C" */
