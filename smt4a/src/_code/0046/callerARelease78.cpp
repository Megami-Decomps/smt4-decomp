#include "shard/Shard0046.h"

extern "C" {

extern void linkListInsertByKind(u32 value);

void callerARelease78(CallerA *obj)
{
    if (obj->unk78 != 0) {
        linkListInsertByKind(obj->unk24);
    }
}

} /* extern "C" */
