#include "common.h"

extern "C" {

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ s32 offset;
} Holder;

/* Returns the address `offset` bytes (the value stored at 0x10) past the object. */
u8 *FUN_001d13dc(Holder *object)
{
    return (u8 *)object + object->offset;
}

} /* extern "C" */
