#include "shard/Shard0031.h"

extern "C" {

/* True when the object has reached state 2. */
u32 stateObjIsFinished(StateObject *obj)
{
    if (obj->state != 2) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
