#include "shard/Shard0048.h"

extern "C" {

void stateSetterSetState1(StateSetter *obj)
{
    obj->state = 0x1;
    obj->unk08 = 0;
}

} /* extern "C" */
