#include "common.h"

struct Inner002d1894 {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ u32 value;
};

struct Object002d1894 {
    /* 0x00 */ u8 unk00[0x40];
    /* 0x40 */ const Inner002d1894 *inner;
};

extern "C" {

/* Returns the word at 0x34 of the object's inner record (0x40). */
u32 FUN_002d1894(const Object002d1894 *object)
{
    return object->inner->value;
}

} /* extern "C" */
