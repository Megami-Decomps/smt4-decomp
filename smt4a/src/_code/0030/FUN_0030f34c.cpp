#include "common.h"

extern "C" {

extern u8 DAT_0055b05c; /* vtable */

extern void FUN_0012cf3c(u32 *object);

/* Constructor: sets the vtable and runs the base constructor. */
u32 *FUN_0030f34c(u32 *object)
{
    *object = (u32)&DAT_0055b05c;
    FUN_0012cf3c(object);
    return object;
}

} /* extern "C" */
