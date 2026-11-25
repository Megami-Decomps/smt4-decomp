#include "shard/Shard0048.h"
#include "name/nameMain.h"

extern "C" {


void stateSetterStart9(StateSetter *obj)
{
    stateSetterEnterState(obj, 9);
    obj->unk00[0] = 1;
}

} /* extern "C" */
