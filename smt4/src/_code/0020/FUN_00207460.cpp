#include "common.h"

struct Object00207460 {
    /* 0x00 */ u8 unk00[0xbc];
    /* 0xbc */ u32 value;
};

extern "C" {

/* Returns the word at 0xbc. */
u32 FUN_00207460(const Object00207460 *object)
{
    return object->value;
}

} /* extern "C" */
