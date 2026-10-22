/* NON_MATCHING: retail zeroes the three trailing words with a write-back str and an stm of two zero registers; this build emits three plain stores. */
#include "common.h"

extern "C" {

typedef struct FrameAllocator FrameAllocator;

typedef struct FrameAllocatorVtbl {
    void *(*alloc)(FrameAllocator *self, u32 size, u32 align);
    void (*free)(FrameAllocator *self, void *block);
} FrameAllocatorVtbl;

struct FrameAllocator {
    const FrameAllocatorVtbl *vtbl;
};

typedef struct FrameDesc {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s32 width;
    /* 0x0C */ s32 height;
} FrameDesc;

typedef struct FrameBuffer {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ FrameAllocator *allocator;
    /* 0x08 */ FrameDesc *desc;
    /* 0x0C */ s32 handle;
    /* 0x10 */ void *pixels;
    /* 0x14 */ u32 size;
    /* 0x18 */ u32 unk18;
    /* 0x1C */ u32 unk1C;
    /* 0x20 */ u32 unk20;
} FrameBuffer;

s32 FUN_00422814(s32 width, s32 height, u32 mode);
bool FUN_00423ce0(FrameBuffer *frame, FrameAllocator *allocator, FrameDesc *desc, s32 a, s32 b);

/* Sets up a frame buffer: allocates width * height * depth * 2 bytes and opens a handle for it.
 * Returns 0 on failure, freeing the pixels again when the handle cannot be opened. */
s32 FUN_00423a8c(FrameBuffer *frame, FrameAllocator *allocator, FrameDesc *desc, s32 depth, u32 mode)
{
    if (!FUN_00423ce0(frame, allocator, desc, 1, 16)) {
        return 0;
    }
    frame->size = desc->width * desc->height * depth * 2;
    frame->pixels = frame->allocator->vtbl->alloc(frame->allocator, frame->size, 32);
    if (frame->pixels == NULL) {
        return 0;
    }
    frame->handle = FUN_00422814(desc->width, desc->height, mode);
    if (frame->handle == -1) {
        frame->allocator->vtbl->free(frame->allocator, frame->pixels);
        frame->pixels = NULL;
        return 0;
    }
    frame->unk18 = 0;
    frame->unk1C = 0;
    frame->unk20 = 0;
    return 1;
}

} /* extern "C" */
