#include "common.h"

struct Inner00338850 {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ u32 value;
};

struct Object00338850 {
    /* 0x00 */ u8 unk00[0x40];
    /* 0x40 */ const Inner00338850 *inner;
};

extern "C" {

/* Returns the word at 0x34 of the object's inner record (0x40). */
u32 FUN_00338850(const Object00338850 *object)
{
    return object->inner->value;
}

} /* extern "C" */
