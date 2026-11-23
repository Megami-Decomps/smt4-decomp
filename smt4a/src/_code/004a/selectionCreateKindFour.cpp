#include "classes/AllocatedSelection.h"
#include <new>

/* Allocates a kind-four selection node and attaches its storage. */
extern "C" void *selectionCreateKindFour(OwnerAllocator *allocator, void *storage)
{
    void *memory = allocator->allocate(sizeof(Obj55c99c));
    return memory != NULL ? new (memory) Obj55c99c(allocator, storage) : NULL;
}
