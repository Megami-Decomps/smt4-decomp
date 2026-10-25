#include "classes/AllocatedSelection.h"

/* Allocates a kind-twelve object from its owner's allocator. */
extern "C" Obj55c978 *FUN_004acea0(SelectionObjectAllocator *allocator, u32 argument)
{
    void *storage = allocator->allocate(sizeof(Obj55c978));
    return storage != NULL ? new (storage) Obj55c978(allocator, argument) : NULL;
}
