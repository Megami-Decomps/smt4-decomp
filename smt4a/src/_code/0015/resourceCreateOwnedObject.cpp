#include "common.h"

class Obj55b520;

class ResourceAllocator {
public:
    virtual void release() = 0;
    virtual void reset() = 0;
    virtual void *allocate(u32 size, u32 alignment) = 0;
};

class Obj55b520 {
public:
    Obj55b520(ResourceAllocator *allocator) : owner(allocator), state(0) {}
    virtual void reset();
    /* 0x04 */ ResourceAllocator *owner;
    /* 0x08 */ u32 state;
};

inline void *operator new(u32, void *storage)
{
    return storage;
}

extern "C" {

/* Allocates and constructs a small resource object using its owner's allocator. */
Obj55b520 *resourceCreateOwnedObject(ResourceAllocator *allocator)
{
    void *storage = allocator->allocate(sizeof(Obj55b520), 4);
    return storage != NULL ? new (storage) Obj55b520(allocator) : NULL;
}

} /* extern "C" */
