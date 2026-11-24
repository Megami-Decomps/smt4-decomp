#include "gfx/AsdSceneRoot.h"

extern "C" {

/* Makes the 8-byte scene object that keeps its allocator from `allocator`; returns it, or NULL if the allocation failed. */
AsdSceneObject *FUN_00172088(AsdSceneSmallDescription *description, AsdAllocatorObject *allocator)
{
    void *storage = allocator->allocate(sizeof(Obj421374), 4);
    return storage != NULL ? new (storage) Obj421374(allocator) : NULL;
}

} /* extern "C" */
