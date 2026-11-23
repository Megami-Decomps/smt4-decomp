#include "classes/AllocatedSelection.h"
#include <new>

/* Allocates a kind-one selection node from its owner's allocator. */
extern "C" void *FUN_004acea0(OwnerAllocator *allocator, void *argument)
{
    void *storage = allocator->allocate(sizeof(Obj55c978));
    return storage != NULL ? new (storage) Obj55c978(allocator, argument) : NULL;
}
