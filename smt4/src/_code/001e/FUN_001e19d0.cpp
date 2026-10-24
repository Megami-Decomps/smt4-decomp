#include "common.h"

struct Inner001e19d0 {
    /* 0x00 */ u8 unk00[0xb8];
    /* 0xb8 */ u32 value;
};

struct Object001e19d0 {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ const Inner001e19d0 *inner;
};

extern "C" {

/* Returns the word at 0xb8 of the object's inner record (0x24). */
u32 FUN_001e19d0(const Object001e19d0 *object)
{
    return object->inner->value;
}

} /* extern "C" */
