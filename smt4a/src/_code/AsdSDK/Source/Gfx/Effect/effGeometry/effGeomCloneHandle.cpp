/* NON_MATCHING: the buffer-style branch matches (effGeomCreateBufferHandle's inlined body); in the index-list branch
   retail predicates the slot construction (blne slotReset) where armcc saves the block first, and the index copy
   loop's registers differ. */
#include "shard/W6_W6Match2_GeometryResources.h"
#include "AsdSDK/AsdDebug.h"
#include "classes/EffGeomRecord.h"
#include "AsdSDK/Source/Gfx/Effect/effGeomEngine.h"
#include "AsdSDK/AsdMemAlloc.h"

extern "C" {
extern const char g_effGeometrySourceFileName[];
extern EffGeomColor g_effGeomDefaultTint;
void *asdMemoryAllocTraced(u32 size, const char *file, s32 line);
void refCountIncrement(void *resource);
OwnedBufferPair *slotReset(OwnedBufferPair *buffers);
void slotInit(OwnedBufferPair *buffers, u32 kind, u32 count, u32 format);

/* effGeomCreateBufferHandle's body, which armcc inlined into the clone (both are in effGeometry.cpp). */
static __inline EffGeomHandle *createBufferHandle(u16 vertexCount, u32 flags)
{
    EffGeomHandle *handle;

    asdDebugTrace(g_effGeometrySourceFileName, 221);
    handle = (EffGeomHandle *)memAlloc(ASD_HEAP_EXTRA, ASD_ALIGN_DEFAULT, 0, sizeof(EffGeomHandle), 0x10, 1);
    handle->tag = EFF_GEOM_HANDLE_BUFFER;
    handle->vertexCount = 0;
    handle->buffer = effGeomBufferCreate(vertexCount, flags, 0);
    if (flags & EFF_GEOM_DEFAULT_TINT) {
        EffGeomBuffer *buffer = handle->buffer;

        buffer->tint = g_effGeomDefaultTint;
    }
    handle->buffer->unk60 = 0;
    return handle;
}

GeometryResources *effGeomCloneHandle(const GeometryResources *source)
{
    // The allocation tail and engine-specific metadata extend beyond the shared prefixes.
    struct GeometryView { GeometryResources base; u8 padding10[0x44]; u32 kind; };
    struct BufferView {
        u8 prefix[0xC]; u32 format;
        u8 padding10[8]; u32 count;
        u8 padding1C[0x2C]; u16 *indices;
    };
    u16 flags = source->flags;
    GeometryView *copy;
    if (flags & 0x200) {
        const EffGeomBuffer *original = static_cast<const EffGeomBuffer *>(source->special);
        copy = (GeometryView *)createBufferHandle(original->count, original->flags);
        if (void *shared = static_cast<const EffGeomBuffer *>(source->special)->shared) {
            static_cast<EffGeomBuffer *>(copy->base.special)->shared = shared;
            refCountIncrement(shared);
        }
    } else {
        const BufferView *original = reinterpret_cast<const BufferView *>(source->buffers);
        u32 format = original->format;
        u32 count = original->count;
        asdDebugTrace(g_effGeometrySourceFileName, 113);
        copy = static_cast<GeometryView *>(memAlloc(0x10000, 0x100, 0, sizeof(GeometryView), 0x10, 1));
        OwnedBufferPair *buffers = static_cast<OwnedBufferPair *>(asdMemoryAllocTraced(sizeof(OwnedBufferPair), g_effGeometrySourceFileName, 0x73));
        if (buffers != NULL)
            buffers = slotReset(buffers);
        slotInit(buffers, 0x25, count, format);
        copy->base.flags = flags;
        copy->base.buffers = buffers;
        copy->base.vertexCount = format;
        copy->kind = 0xA5;
        if (AsdTexture *texture = source->texture) {
            copy->base.texture = texture;
            refCountIncrement(texture);
        }
        for (u32 index = 0; index < reinterpret_cast<const BufferView *>(source->buffers)->count; ++index)
            copy->base.buffers->indices[index] = source->buffers->indices[index];
    }
    return &copy->base;
}
}
