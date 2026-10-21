/* NON_MATCHING: input/count registers swap, constructor stores retain different pointer bases, and the paired flag tests fold to one TST with the cold tail inlined. -O2 candidate. */
#include "shard/W6_W6Match8_SpriteTextureResource.h"
#include "shard/W6_W6Match2_TextureHolder.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
void *memAlloc(u32 heap, u32 alignmentClass, u32 flags, u32 size, u32 alignment, s32 kind);
void *rt_memcpy(void *destination, const void *source, u32 size);
s32 texIsStexFile(const void *image);
void spriteGroupPlayerSelect(SpriteGroupPlayer *player, s32 group);

// Copy a sprite-group file, create its textures and start playback on group zero.
SpriteGroupPlayer *spriteGroupCreateFromFile(const SpriteGroupFileHeader *file)
{
    SpriteTextureResource *resource = NULL;
    if (file != NULL) {
        const u8 *fileData = reinterpret_cast<const u8 *>(file);
        const s32 *table = reinterpret_cast<const s32 *>(fileData + file->dataSize);
        s32 textureCount = *table++;
        u32 size = sizeof(SpriteTextureResource) + file->dataSize +
                   textureCount * sizeof(AsdTexture *);
        asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Gfx\\Effect\\effP2A.cpp", 284);
        resource = static_cast<SpriteTextureResource *>(
            memAlloc(ASD_HEAP_EXTRA, ASD_ALIGN_DEFAULT, 0, size, 16, 1));
        resource->allocation = resource;
        rt_memcpy(resource + 1, file, file->dataSize);
        resource->textureCount = textureCount;
        SpriteGroupFileHeader *header = reinterpret_cast<SpriteGroupFileHeader *>(resource + 1);
        resource->group.data = reinterpret_cast<u8 *>(header);
        resource->group.groups = reinterpret_cast<SpriteGroupDefinition *>(header + 1);
        resource->textures = reinterpret_cast<SpriteTextureCache *>(
            resource->group.data + header->dataSize)->entries;
        for (s32 index = 0; index < textureCount; ++index, ++table) {
            const void *image = fileData + *table;
            if (texIsStexFile(image)) {
                resource->textures[index] = asdEffectTextureCreate(image);
            } else {
                resource->textures[index] = textureCreateFromImage(image);
            }
        }
        resource->references = 1;
        resource->stateCapacity = 1;
        s32 groupCount = reinterpret_cast<SpriteGroupFileHeader *>(resource->group.data)->groupCount;
        for (s32 index = 0; index < groupCount; ++index) {
            const SpriteGroupDefinition *group = &resource->group.groups[index];
            if (group->kind & 0x10000000) {
                resource->stateCapacity = group->count;
            } else if ((group->flags & 0x40) || (group->flags & 0x80)) {
                resource->stateCapacity = 2;
            }
        }
    }
    u32 size = sizeof(SpriteGroupPlayer) + resource->stateCapacity * sizeof(SpriteGroupState);
    asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Gfx\\Effect\\effP2A.cpp", 122);
    SpriteGroupPlayer *player = static_cast<SpriteGroupPlayer *>(
        memAlloc(ASD_HEAP_EXTRA, ASD_ALIGN_DEFAULT, 0, size, 16, 1));
    player->states = reinterpret_cast<SpriteGroupState *>(player + 1);
    player->resource = &resource->group;
    spriteGroupPlayerSelect(player, 0);
    player->active = 1;
    return player;
}
}
