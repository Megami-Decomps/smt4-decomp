#include "shard/Shard0048.h"

extern "C" {

void stateSetterSetFromBase(StateSetter *obj, s32 base, u32 value)
{
    obj->state = base + 100;
    obj->unk08 = value;
}

} /* extern "C" */
