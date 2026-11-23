/* NON_MATCHING: initial type (-1) uses r1 instead of retail's r2. */
#include "classes/AllocatedSelection.h"
#include <new>

/* Allocates a kind-three selection node from its owner's allocator. */
extern "C" void *FUN_004ad310(OwnerAllocator *allocator, void *argument)
{
    void *storage = allocator->allocate(sizeof(Obj55c9c0));
    return storage != NULL ? new (storage) Obj55c9c0(allocator, argument) : NULL;
}
