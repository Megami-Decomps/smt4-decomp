#include "gfx/AsdSceneRoot.h"

extern "C" {

/* Makes the 12-byte scene object that keeps its allocator from `allocator`; returns it, or NULL if the allocation failed. */
AsdSceneObject *FUN_0011ffc0(AsdSceneLargeDescription *description, AsdAllocatorObject *allocator)
{
    void *storage = allocator->allocate(sizeof(Obj421264), 4);
    return storage != NULL ? new (storage) Obj421264(allocator) : NULL;
}

} /* extern "C" */
