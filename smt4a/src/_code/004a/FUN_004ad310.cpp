/* NON_MATCHING: same constant-register/store grouping difference as the sibling allocators (vptr and state stores are not paired into stm). */
#include "classes/AllocatedSelection.h"

/* Allocates a kind-thirteen node from its owner's allocator. */
extern "C" Obj55c9c0 *FUN_004ad310(SelectionObjectAllocator *allocator, u32 argument)
{
    void *storage = allocator->allocate(sizeof(Obj55c9c0));
    return storage != NULL ? new (storage) Obj55c9c0(allocator, argument) : NULL;
}
