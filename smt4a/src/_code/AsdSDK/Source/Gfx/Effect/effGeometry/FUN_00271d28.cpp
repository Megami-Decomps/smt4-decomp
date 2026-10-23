/* NON_MATCHING: allocation debug hooks are absent; color copy, reference reloads and saved registers differ. */
#include "shard/W6_W6Match2_GeometryResources.h"
#include <string.h>

extern "C" {
extern const char DAT_0054baf8[];
extern const u32 DAT_005c1fb4[4];
void *memAlloc(u32 heap, u32 alignment, u32 flags, u32 size, u32 dataAlignment, u32 clear);
void *FUN_00178b04(u32 size, const char *file, s32 line);
void *FUN_002b3324(u32 count, u32 flags, s32 mode);
void refCountIncrement(void *resource);
OwnedBufferPair *slotReset(OwnedBufferPair *buffers);
void slotInit(OwnedBufferPair *buffers, u32 kind, u32 count, u32 format);

GeometryResources *FUN_00271d28(const GeometryResources *source)
{
    // The allocation tail and engine-specific metadata extend beyond the shared prefixes.
    struct GeometryView { GeometryResources base; u8 padding10[0x44]; u32 kind; };
    struct EngineView {
        u32 reserved00, count;
        u8 padding08[0xC];
        u32 flags;
        u8 padding18[0x28];
        u32 color[4];
        u8 padding50[0x10];
        u32 reset;
        u8 padding64[0x50];
        void *retained;
    };
    struct BufferView {
        u8 prefix[0xC]; u32 format;
        u8 padding10[8]; u32 count;
        u8 padding1C[0x2C]; u16 *indices;
    };
    u16 flags = source->flags;
    GeometryView *copy;
    if (flags & 0x200) {
        const EngineView *original = static_cast<const EngineView *>(source->special);
        u32 engineFlags = original->flags;
        u16 count = original->count;
        copy = static_cast<GeometryView *>(memAlloc(0x10000, 0x100, 0, sizeof(GeometryView), 0x10, 1));
        copy->base.flags = 0x300;
        copy->base.vertexCount = 0;
        EngineView *engine = static_cast<EngineView *>(FUN_002b3324(count, engineFlags, 0));
        copy->base.special = engine;
        if (engineFlags & 0x80000)
            memcpy(engine->color, DAT_005c1fb4, sizeof(engine->color));
        static_cast<EngineView *>(copy->base.special)->reset = 0;
        original = static_cast<const EngineView *>(source->special);
        if (original->retained != NULL) {
            static_cast<EngineView *>(copy->base.special)->retained = original->retained;
            refCountIncrement(original->retained);
        }
    } else {
        const BufferView *original = reinterpret_cast<const BufferView *>(source->buffers);
        u32 format = original->format;
        u32 count = original->count;
        copy = static_cast<GeometryView *>(memAlloc(0x10000, 0x100, 0, sizeof(GeometryView), 0x10, 1));
        OwnedBufferPair *buffers = static_cast<OwnedBufferPair *>(FUN_00178b04(sizeof(OwnedBufferPair), DAT_0054baf8, 0x73));
        if (buffers != NULL)
            buffers = slotReset(buffers);
        slotInit(buffers, 0x25, count, format);
        copy->base.flags = flags;
        copy->base.buffers = buffers;
        copy->base.vertexCount = format;
        copy->kind = 0xA5;
        if (source->texture != NULL) {
            copy->base.texture = source->texture;
            refCountIncrement(source->texture);
        }
        for (u32 index = 0; index < reinterpret_cast<const BufferView *>(source->buffers)->count; ++index)
            copy->base.buffers->indices[index] = source->buffers->indices[index];
    }
    return &copy->base;
}
}
