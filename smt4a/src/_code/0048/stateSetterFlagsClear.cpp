#include "shard/Shard0048.h"

extern "C" {

u8 stateSetterFlagsClear(StateSetter *obj)
{
    return obj->flags == 0;
}

} /* extern "C" */
