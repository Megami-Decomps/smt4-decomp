#include "shard/Shard0034.h"

extern "C" {

extern void uiSpriteSetKeyframe(u8 *block, s32 a, s32 b);

void owner2DCInitSub(Owner2DC *owner)
{
    uiSpriteSetKeyframe(owner->sub, 3, 1);
}

} /* extern "C" */
