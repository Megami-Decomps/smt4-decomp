#include "classes/MobiclipAudioDecoderIV.h"
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
struct DecoderRequest {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 kind;
    /* 0x08 */ u32 first;
    /* 0x0C */ u32 second;
};

extern "C" {

// Creates the audio decoder of the request's kind (2: none) and sets it up; returns 0 for an
// unknown kind.
u32 mobiclipAudioDecoderCreate(void *owner, BlockAllocator *allocator, DecoderRequest *request, MobiclipAudioDecoder **created)
{
    s32 kind = request->kind;
    switch (kind) {
    case 0:
        *created = new (allocator, 4) Obj420afc;
        break;
    case 1:
        *created = new (allocator, 4) Obj420aa4;
        break;
    case 2:
        *created = NULL;
        break;
    case 4:
        *created = new (allocator, 4) Obj420a80;
        break;
    default:
        return 0;
    }
    if (*created != NULL) {
        (*created)->initialize(request->first, request->second);
    }
    return 1;
}
}
