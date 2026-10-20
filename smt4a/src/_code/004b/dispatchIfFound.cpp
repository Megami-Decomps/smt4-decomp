#include "shard/Shard004B.h"

extern "C" {

extern void *gameGetSlotRecord(void *obj);
extern void FUN_002305d0(void *found, void *obj, u32 a, u32 b);

void dispatchIfFound(void *obj, u32 a, u32 b)
{
    void *found = gameGetSlotRecord(obj);

    if (found != NULL) {
        FUN_002305d0(found, obj, a, b);
    }
}

} /* extern "C" */
