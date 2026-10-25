#include "common.h"

struct TargetFlags { u8 unk00[0x50]; u32 flags; };
/* Enables the category flag corresponding to the requested range. */
extern "C" void FUN_003390dc(u32 unused, TargetFlags *target, s32 category)
{
    if (category < 4)
        target->flags |= 0x200;
    else if (category < 54)
        target->flags |= 0x400;
    else if (category < 55)
        target->flags |= 0x800;
}
