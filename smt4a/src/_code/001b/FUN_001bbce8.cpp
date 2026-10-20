#include "common.h"

extern "C" {

typedef struct Holder {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ s32 offset;
} Holder;

/* Returns the address `offset` bytes (the value stored at 0xC) past the object. */
u8 *FUN_001bbce8(Holder *object)
{
    return (u8 *)object + object->offset;
}

} /* extern "C" */
