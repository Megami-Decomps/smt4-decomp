/* NON_MATCHING: the two parameters are kept in r4/r5 the other way round (retail: r5 = first, r4 = second). */
#include "common.h"

extern "C" {

extern u8 DAT_00559134; /* vtable */

extern u32 FUN_002eb56c(void);
extern u32 *FUN_0010d51c(void *first, void *second, u32 third);

/* Constructor: runs the base constructor and sets the vtable. */
u32 *FUN_002ed074(void *first, void *second)
{
    u32 *object = FUN_0010d51c(first, second, FUN_002eb56c());

    *object = (u32)&DAT_00559134;
    return object;
}

} /* extern "C" */
