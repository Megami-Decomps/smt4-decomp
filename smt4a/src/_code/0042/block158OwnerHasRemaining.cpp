#include "shard/Shard0042.h"

extern "C" {

extern s32 counterPairRemaining(u8 *block);

u8 block158OwnerHasRemaining(Block158Owner *obj)
{
    return counterPairRemaining(obj->block158) != 0;
}

} /* extern "C" */
