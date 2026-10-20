#include "shard/Shard0042.h"

extern "C" {

extern s32 FUN_005135d0(CounterPair *obj);

/* Resets the counters when FUN_005135d0 accepts the object. */
u8 counterPairReset(CounterPair *obj)
{
    s32 result = FUN_005135d0(obj);

    if (result != 0) {
        obj->unk58 = 0;
        obj->unk5C = 0;
        obj->unk06 = 0;
    }
    return result != 0;
}

} /* extern "C" */
