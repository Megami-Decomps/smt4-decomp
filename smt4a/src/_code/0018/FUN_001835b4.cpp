/* NON_MATCHING: payload destination uses r4 instead of lr (register allocation only). */
#include "shard/W9_W9Match8_WorkRecords.h"

/* Local view: the Apocalypse placement flags are a halfword. */
struct TexturePlacementViewA {
    s16 x, y;
    u16 mode;
    u8 unk06[6];
    u16 flags;
};

/* The request is 0x40 bytes; only the prefix is recovered. */
struct TextureDrawRequestViewB {
    TextureDrawRequestPrefixIV base;
    u8 unk30[0x10];
};

extern "C" {
TextureTableFilePrefixIV *asdTMTexTableCallFileC(u32 table, s32 id);
void FUN_00184efc(TextureTableFilePrefixIV *, TextureTableEntryIV *, TextureDrawRequestViewB *, u32);

// Draw a table texture with its stored origin.
void FUN_001835b4(u32 flags, u32 table, s32 id, u32 argument, TextureDrawPayloadIV payload)
{
    TextureTableFilePrefixIV *file = asdTMTexTableCallFileC(table, id);
    TextureTableEntryIV *entry = &(*file->entries)[id % 1000];
    TexturePlacementViewA *placement = (TexturePlacementViewA *)entry->placement;
    TextureDrawRequestViewB request;
    request.base.flags = flags;
    request.base.argument = argument;
    request.base.payload = payload;
    request.base.reservedValue = 0;
    request.base.x = 0;
    request.base.y = 0;
    request.base.horizontalUnit = 1;
    request.base.verticalUnit = 1;
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

} /* extern "C" */
