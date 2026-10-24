#include "common.h"

struct Inner00290c1c {
    /* 0x00 */ u8 unk00[0xb8];
    /* 0xb8 */ u32 value;
};

struct Object00290c1c {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ const Inner00290c1c *inner;
};

extern "C" {

/* Returns the word at 0xb8 of the object's inner record (0x24). */
u32 FUN_00290c1c(const Object00290c1c *object)
{
    return object->inner->value;
}

} /* extern "C" */
