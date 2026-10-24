/* NON_MATCHING: r4/r5 swapped (retail keeps the resource in r4 and the size in r5) and the tail stores are ordered differently from retail */
#include "shard/W6_W6Match8_SpriteTextureResource.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "AsdSDK/AsdDebug.h"

struct SpriteResourceHandle {
    SpriteTextureResource *resource;
};

extern "C" {
void *memAlloc(u32 heap, u32 alignmentClass, u32 flags, u32 size, u32 alignment, s32 kind);
void spriteGroupPlayerSelect(SpriteGroupPlayer *player, s32 group);

// Create a player for a sprite resource: one state per group slot the resource reserved, playing group zero.
SpriteGroupPlayer *handleBlockRefCreate(SpriteResourceHandle *handle)
{
    SpriteTextureResource *resource = handle->resource;

    resource->references++;
    u32 size = sizeof(SpriteGroupPlayer) + resource->stateCapacity * sizeof(SpriteGroupState);
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\AsdSDK\\Source\\Gfx\\Effect\\effP2A.cpp", 150);
    SpriteGroupPlayer *player = static_cast<SpriteGroupPlayer *>(
        memAlloc(ASD_HEAP_EXTRA, ASD_ALIGN_DEFAULT, 0, size, 16, 1));
    player->states = reinterpret_cast<SpriteGroupState *>(player + 1);
    player->resource = &resource->group;
    spriteGroupPlayerSelect(player, 0);
    player->active = 1;
    return player;
}
}
