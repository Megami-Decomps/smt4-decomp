/* NON_MATCHING: three register/scheduling differences remain: the 4-bit loop keeps its index base and row counter in ip/fp instead of fp/sl (alpha in sl instead of ip), and the 8-bit row loop recomputes the pre-increment bias (row - 1) per row where retail hoists indices - 1 out of the row loop. */
#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"
#include "AsdSDK/AsdDebug.h"
#include "gfx/PackedColorBytes.h"
#include "AsdSDK/AsdMemAlloc.h"

/* Indexed image as stored in the resource: 0x40-byte header, palette, then the index data. */
struct IndexedImage {
    u8 unk00[0x11];
    u8 hasPixels; // 0x11
    u16 width; // 0x12
    u16 height; // 0x14
    u8 format; // 0x16
    u8 unk17[0x29];
    u32 palette[1]; // 0x40
};

/* Doubles a half-range alpha value, saturating at 0xff. */
static __inline u32 expandAlpha(u32 alpha)
{
    if (alpha >= 0x7f)
        return 0xff;
    return (alpha << 25) >> 24;
}

extern "C" {
void asdMemFree(void *memory);
void FUN_00418fe0(u32 width, u32 height, u32 *source, void *destination);

/* Expands an 4-/8-bit indexed image to flipped RGBA words and uploads it into the texture. */
void FUN_00226970(AsdTexture *texture, const IndexedImage *image, u32 size, u32 flags)
{
    if (texture == NULL || image == NULL)
        return;
    u32 width = image->width;
    u32 height = image->height;
    // Both are only assigned when hasPixels is zero; the original read them uninitialised otherwise.
    u32 *pixels;
    u32 paletteScale;
    if (image->hasPixels == 0) {
        paletteScale = 4;
        texture->storage.unk28 = width * height * 4;
        asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Gfx\\Tex\\AsdTexTMX.cpp", 95);
        pixels = (u32 *)asdMemoryAllocTracked(0x100, 0x100, 0, texture->storage.unk28, 1);
    }
    const u32 *palette = image->palette;
    u32 *out = pixels;
    switch (image->format) {
    case 0x14:
    case 0x24:
    case 0x2c: {
        const u8 *indices = (const u8 *)palette + paletteScale * 0x10;
        for (u16 y = 0; y < height; y++) {
            if (width != 0) {
                u32 *dst = out;
                u32 count = width;
                u32 x = 0;
                do {
                    s32 index = (height - y - 1) * width + x;
                    u32 value = indices[index >> 1];
                    if ((x & 1) != 0)
                        value >>= 4;
                    else
                        value &= 0xf;
                    x++;
                    u32 color = palette[value];
                    u32 alpha = expandAlpha(color >> 24);
                    count = (count - 1) & 0xffff;
                    *dst++ = (packedColorSwap32(color) & ~0xffu) | alpha;
                } while (count != 0);
                out += width;
            }
        }
        break;
    }
    case 0x13:
    case 0x1b: {
        const u8 *indices = (const u8 *)palette + paletteScale * 0x100;
        asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Gfx\\Tex\\AsdTexTMX.cpp", 181);
        u32 *colors = (u32 *)asdMemoryAllocTracked(0x100, 0x100, 0, 0x400, 1);
        for (u32 i = 0; i < 0x100; i++) {
            u32 paletteIndex = (i & 0xe7) | ((i & 0x10) >> 1) | ((i & 8) << 1);
            u32 color = palette[paletteIndex];
            u32 red = color & 0xff;
            u32 green = (color & 0xff00) >> 8;
            u32 blue = (color & 0xff0000) >> 16;
            u32 alpha = expandAlpha(color >> 24);
            colors[i] = (red << 24) | (green << 16) | (blue << 8) | alpha;
        }
        for (u16 y = 0; y < height; y++) {
            if (width != 0) {
                const u8 *row = indices + (height - y - 1) * width;
                for (u32 x = 0; x < width; x++)
                    out[x] = colors[row[x]];
                out += width;
            }
        }
        asdMemFree(colors);
        break;
    }
    }
    texture->unk08 = flags;
    texture->target = ASDTEXTURE_TARGET_2D;
    texture->image.type = 0x1401;
    texture->image.format = 0x6752;
    texture->dimensions.width = width;
    texture->dimensions.height = height;
    asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Gfx\\Tex\\AsdTexTMX.cpp", 232);
    texture->storage.pixels = memAlloc(0x10000, 0x100, 0, texture->storage.unk28, 0x80, 1);
    FUN_00418fe0(texture->dimensions.width, texture->dimensions.height, pixels, texture->storage.pixels);
    asdMemFree(pixels);
}
}
