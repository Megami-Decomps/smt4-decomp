#include "shard/Shard0048.h"

extern "C" {

void stateSetterSetFlag8(StateSetter *obj)
{
    obj->flags = obj->flags | 8;
}

} /* extern "C" */
