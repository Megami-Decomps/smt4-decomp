#include "shard/Shard0042.h"

extern "C" {

s32 counterPairRemaining(CounterPair *obj)
{
    return obj->unk58 - obj->unk5C;
}

} /* extern "C" */
