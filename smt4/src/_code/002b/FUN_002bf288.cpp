/* NON_MATCHING: Texture payload-copy registers and stack-frame layout differ. */
#include "common.h"
#include "shard/W9_W9Match8_WorkRecords.h"

extern "C" TextureTableFilePrefixIV *asdTMTexTableCallFileA(u32 tableId, s32 entryId);
extern "C" s32 FUN_002af63c(TextureTableFilePrefixIV *file,
                           TextureTableEntryIV *entry,
                           TextureDrawRequestPrefixIV *request);

extern "C" void FUN_002bf288(u32 flags, u32 tableId, s32 entryId,
                            u32 argument, TextureDrawPayloadIV payload)
{
    TextureTableFilePrefixIV *file = asdTMTexTableCallFileA(tableId, entryId);
    TextureTableEntryIV *entry = *file->entries + entryId % 1000;
    const TexturePlacementPrefixIV *placement = entry->placement;

    TextureDrawRequestPrefixIV request;
    request.flags = flags;
    request.argument = argument;
    request.payload = payload;
    request.reservedValue = 0;
    request.x = 0;
    request.y = 0;
    request.horizontalUnit = 1;
    request.verticalUnit = 1;

    if (placement != 0) {
        if (placement->mode == 0) {
            if ((placement->flags & 1) != 0) {
                request.flags = flags | 0x8000;
                request.x = placement->x;
                request.y = placement->y;
            }
        }
        if (placement->mode == 1) {
            request.x = placement->x;
            request.y = placement->y;
        }
    }

    FUN_002af63c(file, entry, &request);
}
