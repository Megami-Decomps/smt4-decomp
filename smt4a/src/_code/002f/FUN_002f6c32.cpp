#include "common.h"

extern "C" {

void destroyObj0055ae64(u8 *object);
u32 FUN_002ec934(u8 *object);
u32 FUN_002f7ac4(u32 a, u32 b);

/* Builds a temporary 24-byte object, passes its value and `a` to FUN_002f7ac4 and destroys it; returns FUN_002f7ac4's result. */
u32 FUN_002f6c32(u32 a)
{
    u32 value;
    u8 object[24];

    value = FUN_002ec934(object);
    value = FUN_002f7ac4(a, value);
    destroyObj0055ae64(object);
    return value;
}

} /* extern "C" */
