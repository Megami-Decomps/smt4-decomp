#include "common.h"

extern "C" {

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ s32 offset;
} Holder;

/* Returns the address `offset` bytes (the value stored at 0x34) past the object. */
u8 *FUN_001a8d1c(Holder *object)
{
    return (u8 *)object + object->offset;
}

} /* extern "C" */
