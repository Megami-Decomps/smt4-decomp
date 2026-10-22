/* NON_MATCHING: texture/file receivers occupy opposite saved registers and armcc groups target/flags stores differently from retail. */
#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"
#include "AsdSDK/AsdDebug.h"

struct Nw4cTgaHeader {
    u8 unk00[12];
    u8 widthLow, widthHigh; // 0x0c
    u8 heightLow, heightHigh; // 0x0e
    u8 depth, descriptor; // 0x10
};
struct Nw4cUserData {
    char identifier[16];
    u32 offset; // 0x10
};
struct Nw4cChunkHeader {
    char identifier[8];
    u32 bytes; // 0x08
};
extern "C" {
extern const char DAT_0053d218[];
extern const char DAT_0053d228[];
extern const char DAT_0053d234[];
extern const char DAT_0053d268[];
extern const char DAT_0053d274[];
extern const char DAT_0053d27c[];
extern const char DAT_0053d284[];
s32 libc_strncmp(const char *first, const char *second, u32 count);
void *asdMemoryAllocAligned(u32 heap, u32 alignment, u32 flags, u32 bytes, u32 auxiliaryAlignment, u32 enabled);
void rt_memcpy(void *destination, const void *source, u32 bytes);
}

// Load Nintendo's embedded texture-data and format chunks from a NW4C-tagged TGA.
extern "C" void asdTexTgaLoadNw4c(AsdTexture *texture, const Nw4cTgaHeader *file, u32, u32 flags)
{
    if (texture == NULL || file == NULL)
        return;
    const Nw4cUserData *user = reinterpret_cast<const Nw4cUserData *>(file + 1);
    if (libc_strncmp(user->identifier, DAT_0053d218, 16) != 0)
        return;
    texture->dimensions.height = static_cast<u16>(file->heightLow + (file->heightHigh << 8));
    texture->dimensions.width = static_cast<u16>(file->widthLow + (file->widthHigh << 8));
    texture->unk08 = flags;
    texture->target = ASDTEXTURE_TARGET_2D;
    const Nw4cChunkHeader *chunk = reinterpret_cast<const Nw4cChunkHeader *>(reinterpret_cast<const u8 *>(file) + user->offset);
    for (;;) {
        if (libc_strncmp(chunk->identifier, DAT_0053d228, 8) == 0) {
            texture->storage.unk28 = chunk->bytes - sizeof(Nw4cChunkHeader);
            const void *pixels = chunk + 1;
            asdDebugTrace(DAT_0053d234, 73);
            texture->storage.pixels = asdMemoryAllocAligned(0x10000, 0x100, 0, texture->storage.unk28, 128, 1);
            rt_memcpy(texture->storage.pixels, pixels, texture->storage.unk28);
        }
        if (libc_strncmp(chunk->identifier, DAT_0053d268, 8) == 0) {
            char format[8] = {};
            rt_memcpy(format, chunk + 1, chunk->bytes - sizeof(Nw4cChunkHeader));
            if (libc_strncmp(format, DAT_0053d274, 8) == 0) {
                texture->image.type = 0x1401;
                texture->image.format = 0x675b;
            } else if (libc_strncmp(format, DAT_0053d27c, 8) == 0) {
                texture->image.format = 0x675a;
                texture->image.type = 0x1401;
            }
        }
        if (libc_strncmp(chunk->identifier, DAT_0053d284, 8) == 0)
            break;
        chunk = reinterpret_cast<const Nw4cChunkHeader *>(reinterpret_cast<const u8 *>(chunk) + chunk->bytes);
    }
}
