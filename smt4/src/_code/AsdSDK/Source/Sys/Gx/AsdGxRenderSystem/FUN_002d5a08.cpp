/* NON_MATCHING: register allocation (retail does not spill the argument registers) and the format-classification branch layout differ */
#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"
#include "AsdSDK/AsdDebug.h"

/* Memory heaps a render target's surfaces can live in. */
#define ASD_HEAP_VRAM_A 0x10000
#define ASD_HEAP_VRAM_B 0x20000
#define ASD_HEAP_FCRAM 0x30000

/* The pixel formats the surfaces are described with (OpenGL enumerators). */
#define GL_DEPTH_COMPONENT16 0x81a5
#define GL_RGBA4 0x8056
#define GL_RGB5_A1 0x8057
#define GL_RGBA8 0x8058
#define GL_DEPTH24_STENCIL8 0x88f0
#define GL_RGB565 0x8d62

/* One surface of a render target: its format, mode, buffer and size. */
struct RenderSurface {
    /* 0x00 */ u32 format;
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
extern const char DAT_00409a68[];
void *asdMemoryAlloc(u32 heap, u32 alignment, u32 region, u32 size, u32 option);
void *asdMemoryAllocAligned(u32 heap, u32 alignment, u32 region, u32 size, u32 pageAlignment, u32 option);
AsdTexture *asdTextureCreate(u32 option);
void FUN_002a66e0(u32 format, u32 pixelType, u32 *hardwareFormat);
u32 osVirtToPhysAddress(void *address);

/* The internal pixel format a texture (format, type) pair is stored as, or 0. */
static __inline u32 renderInternalFormat(u32 format, u32 pixelType)
{
    if (format == 0x6752) {
    } else if (format < 0x6752) {
        u32 offset = format - 0x1907;
        if (offset != 0) {
            if (offset != 1) {
                if (offset == 3 || format - 0x6607 == 0xf9) {
                    return GL_RGBA4;
                }
                return 0;
            }
        } else {
            if (pixelType == 0x8363) {
                return GL_RGB565;
            }
            return 0;
        }
    } else if (format != 0x6754) {
        if (format == 0x6758 || format == 0x6759) {
            return GL_RGBA4;
        }
        return 0;
    } else {
        if (pixelType == 0x8363) {
            return GL_RGB565;
        }
        return 0;
    }
    if (pixelType == 0x1401) {
        return GL_RGBA8;
    }
    if (pixelType == 0x8033) {
        return GL_RGBA4;
    }
    if (pixelType == 0x8034) {
        return GL_RGB5_A1;
    }
    return 0;
}

/* Fills the format-dependent parts of a surface for a width x height target. */
static __inline void renderDescribeSurface(RenderSurface *surface, u32 internalFormat, s32 pixels)
{
    u32 mode = 0;
    u32 extra = 0;
    s32 size = pixels * 2;
    if (internalFormat != GL_DEPTH_COMPONENT16) {
        size = 0;
        if (internalFormat < GL_DEPTH_COMPONENT16) {
            if (internalFormat == GL_RGBA4) {
                mode = 4;
                size = pixels * 2;
            } else if (internalFormat == GL_RGB5_A1) {
                mode = 2;
                size = pixels * 2;
            } else if (internalFormat == GL_RGBA8) {
                extra = 2;
                size = pixels * 4;
            }
        } else if (internalFormat == GL_DEPTH24_STENCIL8 || internalFormat == GL_RGB565) {
            mode = 3;
            size = internalFormat == GL_DEPTH24_STENCIL8 ? pixels * 4 : pixels * 2;
        }
    }
    surface->mode = mode;
    surface->size = size;
    surface->extra = extra;
}

/* Allocates a surface's pixel buffer from the heap the target lives in (none for other heaps). */
static __inline void *renderAllocSurface(u32 heap, s32 size)
{
    if (heap == ASD_HEAP_VRAM_A) {
        return asdMemoryAllocAligned(heap, 0x100, 0, size, 0x40, 1);
    }
    if (heap == ASD_HEAP_VRAM_B || heap == ASD_HEAP_FCRAM) {
        return asdMemoryAlloc(heap, 0x100, 0, size, 1);
    }
    return NULL;
}

/* Creates a render target of width x height: a texture bound to a color surface and a depth
   surface, both allocated from the given heaps. */
RenderTarget *FUN_002d5a08(s32 width, s32 height, u32 heap, u32 format, u32 pixelType, u32 depthFormat,
                           u32 depthHeap)
{
    asdDebugTrace(DAT_00409a68, 473);
    RenderTarget *target = (RenderTarget *)asdMemoryAlloc(0x100, 0x100, 0, 0x14, 1);
    asdDebugTrace(DAT_00409a68, 474);
    RenderSurfacePair *surfaces = (RenderSurfacePair *)asdMemoryAlloc(0x100, 0x100, 0, 0x30, 1);
    target->texture = asdTextureCreate(0);
    target->texture->dimensions.width = width;
    target->texture->dimensions.height = height;
    target->texture->target = ASDTEXTURE_TARGET_2D;
    target->texture->unk08 = heap;
    target->texture->image.flags = 0x2000000;
    FUN_002a66e0(format, pixelType, &target->texture->image.hardwareFormat);

    s32 pixels = width * height;
    u32 internalFormat = renderInternalFormat(format, pixelType);
    renderDescribeSurface(&surfaces->color, internalFormat, pixels);
    surfaces->color.format = format;
    surfaces->color.buffer = renderAllocSurface(heap, surfaces->color.size);
    surfaces->color.physicalAddress = osVirtToPhysAddress(surfaces->color.buffer);
    target->buffer = surfaces->color.buffer;
    target->texture->image.physicalAddress = osVirtToPhysAddress(target->buffer);

    renderDescribeSurface(&surfaces->depth, depthFormat, pixels);
    surfaces->depth.format = format;
    surfaces->depth.buffer = renderAllocSurface(depthHeap, surfaces->depth.size);
    surfaces->depth.physicalAddress = osVirtToPhysAddress(surfaces->depth.buffer);
    target->depth = &surfaces->depth;
    target->surfaces = surfaces;
    return target;
}

} /* extern "C" */
