#include "gfx/AsdSceneRoot.h"

extern "C" {

/* Makes the 16-byte scene object that takes over `*list` from `allocator`; returns it, or NULL if the allocation failed. */
AsdSceneObject *FUN_0015d444(AsdSceneObject **list, AsdAllocatorObject *allocator)
{
    void *storage = allocator->allocate(sizeof(Obj4213d4), 4);
    return storage != NULL ? new (storage) Obj4213d4(allocator, *list) : NULL;
}

} /* extern "C" */
