#include "shard/Shard0046.h"

extern "C" {

extern void linkListInsertByKind(u32 value);

void callerARelease3C(CallerA *obj)
{
    if (obj->unk3C != 0) {
        linkListInsertByKind(obj->unk24);
    }
}

} /* extern "C" */
