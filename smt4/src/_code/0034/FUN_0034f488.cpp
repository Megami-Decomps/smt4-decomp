#include "common.h"

/* The heap interface the buffer owner allocates through (nw::os::IAllocator layout). */
class FrameBufferAllocator {
public:
    virtual void *alloc(u32 size, u32 alignment) = 0;
    virtual void free(void *block) = 0;
};

struct FrameBufferSize {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s32 width;
    /* 0x0C */ s32 height;
};

/* Playback position within the frame buffer. */
struct FrameBufferCursor {
    /* 0x00 */ u64 submitted;
    /* 0x08 */ u32 position;
};

struct FrameBufferOwner {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ FrameBufferAllocator *allocator;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ s32 handle;     /* -1 when creation failed */
    /* 0x10 */ void *buffer;
    /* 0x14 */ u32 bufferSize;
    /* 0x18 */ FrameBufferCursor cursor;
};

extern "C" {

s32 FUN_0034f6cc(void);
s32 FUN_0034e310(s32 width, s32 height, u32 format);

/* Allocate count 16-bit frames of the given size and create their handle; 1 on success. */
s32 FUN_0034f488(FrameBufferOwner *owner, u32 unused, const FrameBufferSize *size, s32 count, u32 format)
{
    if (!FUN_0034f6cc()) {
        return 0;
    }
    owner->bufferSize = size->width * size->height * count * 2;
    owner->buffer = owner->allocator->alloc(owner->bufferSize, 32);
    if (owner->buffer == NULL) {
        return 0;
    }
    owner->handle = FUN_0034e310(size->width, size->height, format);
    if (owner->handle == -1) {
        owner->allocator->free(owner->buffer);
        owner->buffer = NULL;
        return 0;
    }
    owner->cursor.submitted = 0;
    owner->cursor.position = 0;
    return 1;
}

} /* extern "C" */
