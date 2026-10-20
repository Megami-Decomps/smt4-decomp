#include "shard/Shard0048.h"

extern "C" {

extern void stateSetterEnterState(StateSetter *obj, s32 state);

void stateSetterStart9(StateSetter *obj)
{
    stateSetterEnterState(obj, 9);
    obj->unk00[0] = 1;
}

} /* extern "C" */
