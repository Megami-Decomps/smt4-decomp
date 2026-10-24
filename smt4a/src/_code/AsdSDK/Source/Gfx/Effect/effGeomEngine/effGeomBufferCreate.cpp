#include "AsdSDK/Source/Gfx/Effect/effGeomEngine.h"
#include "AsdSDK/AsdDebug.h"

using nw::math::MTX44;

extern "C" {
void *memAlloc(u32 size, u32 alignment, u32 region, u32 heap, u32 pageSize, u32 flags);
void mtx44Copy(MTX44 *dest, const MTX44 *source);
void *asdPrimCreateQuadSlot(u32 count, u32 type);

// Allocate a buffer of `count` vertices laid out for `flags` and point each attribute at its slice.
EffGeomBuffer *effGeomBufferCreate(u32 count, u32 flags, u32 owner)
{
    u32 stride = 0;
    if (flags & EFF_GEOM_POSITION) stride = 12;
    if (flags & EFF_GEOM_ATTR_02) stride += 4;
    if (flags & EFF_GEOM_ATTR_04) stride += 8;
    if (flags & EFF_GEOM_ATTR_08) stride += 0x40;
    if (flags & EFF_GEOM_ATTR_20) stride += 4;
    if (flags & EFF_GEOM_ATTR_80) stride += 0x10;
    u32 dataBytes = stride * count + 16;

    asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Gfx\\Effect\\effGeomEngine.cpp", 99);
    EffGeomBuffer *buffer = (EffGeomBuffer *)memAlloc(0x10000, 0x100, 0, dataBytes + sizeof(EffGeomBuffer), 16, 1);
    MTX44 *transform = &buffer->transform;
    mtx44Copy(transform, &MTX44::Identity());
    buffer->data = (u8 *)buffer + sizeof(EffGeomBuffer);
    buffer->unk0c = 1;
    buffer->color[0] = 0xff;
    buffer->color[1] = 0xff;
    buffer->color[2] = 0xff;
    buffer->color[3] = 0xff;
    buffer->count = count;
    buffer->stride = stride;
    buffer->flags = flags;
    buffer->owner = owner;
    buffer->pool = asdPrimCreateQuadSlot((u16)count, 0x25);

    u8 *base = (u8 *)(((u32)buffer->data + 15) & ~15);
    u32 offset = 0;
    if (flags & EFF_GEOM_POSITION) {
        offset = 12;
        buffer->position = base;
    }
    if (flags & EFF_GEOM_ATTR_02) {
        buffer->attr02 = base + offset;
        offset += 4;
    }
    if (flags & EFF_GEOM_ATTR_04) {
        buffer->attr04 = base + offset;
        offset += 8;
    }
    if (flags & EFF_GEOM_ATTR_08) {
        buffer->attr08 = base + offset;
        offset += 0x40;
    }
    if (flags & EFF_GEOM_ATTR_20) {
        buffer->attr20 = base + offset;
        offset += 4;
    }
    if (flags & EFF_GEOM_ATTR_80) {
        buffer->attr80 = base + offset;
    }
    return buffer;
}
}
