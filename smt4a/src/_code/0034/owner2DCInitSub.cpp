#include "shard/Shard0034.h"

extern "C" {

extern void FUN_00184758(u8 *block, s32 a, s32 b);

void owner2DCInitSub(Owner2DC *owner)
{
    FUN_00184758(owner->sub, 3, 1);
}

} /* extern "C" */
