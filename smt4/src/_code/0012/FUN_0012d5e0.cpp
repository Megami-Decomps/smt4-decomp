/* NON_MATCHING: retail branches around the two stores (beq/ldr/stm); built predicates them (ldrne/stmne). */
#include "common.h"

extern "C" {

typedef struct Allocator Allocator;

/* Allocator vtable: slot 2 (0x8) allocates `size` bytes with `alignment`. */
typedef struct {
    void *slots[2];
    void *(*alloc)(Allocator *self, u32 size, u32 alignment);   /* 0x08 */
} AllocatorVtbl;

struct Allocator {
    const AllocatorVtbl *vtbl;
};

/* 8-byte object: vtable pointer and the allocator it came from. */
typedef struct {
    const void *vtbl;   /* 0x00 */
    Allocator *owner;   /* 0x04 */
} Handle;

extern u8 DAT_00421644;

/* Allocates and initialises a Handle owned by `allocator`; NULL when the allocation fails. */
Handle *FUN_0012d5e0(Allocator *allocator)
{
    Handle *handle = (Handle *)allocator->vtbl->alloc(allocator, 8, 4);

    if (handle != NULL) {
        handle->vtbl = &DAT_00421644;
        handle->owner = allocator;
    }
    return handle;
}

} /* extern "C" */
