#include "common.h"

extern "C" void FUN_002e7908(void *object, const u32 *mode);

/* Invoke the shared operation with the packed pair of enabled flags. */
extern "C" void _ZN9Obj558c287vfunc08Ev(void *object)
{
    const u32 mode = 0x10001;
    FUN_002e7908(object, &mode);
}
