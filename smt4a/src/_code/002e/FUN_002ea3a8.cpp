#include "common.h"

extern "C" {

extern u8 DAT_00558a58; /* vtable */

extern void FUN_002ee80e(u32 *object);

/* Constructor: sets the vtable and runs the base constructor. */
u32 *FUN_002ea3a8(u32 *object)
{
    *object = (u32)&DAT_00558a58;
    FUN_002ee80e(object);
    return object;
}

} /* extern "C" */
