#include "common.h"

class Obj4210d0;

class ResourceAllocator {
public:
    virtual void release() = 0;
    virtual void reset() = 0;
    virtual void *allocate(u32 size, u32 alignment) = 0;
};

class Obj4210d0 {
public:
    Obj4210d0(ResourceAllocator *allocator) : owner(allocator), state(0) {}
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
Obj4210d0 *resourceCreateOwnedObject(ResourceAllocator *allocator)
{
    void *storage = allocator->allocate(sizeof(Obj4210d0), 4);
    return storage != NULL ? new (storage) Obj4210d0(allocator) : NULL;
}

} /* extern "C" */
