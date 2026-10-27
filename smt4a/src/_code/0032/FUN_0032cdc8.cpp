#include "shard/W9_W9Match8_WorkRecords.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

/* Local views: the Apocalypse placement flags are a halfword, and the optional
 * request vector lies beyond the recovered IV request prefix. */
struct TexturePlacementViewA {
    s16 x, y;
    u16 mode;
    u8 unk06[6];
    u16 flags;
};
struct TextureDrawExtra {
    u32 words[3];
};
struct TextureDrawRequestViewA {
    TextureDrawRequestPrefixIV base;
    TextureDrawExtra extra;
};
typedef char TextureDrawRequestViewAOffsetsCheck[
    offsetof(TexturePlacementViewA, flags) == 0xC &&
    offsetof(TextureDrawRequestViewA, extra) == 0x30 && sizeof(TextureDrawRequestViewA) == 0x3C ? 1 : -1];

extern "C" {
void FUN_00184efc(TextureTableFilePrefixIV *, TextureTableEntryIV *, TextureDrawRequestViewA *, u32);

// Draw a table texture with its stored origin and an optional three-word draw override.
void FUN_0032cdc8(u32 flags, u32 table, s32 id, u32 argument,
                 TextureDrawPayloadIV payload, const TextureDrawExtra *extra)
{
    TextureTableFilePrefixIV *file = reinterpret_cast<TextureTableFilePrefixIV *>(asdTMTexTableCallFileC(table, id));
    TextureTableEntryIV *entry = &(*file->entries)[id % 1000];
    TexturePlacementViewA *placement = (TexturePlacementViewA *)entry->placement;
    TextureDrawRequestViewA request;
    request.base.flags = flags;
    request.base.argument = argument;
    request.base.payload = payload;
    request.base.reservedValue = 0;
    request.base.x = 0;
    request.base.y = 0;
    request.base.horizontalUnit = 1;
    request.base.verticalUnit = 1;
    if (extra) {
        request.base.flags |= 0x10;
        request.extra = *extra;
    }
    if (placement) {
        if (placement->mode == 0) {
            if (placement->flags & 1) {
                request.base.flags |= 0x8000;
                request.base.x = placement->x;
                request.base.y = placement->y;
            }
        }
        if (placement->mode == 1) {
            request.base.x = placement->x;
            request.base.y = placement->y;
        }
    }
    FUN_00184efc(file, entry, &request, 0);
}
}
