/* NON_MATCHING: registers and stores now match up to the frame: retail places the three bindings at sp+0 (color), +8
 * (position), +16 (texcoord) in a 28-byte frame; the build puts position at sp+32 in a 44-byte frame. */
#include "gfx/VertexAttributeState.h"
#include "AsdSDK/Source/Gfx/Effect/effPolygonFlash.h"
#include "gfx/RenderTargetState.h"
#include "AsdSDK/AsdMemUtil.h"

extern "C" {
void* asdPrimAlloc(u32 size);
void* __aeabi_memcpy(void* destination, const void* source, u32 size); // declcheck: local (the shared declaration does not compile here or changes this unit)
void FUN_0023b9d0(VertexAttributeState*, const VertexAttributeDescription*, u32 address, u32 format);

void vertexAttributeUploadStreams(PolyGeomBuf* geometry)
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
    VertexAttributeDescription position;
    VertexAttributeDescription color;
    VertexAttributeDescription texcoord;
    if (upload->streams.flags & 1) {
        void* data = asdPrimAlloc(upload->streamBytes(1, 12));
        __aeabi_memcpy(data, upload->streams.positions, upload->streamBytes(1, 12));
        position.index = 0;
        FUN_0023b9d0(attributes, &position, osVirtToPhysAddress(reinterpret_cast<u32>(data)), 11);
    }
    if (upload->streams.flags & 2) {
        void* data = asdPrimAlloc(upload->streamBytes(2, 16));
        __aeabi_memcpy(data, upload->streams.floatColors, upload->streamBytes(2, 16));
        color.index = 1;
        FUN_0023b9d0(attributes, &color, osVirtToPhysAddress(reinterpret_cast<u32>(data)), 15);
    }
    if (upload->streams.flags & 0x20) {
        void* data = asdPrimAlloc(upload->streamBytes(0x20, 4));
        __aeabi_memcpy(data, upload->streams.packedColors, upload->streamBytes(0x20, 4));
        color.index = 1;
        FUN_0023b9d0(attributes, &color, osVirtToPhysAddress(reinterpret_cast<u32>(data)), 13);
    }
    if (upload->streams.flags & 4) {
        void* data = asdPrimAlloc(upload->streamBytes(4, 8));
        __aeabi_memcpy(data, upload->streams.texcoords, upload->streamBytes(4, 8));
        texcoord.index = 2;
        FUN_0023b9d0(attributes, &texcoord, osVirtToPhysAddress(reinterpret_cast<u32>(data)), 7);
    }
}
}
