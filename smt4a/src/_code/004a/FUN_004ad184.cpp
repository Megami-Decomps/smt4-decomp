/* NON_MATCHING: the initial minus-one state is held in r2 instead of retail's r1. */
#include "classes/AllocatedSelection.h"

/* Allocates a kind-two node from its owner's allocator. */
extern "C" Obj55c99c *FUN_004ad184(SelectionObjectAllocator *allocator, u32 argument)
{
    void *storage = allocator->allocate(sizeof(Obj55c99c));
    return storage != NULL ? new (storage) Obj55c99c(allocator, argument) : NULL;
}
