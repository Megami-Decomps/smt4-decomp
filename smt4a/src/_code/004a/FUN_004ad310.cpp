/* NON_MATCHING: the owner/argument pair uses the state base at object + 4 instead of addressing the pair from the complete object. */
#include "classes/AllocatedSelection.h"

/* Allocates a kind-thirteen node from its owner's allocator. */
extern "C" Obj55c9c0 *FUN_004ad310(SelectionObjectAllocator *allocator, u32 argument)
{
    void *storage = allocator->allocate(sizeof(Obj55c9c0));
    return storage != NULL ? new (storage) Obj55c9c0(allocator, argument) : NULL;
}
