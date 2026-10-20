/* NON_MATCHING: the vtable address is loaded after `mov r1, #0` instead of before it. */
#include "common.h"

extern "C" {

extern u8 DAT_0042126c;

typedef struct Allocator Allocator;

typedef struct AllocatorVtbl {
    void *slots[2];                                            /* 0x00 */
    void *(*alloc)(Allocator *self, u32 size, u32 align);      /* 0x08 */
} AllocatorVtbl;

struct Allocator {
    AllocatorVtbl *vtbl; /* 0x00 */
};

typedef struct AllocBound {
    void *vtbl;           /* 0x00 */
    Allocator *allocator; /* 0x04 */
    u32 unk08;            /* 0x08 */
} AllocBound;

/* Allocates an object of 12 bytes from `allocator` and, if that worked, initializes it. */
void FUN_0011ffc0(u32 unused, Allocator *allocator)
{
    AllocBound *obj = (AllocBound *)allocator->vtbl->alloc(allocator, 12, 4);

    if (obj != NULL) {
    obj->vtbl = &DAT_0042126c;
    obj->allocator = allocator;
    obj->unk08 = 0;
    }
}

} /* extern "C" */
