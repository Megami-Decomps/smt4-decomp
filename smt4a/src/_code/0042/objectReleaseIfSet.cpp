#include "shard/Shard0042.h"

extern "C" {

void objectReleaseIfSet(Object *object)
{
    if (object != NULL) {
        object->vtbl->release(object);
    }
}

} /* extern "C" */
