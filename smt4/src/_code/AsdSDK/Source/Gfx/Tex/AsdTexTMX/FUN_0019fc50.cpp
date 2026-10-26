/* NON_MATCHING: structure matches retail; armcc gives the row cursor r6 and height r7 (retail the reverse), and the colour/loop scheduling follows from that. */
#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "gfx/PackedColorBytes.h"

/* A TMX image: 64 bytes of header, then the palette, then one palette index per pixel. */
struct TmxHeader {
    /* 0x00 */ u8 unk00[17];
    /* 0x11 */ u8 hasConvertedPixels;
    /* 0x12 */ u16 width;
    /* 0x14 */ u16 height;
    /* 0x16 */ u8 format;
    /* 0x17 */ u8 unk17[41];
    /* 0x40 */ u32 palette[1];
};

extern "C" {
void FUN_00349804(u32 width, u32 height, const void *source, void *destination);

/* Byte-swaps a palette entry and expands its 7-bit alpha (0x80 is opaque). */
static __inline u32 tmxConvertColor(u32 color)
{
    u32 alpha = color >> 24;
    alpha = alpha < 127 ? (alpha & 0x7f) << 1 : 255;
    return (packedColorSwap32(color) & 0xffffff00) | alpha;
}

/* Decodes a 4-bit or 8-bit paletted TMX image into the texture's pixel storage. */
void FUN_0019fc50(AsdTexture *texture, const void *data, u32 size, u32 flags)
{
    if (texture == NULL || data == NULL) {
        return;
    }
    const TmxHeader *header = static_cast<const TmxHeader *>(data);
    u16 width = header->width;
    u16 height = header->height;
    /* Both are only set when the header has no converted pixels; retail reads them uninitialised otherwise. */
    u32 bytesPerColor;
    u32 *decoded;
    if (header->hasConvertedPixels == 0) {
        bytesPerColor = 4;
        texture->storage.unk28 = width * height * 4;
        asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\AsdSDK\\Source\\Gfx\\Tex\\AsdTexTMX.cpp", 95);
        decoded = static_cast<u32 *>(asdMemAlloc(256, 256, 0, texture->storage.unk28, 1));
    }
    const u32 *palette = header->palette;
    u32 *row = decoded;
    switch (header->format) {
    case 20:
    case 36:
    case 44: {
        const u8 *indices = reinterpret_cast<const u8 *>(palette) + (bytesPerColor << 4);
        for (u16 y = 0; y < height; ++y) {
            u32 *out = row;
            u32 x = 0;
            if (width != 0) {
                for (u16 remaining = width; remaining != 0; --remaining) {
                    s32 index = (height - y - 1) * width + x;
                    u32 packed = indices[index >> 1];
                    packed = (x & 1) ? packed >> 4 : packed & 15;
                    *out++ = tmxConvertColor(palette[packed]);
                    ++x;
                }
            }
            row += width;
        }
        break;
    }
    case 19:
    case 27: {
        const u8 *indices = reinterpret_cast<const u8 *>(palette) + (bytesPerColor << 8);
        asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\AsdSDK\\Source\\Gfx\\Tex\\AsdTexTMX.cpp", 181);
        u32 *converted = static_cast<u32 *>(asdMemAlloc(256, 256, 0, 1024, 1));
        for (u32 i = 0; i < 256; ++i) {
            u32 source = (i & 0xe7) | ((i & 0x10) >> 1) | ((i & 0x08) << 1);
            u32 color = palette[source];
            u32 red = color & 0xff;
            u32 green = (color & 0xff00) >> 8;
            u32 blue = (color & 0xff0000) >> 16;
            u32 alpha = color >> 24;
            alpha = alpha < 127 ? (alpha & 0x7f) << 1 : 255;
            converted[i] = (red << 24) | (green << 16) | (blue << 8) | alpha;
        }
        for (u16 y = 0; y < height; ++y) {
            const u8 *line = indices + (height - y - 1) * width;
            for (u16 x = 0; x < width; ++x) {
                row[x] = converted[line[x]];
            }
            row += width;
        }
        asdMemFree(converted);
        break;
    }
    }
    texture->unk08 = flags;
    texture->target = ASDTEXTURE_TARGET_2D;
    texture->image.format = 0x6752;
    texture->image.type = 0x1401;
    texture->dimensions.width = width;
    texture->dimensions.height = height;
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\AsdSDK\\Source\\Gfx\\Tex\\AsdTexTMX.cpp", 232);
    texture->storage.pixels = memAlloc(0x10000, 0x100, 0, texture->storage.unk28, 128, 1);
    FUN_00349804(texture->dimensions.width, texture->dimensions.height, decoded, texture->storage.pixels);
    asdMemFree(decoded);
}
}
