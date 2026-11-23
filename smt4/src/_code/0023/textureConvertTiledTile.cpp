#include "shard/W6_W6Match7_TextureTile.h"
extern "C" {
u32 gfxTexFormatGetBitsPerPixel(u32 format, u32 type); // declcheck: local (the shared declaration does not compile here or changes this unit)
void __aeabi_memcpy(void *destination, const void *source, u32 bytes); // declcheck: local (the shared declaration does not compile here or changes this unit)

u32 textureConvertTiledTile(const u8 *source, u8 *destination, s32 size, const TextureTileFormat *format)
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
                textureConvertTiledTile(source, destination + ((format->rows.rowStride * size * bits) >> 3), size, format);
                textureConvertTiledTile(source + ((quadrantPixels * bits) >> 3), destination + (((format->rows.rowStride * size + size) * bits) >> 3), size, format);
                textureConvertTiledTile(source + (((quadrantPixels * bits) * 2) >> 3), destination, size, format);
                textureConvertTiledTile(source + (((quadrantPixels * bits) * 3) >> 3), destination + ((size * bits) >> 3), size, format);
            } else {
                textureConvertTiledTile(source, destination, size, format);
                textureConvertTiledTile(source + ((quadrantPixels * bits) >> 3), destination + ((size * bits) >> 3), size, format);
                textureConvertTiledTile(source + (((quadrantPixels * bits) * 2) >> 3), destination + ((format->rows.rowStride * size * bits) >> 3), size, format);
                textureConvertTiledTile(source + (((quadrantPixels * bits) * 3) >> 3), destination + (((format->rows.rowStride * size + size) * bits) >> 3), size, format);
            }
        }
    } else {
        __aeabi_memcpy(destination, source, bits >> 3);
    }
    return 1;
}
}
