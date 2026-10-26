#include "shard/Shard0042.h"
#include "code/Code0042_Smt4a.h"

extern "C" {

extern s32 mwmofilterDeblockerCreate(CounterPair *obj);

/* Resets the counters when mwmofilterDeblockerCreate accepts the object. */
u8 counterPairReset(CounterPair *obj)
{
    s32 result = mwmofilterDeblockerCreate(obj);

    if (result != 0) {
        obj->unk58 = 0;
        obj->unk5C = 0;
        obj->unk06 = 0;
    }
    return result != 0;
}

} /* extern "C" */
