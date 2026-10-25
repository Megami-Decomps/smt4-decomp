#include "classes/Obj557f74.h"
#include <new>

/* An allocator: slot 0 hands out `size` bytes with the given alignment. */
class BlockAllocator {
public:
    virtual void *allocate(u32 size, u32 alignment) = 0;
};

inline void *operator new(u32 size, BlockAllocator *allocator, u32 alignment) throw()
{
    return allocator->allocate(size, alignment);
}

/* The part of the request this function reads. */
struct ObjectRequest {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 skip;
    /* 0x08 */ u32 mode;
    /* 0x0c */ u8 unk0c[8];
    /* 0x14 */ u32 first;
    /* 0x18 */ u32 second;
};

/* The part of the owner this function reads. */
struct ObjectOwner {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 compact;
};

extern "C" {

// Creates and sets up the object for a request unless the request is to be skipped; returns
// whether it was created.
u32 uiCreateRequestObject(ObjectOwner *owner, BlockAllocator *allocator, ObjectRequest *request, Obj557f74 **created)
{
    if (request->skip != 0) {
        return 0;
    }
    Obj557f74 *object = new (allocator, 4) Obj557f74();
    *created = object;
    if ((request->mode == 0 || request->mode == 1) && owner->compact == 0) {
        object->slot2(request->first, request->second, 12);
    } else {
        object->slot2(request->first, request->second, 6);
    }
    return 1;
}

}
