/* NON_MATCHING: texture/file receivers occupy opposite saved registers and ARMCC groups target/flags stores differently from retail. */
#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
extern const char DAT_00409510[];
extern const char DAT_00409520[];
extern const char DAT_0040952c[];
extern const char DAT_0040956c[];
extern const char DAT_00409578[];
extern const char DAT_00409580[];
extern const char DAT_00409588[];
s32 libc_strncmp(const char *first, const char *second, u32 count);
void *asdMemoryAllocAligned(u32 heap, u32 alignment, u32 flags, u32 bytes, u32 auxiliaryAlignment, u32 enabled);
void rt_memcpy(void *destination, const void *source, u32 bytes);

/* Load the texture pixels and compression format embedded in a NW4C-tagged TGA. */
void asdTexTgaLoadNw4c(AsdTexture *texture, const AsdTgaHeader *file, u32, u32 flags)
{
    if (texture == NULL || file == NULL) {
        return;
    }
    const AsdNw4cUserData *user = reinterpret_cast<const AsdNw4cUserData *>(file + 1);
    if (libc_strncmp(user->identifier, DAT_00409510, 16) != 0) {
        return;
    }
    texture->dimensions.height = (u16)(file->heightLow + (file->heightHigh << 8));
    texture->dimensions.width = (u16)(file->widthLow + (file->widthHigh << 8));
    texture->unk08 = flags;
    texture->target = ASDTEXTURE_TARGET_2D;
    const AsdNw4cChunk *chunk = reinterpret_cast<const AsdNw4cChunk *>(reinterpret_cast<const u8 *>(file) + user->offset);
    for (;;) {
        if (libc_strncmp(chunk->identifier, DAT_00409520, 8) == 0) {
            texture->storage.unk28 = chunk->bytes - sizeof(AsdNw4cChunk);
            const void *pixels = chunk + 1;
            asdDebugTrace(DAT_0040952c, 73);
            texture->storage.pixels = asdMemoryAllocAligned(0x10000, 0x100, 0, texture->storage.unk28, 128, 1);
            rt_memcpy(texture->storage.pixels, pixels, texture->storage.unk28);
        }
        if (libc_strncmp(chunk->identifier, DAT_0040956c, 8) == 0) {
            char format[8] = {};
            rt_memcpy(format, chunk + 1, chunk->bytes - sizeof(AsdNw4cChunk));
            if (libc_strncmp(format, DAT_00409578, 8) == 0) {
                texture->image.type = 0x1401;
                texture->image.format = 0x675B;
            } else if (libc_strncmp(format, DAT_00409580, 8) == 0) {
                texture->image.format = 0x675A;
                texture->image.type = 0x1401;
            }
        }
        if (libc_strncmp(chunk->identifier, DAT_00409588, 8) == 0) {
            break;
        }
        chunk = reinterpret_cast<const AsdNw4cChunk *>(reinterpret_cast<const u8 *>(chunk) + chunk->bytes);
    }
}
}
