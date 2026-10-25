/* NON_MATCHING: classification registers, paired dimension loads and format-case placement differ. */
#include "gfx/RenderTargetState.h"
#include "AsdSDK/AsdDebug.h"
#include "gfx/VertexStreams.h"

struct AsdGxSurfaceDescription {
    s32 format;
    s32 width, height;
    u32 location;
    u32 unk10;
    u32 flags;
};
typedef char AsdGxSurfaceDescriptionSize[sizeof(AsdGxSurfaceDescription) == 0x18 ? 1 : -1];

extern "C" {
void *asdMemoryAlloc(u32, u32, u32, u32, u32);
void *asdMemoryAllocAligned(u32, u32, u32, u32, u32, u32);
extern const char DAT_0053d704[];

/* Describe both framebuffer surfaces and optionally allocate their backing storage. */
void FUN_00153084(RenderTargetFramebuffer *framebuffer, const AsdGxSurfaceDescription *description, s32 allocate)
{
    /* Expose the existing opaque color/depth buffers without changing the shared framebuffer. */
    struct Surface {
        s32 format;
        u32 transferFormat;
        void *data;
        u32 physicalAddress;
        u32 byteSize;
        u32 auxiliaryFormat;
    };
    struct FramebufferStorageView {
        Surface surfaces[2];
        s32 width, height;
        u32 flags;
    };
    typedef char FramebufferStorageOffsets[
        sizeof(Surface) == 0x18 && sizeof(FramebufferStorageView) == sizeof(RenderTargetFramebuffer) &&
        offsetof(FramebufferStorageView, width) == 0x30 &&
        offsetof(FramebufferStorageView, flags) == 0x38 ? 1 : -1];
    FramebufferStorageView *storage = (FramebufferStorageView *)framebuffer;
    for (u32 index = 0; index < 2; ++index) {
        const AsdGxSurfaceDescription *source = &description[index];
        Surface *surface = &storage->surfaces[index];
        const s32 width = source->width;
        const s32 height = source->height;
        u32 bytes = 0;
        u32 transferFormat = 0;
        u32 auxiliaryFormat = 0;
        switch (source->format) {
        case 0x8056: // GL_RGBA4
            transferFormat = 4;
            bytes = width * height * 2;
            break;
        case 0x8057: // GL_RGB5_A1
            transferFormat = 2;
            bytes = width * height * 2;
            break;
        case 0x8058: // GL_RGBA8
            auxiliaryFormat = 2;
            bytes = width * height * 4;
            break;
        case 0x81A5: // GL_DEPTH_COMPONENT16
            bytes = width * height * 2;
            break;
        case 0x88F0: // GL_DEPTH24_STENCIL8
            transferFormat = 3;
            bytes = width * height * 4;
            break;
        case 0x8D62: // GL_RGB565
            transferFormat = 3;
            bytes = width * height * 2;
            break;
        }
        surface->byteSize = bytes;
        surface->transferFormat = transferFormat;
        surface->format = source->format;
        surface->auxiliaryFormat = auxiliaryFormat;
        if (allocate) {
            void *data = NULL;
            switch (source->location) {
            case 0x10000:
                asdDebugTrace(DAT_0053d704, 2663);
                data = asdMemoryAllocAligned(0x10000, 0x100, 0, bytes, 0x40, 1);
                break;
            case 0x20000:
                asdDebugTrace(DAT_0053d704, 2664);
                data = asdMemoryAlloc(0x20000, 0x100, 0, bytes, 1);
                break;
            case 0x30000:
                asdDebugTrace(DAT_0053d704, 2665);
                data = asdMemoryAlloc(0x30000, 0x100, 0, bytes, 1);
                break;
            }
            surface->data = data;
            surface->physicalAddress = asdGxGetPhysicalAddress(reinterpret_cast<u32>(data));
        }
        storage->width = source->width;
        storage->height = source->height;
        storage->flags = source->flags;
    }
}
}
