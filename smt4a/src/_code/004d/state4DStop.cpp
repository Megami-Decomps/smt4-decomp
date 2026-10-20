#include "shard/Shard004D.h"

extern "C" {

extern void FUN_002c2358(void);
extern void objectOwner3Release(State4D *obj);

void state4DStop(State4D *obj)
{
    if (obj->unkC0 != 0) {
        obj->unkC0 = 0;
    }
    FUN_002c2358();
    objectOwner3Release(obj);
    obj->unkA0 = 0;
}

} /* extern "C" */
