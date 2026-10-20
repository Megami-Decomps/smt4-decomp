#include "shard/Shard0048.h"

extern "C" {

extern void FUN_004853fc(StateSetter *obj, s32 state);

void stateSetterStart9(StateSetter *obj)
{
    FUN_004853fc(obj, 9);
    obj->unk00[0] = 1;
}

} /* extern "C" */
