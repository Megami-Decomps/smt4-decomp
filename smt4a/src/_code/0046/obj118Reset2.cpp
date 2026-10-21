#include "shard/Shard0046.h"

extern "C" {

extern void objectResetDefaultsAsync(Obj118 *obj);

void obj118Reset2(Obj118 *obj)
{
    objectResetDefaultsAsync(obj);
    obj->unk118 = 0;
    obj->unk120 = 1;
    obj->unk121 = 0;
}

} /* extern "C" */
