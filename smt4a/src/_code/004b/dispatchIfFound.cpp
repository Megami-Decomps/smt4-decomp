#include "shard/Shard004B.h"

extern "C" {

extern void *FUN_001ab854(void *obj);
extern void FUN_002305d0(void *found, void *obj, u32 a, u32 b);

void dispatchIfFound(void *obj, u32 a, u32 b)
{
    void *found = FUN_001ab854(obj);

    if (found != NULL) {
        FUN_002305d0(found, obj, a, b);
    }
}

} /* extern "C" */
