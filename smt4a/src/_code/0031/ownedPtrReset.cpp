#include "shard/Shard0031.h"

extern "C" {

/* Replaces the owned object, releasing the previous one through its vtable. */
OwnedPtr *ownedPtrReset(OwnedPtr *ptr, Object *object)
{
    if (ptr->object != NULL) {
        ptr->object->vtbl->release(ptr->object);
    }
    ptr->object = object;
    return ptr;
}

} /* extern "C" */
