/* NON_MATCHING: retail keeps &holder->ref (this + 8) live in r5 and derives the return value as r5 - 8; built keeps the holder pointer. */
#include "common.h"

extern "C" {

typedef struct Allocator Allocator;
typedef struct Resource Resource;

/* Virtual tables: Resource slot 0 destroys the object, Allocator slot 3 (0xc) frees it. */
typedef struct {
    void (*destroy)(Resource *self);
} ResourceVtbl;

typedef struct {
    void *slots[3];
    void (*free)(Allocator *self, Resource *resource); /* 0x0c */
} AllocatorVtbl;

struct Allocator {
    const AllocatorVtbl *vtbl;
};

struct Resource {
    const ResourceVtbl *vtbl;   /* 0x00 */
    Allocator *allocator;       /* 0x04 */
};

/* Owning reference to a resource: destroys and frees it when `owned` is set. */
typedef struct {
    Resource *resource;     /* 0x00 */
    u8 owned;               /* 0x04 */
} ResourceRef;

typedef struct {
    const void *vtbl;       /* 0x00 */
    u32 unk04;
    ResourceRef ref;        /* 0x08 */
} Holder;

static __inline void resourceRefRelease(ResourceRef *ref)
{
    Resource *resource = ref->resource;

    if (resource != NULL && ref->owned != 0) {
        resource->vtbl->destroy(resource);
        resource->allocator->vtbl->free(resource->allocator, resource);
    }
}

/* Sets the vtable, releases the owned resource and returns the holder. */
Holder *FUN_003683d4(Holder *holder, const void *vtbl)
{
    holder->vtbl = vtbl;
    resourceRefRelease(&holder->ref);
    return holder;
}

} /* extern "C" */
