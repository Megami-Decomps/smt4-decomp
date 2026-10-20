#include "shard/Shard0048.h"

extern "C" {

void stateSetterSetState5(StateSetter *obj)
{
    obj->state = 0x5;
    obj->unk08 = 0;
}

} /* extern "C" */
