#include "common.h"

extern "C" {

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x4];
    /* 0x04 */ s32 offset;
} Holder;

/* Returns the address `offset` bytes (the value stored at 0x4) past the object. */
u8 *FUN_001a8f3c(Holder *object)
{
    return (u8 *)object + object->offset;
}

} /* extern "C" */
