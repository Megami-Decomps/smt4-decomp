/* NON_MATCHING: the default count=1 constant stays live in r8 and is reused for color attributes; retail uses r1 during construction and reloads 1 into r7 later, changing save/frame allocation. */
#include "gfx/VertexStreams.h"
#include "shard/W6_W6Match5_ShaderBinding.h"
static inline u32 vertexStreamBytes(const VertexStreamSource *source, u32 flag, u32 stride)
{
    return (source->flags & flag) ? source->geometry.vertexCount * stride : 0;
}
extern "C" {
void sysMemClear(void *memory, u32 bytes);
void *asdPrimAlloc(u32 bytes);
void rt_memcpy(void *destination, const void *source, u32 bytes);
void FUN_0042c7c8(void *vertex, const ShaderBindSymbol *symbol, u32 physicalAddress, u32 format);

/* The SDK vertex-state object occupies 0x790 bytes. */
void FUN_00412c54(VertexStreamSource *source, void *vertex)
{
    sysMemClear(vertex, 0x790);
    ShaderBindSymbol position;
    ShaderBindSymbol texCoord;
    ShaderBindSymbol color;
    if (source->flags & 1) {
        void *data = asdPrimAlloc(vertexStreamBytes(source, 1, 12));
        rt_memcpy(data, source->position, vertexStreamBytes(source, 1, 12));
        position.vertex.attribute = 0;
        FUN_0042c7c8(vertex, &position, asdGxGetPhysicalAddress(reinterpret_cast<u32>(data)), 11);
    }
    if (source->flags & 2) {
        void *data = asdPrimAlloc(vertexStreamBytes(source, 2, 16));
        rt_memcpy(data, source->color, vertexStreamBytes(source, 2, 16));
        color.vertex.attribute = 1;
        FUN_0042c7c8(vertex, &color, asdGxGetPhysicalAddress(reinterpret_cast<u32>(data)), 15);
    }
    if (source->flags & 0x20) {
        void *data = asdPrimAlloc(vertexStreamBytes(source, 0x20, 4));
        rt_memcpy(data, source->secondaryColor, vertexStreamBytes(source, 0x20, 4));
        color.vertex.attribute = 1;
        FUN_0042c7c8(vertex, &color, asdGxGetPhysicalAddress(reinterpret_cast<u32>(data)), 13);
    }
    if (source->flags & 4) {
        void *data = asdPrimAlloc(vertexStreamBytes(source, 4, 8));
        rt_memcpy(data, source->texCoord, vertexStreamBytes(source, 4, 8));
        texCoord.vertex.attribute = 2;
        FUN_0042c7c8(vertex, &texCoord, asdGxGetPhysicalAddress(reinterpret_cast<u32>(data)), 7);
    }
}
}
