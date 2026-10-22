#ifndef CLASSES_OBJ557F00_H
#define CLASSES_OBJ557F00_H
#include "common.h"

struct Obj557f00Allocator;
struct Obj557f00AllocatorVtable {
    void *(*allocate)(Obj557f00Allocator *, u32 size, u32 alignment);
    void (*release)(Obj557f00Allocator *, void *block);
};
struct Obj557f00Allocator { const Obj557f00AllocatorVtable *vtable; };
struct Obj557f00Description {
    u8 unk00[8];
    s32 width;
    s32 height;
};

/* Buffered frame stream; the vtable begins with open/close/read, not destructors. */
class Obj557f00 {
public:
    virtual u32 open(u32 allocator, const void *description, s32 depth, u32 mode);
    virtual void close();
    virtual bool read(void *source, u32 size);
    /* 0x04 */ Obj557f00Allocator *allocator;
    /* 0x08 */ const Obj557f00Description *description;
    /* 0x0C */ s32 handle;
    /* 0x10 */ u8 *pixels;
    /* 0x14 */ u32 capacity;
    /* 0x18 */ u64 submitted;
    /* 0x20 */ u32 cursor;
    /* 0x24 */ u8 active;
    /* 0x25 */ u8 pending;
};
#endif
