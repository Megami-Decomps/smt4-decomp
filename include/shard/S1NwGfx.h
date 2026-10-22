/* nw::gfx particle shape data: a self-relative pointer is an offset from its own address (0 = null). */
#ifndef SHARD_S1NWGFX_H
#define SHARD_S1NWGFX_H

#include "common.h"

/* nw::ut::RelativePointer */
typedef struct RelativePointer {
    /* 0x00 */ s32 offset;


    void *get() const
    {
        return offset != 0 ? (void *)((u8 *)this + offset) : NULL;
    }
} RelativePointer;

/* One vertex stream of a shape. */
typedef struct ShapeStream {
    /* 0x00 */ u32 flags;      /* 0x40000000: not a vertex stream */
    /* 0x04 */ u32 type;       /* selects the component count */
} ShapeStream;

/* A list of self-relative pointers to the streams. */
typedef struct ShapeStreamList {
    /* 0x00 */ u32 vertexCount;
    /* 0x04 */ u32 count;
    /* 0x08 */ RelativePointer streams; /* relative pointer to `count` relative pointers to ShapeStream */
} ShapeStreamList;

/* The shape resource header; the stream list is reached through a relative pointer. */
typedef struct ShapeResource {
    /* 0x00 */ u8 unk00[0x30];
    /* 0x30 */ RelativePointer streamList; /* relative pointer to ShapeStreamList */
} ShapeResource;

/* Running size/alignment of a memory block layout. */
typedef struct SizeCalculator {
    /* 0x00 */ u32 size;
    /* 0x04 */ u32 alignment;
    /* 0x08 */ u32 maxAlignment;
} SizeCalculator;

/* Six self-relative vertex buffers share a resource element count. */
struct VertexBufferStorage {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ u32 handle;
    /* 0x1C */ void *allocation;
};

struct VertexBufferResource {
    /* 0x00 */ u32 flags;
    /* 0x04 */ u8 unk04[0x28];
    /* 0x2C */ u32 count;
    /* 0x30 */ u8 unk30[8];
    /* 0x38 */ RelativePointer streams[6];

    static VertexBufferResource *cast(void *object)
    {
        VertexBufferResource *resource = (VertexBufferResource *)object;
        return resource != NULL && (resource->flags & 0x20000009) == 0x20000009 ? resource : NULL;
    }

    VertexBufferStorage *stream(u8 index)
    {
        return (VertexBufferStorage *)streams[index].get();
    }
};

#endif
