#include "gfx/AsdSceneRoot.h"

extern "C" {

/* Makes the 8-byte scene object that keeps its allocator from `allocator`; returns it, or NULL if the allocation failed. */
AsdSceneObject *asdSceneCreateQueueComponent(AsdSceneSmallDescription *description, AsdAllocatorObject *allocator)
{
    void *storage = allocator->allocate(sizeof(Obj4214ec), 4);
    return storage != NULL ? new (storage) Obj4214ec(allocator) : NULL;
}

} /* extern "C" */
