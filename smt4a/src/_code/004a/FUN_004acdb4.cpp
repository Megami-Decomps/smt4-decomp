/* NON_MATCHING: register-only: retail keeps the minus-one state in r1 (built r2); stores and stm grouping match. */
#include "classes/AllocatedSelection.h"

/* Allocates a kind-six operation from its owner's allocator. */
extern "C" Obj55c954 *FUN_004acdb4(SelectionObjectAllocator *allocator, u32 argument)
{
    void *storage = allocator->allocate(sizeof(Obj55c954));
    return storage != NULL ? new (storage) Obj55c954(allocator, argument) : NULL;
}
