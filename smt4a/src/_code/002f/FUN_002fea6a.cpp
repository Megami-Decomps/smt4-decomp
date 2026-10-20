#include "common.h"

extern "C" {

typedef struct Holder {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 base;
    /* 0x08 */ u8 unk08[0x0C];
    /* 0x14 */ s32 count;
} Holder;

/* Returns the address just past `count` 4-byte elements starting at `base`. */
s32 FUN_002fea6a(Holder *object)
{
    return object->base + object->count * 4;
}

} /* extern "C" */
