#include "shard/Shard0046.h"

extern "C" {

extern void FUN_0045b96c(u32 value);

void callerARelease78(CallerA *obj)
{
    if (obj->unk78 != 0) {
        FUN_0045b96c(obj->unk24);
    }
}

} /* extern "C" */
