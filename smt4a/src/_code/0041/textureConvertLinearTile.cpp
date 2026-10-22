/* NON_MATCHING: the two 4-bit base-case byte copies use r0 rather than retail r1. */
#include "shard/W6_W6Match7_TextureTile.h"

extern "C" {
u32 gfxTexFormatGetBitsPerPixel(u32 format, u32 type);
void rt_memcpy(void *destination, const void *source, u32 bytes);

// Convert an eight-pixel-stride linear tile into recursively ordered quadrants.
u32 textureConvertLinearTile(const u8 *source, u8 *destination, s32 size, const TextureTileFormat *format)
{
    u32 bits = gfxTexFormatGetBitsPerPixel(format->format, format->type);
    if (size != 1) {
        if (bits == 4 && size == 2) {
            if (!format->flipVertical) {
                destination[0] = source[0];
                destination[1] = source[4];
            }
        } else {
            size >>= 1;
            u32 quadrantPixels = size * size;
            if (format->flipVertical) {
                u32 quadrantBits = quadrantPixels * bits;
                textureConvertLinearTile(source, destination + ((quadrantBits * 2) >> 3), size, format);
                u32 rowBits = size * bits;
                textureConvertLinearTile(source + (rowBits >> 3), destination + ((quadrantBits * 3) >> 3), size, format);
                textureConvertLinearTile(source + ((rowBits * 8) >> 3), destination, size, format);
                textureConvertLinearTile(source + ((rowBits * 9) >> 3), destination + (quadrantBits >> 3), size, format);
            } else {
                textureConvertLinearTile(source, destination, size, format);
                u32 quadrantBits = quadrantPixels * bits;
                u32 rowBits = size * bits;
                textureConvertLinearTile(source + (rowBits >> 3), destination + (quadrantBits >> 3), size, format);
                textureConvertLinearTile(source + ((rowBits * 8) >> 3), destination + ((quadrantBits * 2) >> 3), size, format);
                textureConvertLinearTile(source + ((rowBits * 9) >> 3), destination + ((quadrantBits * 3) >> 3), size, format);
            }
        }
    } else {
        rt_memcpy(destination, source, bits >> 3);
    }
    return 1;
}
}
