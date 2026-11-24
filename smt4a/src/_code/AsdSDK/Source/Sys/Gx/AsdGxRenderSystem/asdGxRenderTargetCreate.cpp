/* NON_MATCHING: 203 lines (shape 153), as its IV twin FUN_002d5a08: this build keeps the allocation's 0x40
 * alignment in fp across both surfaces and spills the colour size (retail rematerialises 0x40 and keeps the size in r9),
 * and lays the internal-format switch's blocks out in another order. The surface helpers share FUN_00153084's switch
 * and trace lines 2663-2665. */
#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers_VariantA.h"
#include "util/MemoryHelpers_Smt4a.h"


/* The pixel formats the surfaces are described with (OpenGL enumerators). */
#define GL_DEPTH_COMPONENT16 0x81a5
#define GL_RGBA4 0x8056
#define GL_RGB5_A1 0x8057
#define GL_RGBA8 0x8058
#define GL_DEPTH24_STENCIL8 0x88f0
#define GL_RGB565 0x8d62

/* One surface of a render target: its format, mode, buffer and size. */
struct RenderSurface {
    /* 0x00 */ s32 format;
    /* 0x04 */ u32 mode;
    /* 0x08 */ void *buffer;
    /* 0x0c */ u32 physicalAddress;
    /* 0x10 */ s32 size;
    /* 0x14 */ u32 extra;
};

/* The color and depth surfaces of a render target. */
struct RenderSurfacePair {
    RenderSurface color;
    RenderSurface depth;
};

/* A render target: the surface pair, the depth view, the buffer and the texture. */
struct RenderTarget {
    /* 0x00 */ RenderSurfacePair *surfaces;
    /* 0x04 */ RenderSurface *depth;
    /* 0x08 */ void *buffer;
    /* 0x0c */ AsdTexture *texture;
    /* 0x10 */ u32 unk10;
};

extern "C" {
extern const char g_asdGxRenderSystemSourceFileName[];
void *asdMemoryAlloc(u32 heap, u32 alignment, u32 region, u32 size, u32 option); // declcheck: local (shard/W5_W5Match7_FlagBanks.h is an unrelated shard view)
AsdTexture *asdTextureCreate(u32 option);
f32 texFormatGetBytesPerPixel(s32 format, s32 pixelType, u32 *hardwareFormat);

/* Allocates a surface's pixel buffer from its heap (NULL for any other heap). */
static __inline void *renderAllocSurface(u32 heap, s32 size)
{
    void *buffer = NULL;
    switch (heap) {
    case ASD_HEAP_EXTRA:
        asdDebugTrace(g_asdGxRenderSystemSourceFileName, 2663);
        buffer = asdMemoryAllocAligned(ASD_HEAP_EXTRA, ASD_ALIGN_DEFAULT, 0, size, 0x40, 1);
        break;
    case ASD_HEAP_VRAM_A:
        asdDebugTrace(g_asdGxRenderSystemSourceFileName, 2664);
        buffer = asdMemoryAlloc(ASD_HEAP_VRAM_A, ASD_ALIGN_DEFAULT, 0, size, 1);
        break;
    case ASD_HEAP_VRAM_B:
        asdDebugTrace(g_asdGxRenderSystemSourceFileName, 2665);
        buffer = asdMemoryAlloc(ASD_HEAP_VRAM_B, ASD_ALIGN_DEFAULT, 0, size, 1);
        break;
    }
    return buffer;
}

/* Describes a width x height surface of the given internal format and allocates its buffer. */
static __inline void renderSetupSurface(RenderSurface *surface, s32 format, s32 internalFormat, s32 width, s32 height,
                                        u32 heap)
{
    s32 size = 0;
    u32 mode = 0;
    u32 extra = 0;
    switch (internalFormat) {
    case GL_RGBA4:
        mode = 4;
        size = width * height * 2;
        break;
    case GL_RGB5_A1:
        mode = 2;
        size = width * height * 2;
        break;
    case GL_RGBA8:
        extra = 2;
        size = width * height * 4;
        break;
    case GL_DEPTH_COMPONENT16:
        size = width * height * 2;
        break;
    case GL_DEPTH24_STENCIL8:
        mode = 3;
        size = width * height * 4;
        break;
    case GL_RGB565:
        mode = 3;
        size = width * height * 2;
        break;
    }
    surface->mode = mode;
    surface->size = size;
    surface->format = format;
    surface->buffer = renderAllocSurface(heap, size);
    surface->physicalAddress = asdGxGetPhysicalAddress((u32)surface->buffer);
    surface->extra = extra;
}

/* Creates a render target of width x height: a texture bound to a color surface and a depth
   surface, both allocated from the given heaps. */
RenderTarget *asdGxRenderTargetCreate(s32 width, s32 height, u32 heap, s32 format, s32 pixelType, s32 depthFormat,
                           u32 depthHeap)
{
    asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Sys\\Gx\\AsdGxRenderSystem.cpp", 473);
    RenderTarget *target = (RenderTarget *)asdMemoryAlloc(0x100, 0x100, 0, 0x14, 1);
    asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Sys\\Gx\\AsdGxRenderSystem.cpp", 474);
    RenderSurfacePair *surfaces = (RenderSurfacePair *)asdMemoryAlloc(0x100, 0x100, 0, 0x30, 1);
    target->texture = asdTextureCreate(0);
    target->texture->dimensions.width = width;
    target->texture->dimensions.height = height;
    target->texture->target = ASDTEXTURE_TARGET_2D;
    target->texture->heap = heap;
    target->texture->image.flags = 0x2000000;
    texFormatGetBytesPerPixel(format, pixelType, &target->texture->image.hardwareFormat);

    /* the internal format the (format, type) pair is rendered as, or 0 */
    s32 internalFormat = 0;
    switch (format) {
    case 0x1908: /* GL_RGBA */
    case 0x6752: /* GL_RGBA_NATIVE_DMP */
        switch (pixelType) {
        case 0x1401: /* GL_UNSIGNED_BYTE */
            internalFormat = GL_RGBA8;
            break;
        case 0x8033: /* GL_UNSIGNED_SHORT_4_4_4_4 */
            internalFormat = GL_RGBA4;
            break;
        case 0x8034: /* GL_UNSIGNED_SHORT_5_5_5_1 */
            internalFormat = GL_RGB5_A1;
            break;
        }
        break;
    case 0x1907: /* GL_RGB */
    case 0x6754: /* GL_RGB_NATIVE_DMP */
        if (pixelType == 0x8363) { /* GL_UNSIGNED_SHORT_5_6_5 */
            internalFormat = GL_RGB565;
        }
        break;
    case 0x190a: /* GL_LUMINANCE_ALPHA */
    case 0x6700: /* GL_HILO8_DMP */
    case 0x6758: /* GL_LUMINANCE_ALPHA_NATIVE_DMP */
    case 0x6759: /* GL_HILO8_NATIVE_DMP */
        internalFormat = GL_RGBA4;
        break;
    }
    renderSetupSurface(&surfaces->color, format, internalFormat, width, height, heap);
    target->buffer = surfaces->color.buffer;
    target->texture->image.physicalAddress = asdGxGetPhysicalAddress((u32)target->buffer);

    renderSetupSurface(&surfaces->depth, format, depthFormat, width, height, depthHeap);
    target->depth = &surfaces->depth;
    target->surfaces = surfaces;
    return target;
}

} /* extern "C" */
