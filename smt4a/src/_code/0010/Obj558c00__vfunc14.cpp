#include "classes/Obj558c00.h"

extern "C" void FUN_00109ff8(Obj558c00 *object, s32 address, u32 size);

/* Passes FUN_00109ff8 the range's start address (base + offset) and size; always returns 0. */
s32 Obj558c00::vfunc14(Obj558c00Range *range)
{
    FUN_00109ff8(this, range->base + range->offset, range->size);
    return 0;
}
