/* NON_MATCHING: default stream-binding initialization scheduling and shared-one constant lifetime add a saved register. */
#include "gfx/VertexAttributeState.h"
#include "AsdSDK/Source/Gfx/Effect/effPolygonFlash.h"
#include "gfx/RenderTargetState.h"
#include "AsdSDK/AsdMemUtil.h"

struct VertexStreamBinding {
    VertexAttributeDescription attribute;
    u8 scalarFormat;
    u32 step;
    VertexStreamBinding()
    {
        attribute.unk00[0] = 0;
        attribute.unk00[1] = 1;
        attribute.index = 0xFF;
        scalarFormat = 0xFF;
        step = 0;
    }
};
extern "C" {
void* asdPrimAlloc(u32 size);
void* rt_memcpy(void* destination, const void* source, u32 size);
void FUN_0023b9d0(VertexAttributeState*, const VertexAttributeDescription*, u32 address, u32 format);

void FUN_00346f2c(PolyGeomBuf* geometry)
{
    // The upload state follows the published buffer prefix; do not grow that shared type.
    struct UploadView {
        union {
            PolyGeomBuf buffers;
            struct {
                u32 reserved;
                u32 flags;
                u32 reservedFlags;
                u32 vertexCount;
                u8 reservedStreams[0x20];
                const void* positions;
                const void* floatColors;
                const void* packedColors;
                const void* texcoords;
            } streams;
        };
        u8 reservedState[12];
        VertexAttributeState attributes;
        u8 attributeTail[0xF0];
        u32 streamBytes(u32 flag, u32 stride) const
        {
            return (streams.flags & flag) ? streams.vertexCount * stride : 0;
        }
    };
    UploadView* upload = reinterpret_cast<UploadView*>(geometry);
    VertexAttributeState* attributes = &upload->attributes;
    memClear(attributes, 0x790);
    VertexStreamBinding position;
    VertexStreamBinding color;
    VertexStreamBinding texcoord;
    if (upload->streams.flags & 1) {
        void* data = asdPrimAlloc(upload->streamBytes(1, 12));
        rt_memcpy(data, upload->streams.positions, upload->streamBytes(1, 12));
        position.attribute.index = 0;
        FUN_0023b9d0(attributes, &position.attribute, osVirtToPhysAddress(reinterpret_cast<u32>(data)), 11);
    }
    if (upload->streams.flags & 2) {
        void* data = asdPrimAlloc(upload->streamBytes(2, 16));
        rt_memcpy(data, upload->streams.floatColors, upload->streamBytes(2, 16));
        color.attribute.index = 1;
        FUN_0023b9d0(attributes, &color.attribute, osVirtToPhysAddress(reinterpret_cast<u32>(data)), 15);
    }
    if (upload->streams.flags & 0x20) {
        void* data = asdPrimAlloc(upload->streamBytes(0x20, 4));
        rt_memcpy(data, upload->streams.packedColors, upload->streamBytes(0x20, 4));
        color.attribute.index = 1;
        FUN_0023b9d0(attributes, &color.attribute, osVirtToPhysAddress(reinterpret_cast<u32>(data)), 13);
    }
    if (upload->streams.flags & 4) {
        void* data = asdPrimAlloc(upload->streamBytes(4, 8));
        rt_memcpy(data, upload->streams.texcoords, upload->streamBytes(4, 8));
        texcoord.attribute.index = 2;
        FUN_0023b9d0(attributes, &texcoord.attribute, osVirtToPhysAddress(reinterpret_cast<u32>(data)), 7);
    }
}
}
