#include "common.h"

extern "C" {

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u8 flags;
} Holder;

/* Returns bit 0 of `flags`. */
u8 objGetFlagBit0(Holder *object)
{
    return object->flags & 1;
}

} /* extern "C" */
