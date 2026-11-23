/* NON_MATCHING: register-only: retail keeps the minus-one state in r1 (built r2); stores and stm grouping match. */
#include "classes/AllocatedSelection.h"
#include <new>

/* Allocates a kind-two selection node from its owner's allocator. */
extern "C" void *FUN_004acdb4(OwnerAllocator *allocator, void *argument)
{
    void *storage = allocator->allocate(sizeof(Obj55c954));
    return storage != NULL ? new (storage) Obj55c954(allocator, argument) : NULL;
}
