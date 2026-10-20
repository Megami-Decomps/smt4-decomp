#include "shard/Shard0037.h"

extern "C" {

extern void scrSetResult(s32 value);

/* Script command: result (and return value) is 1 when the object is in state 0xD. */
u32 scrCommIsState0xD(Holder33B4Ref *ref)
{
    if (ref->obj->state != 0xD) {
        scrSetResult(0);
        return 0;
    }
    scrSetResult(1);
    return 1;
}

} /* extern "C" */
