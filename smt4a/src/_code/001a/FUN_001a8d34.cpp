#include "common.h"

extern "C" {

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x2C];
    /* 0x2C */ s32 offset;
} Holder;

/* Returns the address `offset` bytes (the value stored at 0x2C) past the object. */
u8 *FUN_001a8d34(Holder *object)
{
    return (u8 *)object + object->offset;
}

} /* extern "C" */
