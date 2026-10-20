#include "common.h"

extern "C" {

extern u8 DAT_0055ab0c; /* vtable */

extern u8 *FUN_002eda5a(void *part);

/* Constructor of a multiply-derived object: builds the base parts and returns the adjusted pointer. */
u8 *FUN_0011e660(u32 *object)
{
    *object = (u32)&DAT_0055ab0c;
    return FUN_002eda5a(FUN_002eda5a(object + 14) - 12) - 44;
}

} /* extern "C" */
