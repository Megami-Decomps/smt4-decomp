#include "classes/Obj558c00.h"

extern "C" void FUN_0010a014(Obj558c00 *object, s32 address, u32 size);

/* Passes FUN_0010a014 the range's start address (base + offset) and size; always returns 0. */
s32 Obj558c00::vfunc0c(Obj558c00Range *range)
{
    FUN_0010a014(this, range->base + range->offset, range->size);
    return 0;
}
