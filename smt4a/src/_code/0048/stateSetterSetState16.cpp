#include "shard/Shard0048.h"

extern "C" {

void stateSetterSetState16(StateSetter *obj)
{
    obj->state = 0x10;
    obj->unk08 = 0;
}

} /* extern "C" */
