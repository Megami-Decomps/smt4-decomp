/* NON_MATCHING: recursive quadrant destination arithmetic scheduling differs from retail. */
#include "shard/W6_W6Match7_TextureTile.h"
extern "C" {
u32 gfxTexFormatGetBitsPerPixel(u32 format, u32 type);
void rt_memcpy(void *destination, const void *source, u32 bytes);

u32 FUN_0023b260(const u8 *source, u8 *destination, s32 size, const TextureTileFormat *format)
{
    u32 bits = gfxTexFormatGetBitsPerPixel(format->format, format->type);
    if (size != 1) {
        if (bits == 4 && size == 2) {
            if (!format->flipVertical) {
                destination[0] = source[0];
                destination[(format->rows.rowStride * bits) >> 3] = source[1];
            }
        } else {
            size >>= 1;
            u32 quadrantPixels = size * size;
            if (format->flipVertical) {
                FUN_0023b260(source, destination + ((format->rows.rowStride * size * bits) >> 3), size, format);
                u32 quadrantBits = quadrantPixels * bits;
                FUN_0023b260(source + (quadrantBits >> 3), destination + (((format->rows.rowStride * size + size) * bits) >> 3), size, format);
                FUN_0023b260(source + ((quadrantBits * 2) >> 3), destination, size, format);
                FUN_0023b260(source + ((quadrantBits * 3) >> 3), destination + ((size * bits) >> 3), size, format);
            } else {
                FUN_0023b260(source, destination, size, format);
                u32 quadrantBits = quadrantPixels * bits;
                FUN_0023b260(source + (quadrantBits >> 3), destination + ((size * bits) >> 3), size, format);
                FUN_0023b260(source + ((quadrantBits * 2) >> 3), destination + ((format->rows.rowStride * size * bits) >> 3), size, format);
                FUN_0023b260(source + ((quadrantBits * 3) >> 3), destination + (((format->rows.rowStride * size + size) * bits) >> 3), size, format);
            }
        }
    } else {
        rt_memcpy(destination, source, bits >> 3);
    }
    return 1;
}
}
