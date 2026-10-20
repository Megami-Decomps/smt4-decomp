#include "common.h"

extern "C" {

typedef struct Holder {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s32 base;
    /* 0x0C */ u8 inlineData[1];
} Holder;

/* Returns the address `offset` bytes past the base pointer at 8, or the inline data at 0xC when `offset` is 0. */
s32 FUN_002eac18(Holder *object, s32 offset)
{
    if (offset != 0) {
        return object->base + offset;
    }
    return (s32)object + 0xC;
}

} /* extern "C" */
