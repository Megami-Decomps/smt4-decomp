/* NON_MATCHING: rectangle halfword load and arithmetic scheduling differ from retail. */
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTableEntry.h"
#include "ui/UiTexturePlacement.h"

// Store the layout rectangle's center, using the placement's size when present.
extern "C" void uiStoreTextureEntryCenter(PointDeltaWork *target, u32 table, s32 image)
{
    const TextureTableEntryIV *entry = asdTMTexTableEntryAt(table, image);
    const TexturePlacementPrefixIV *placement = entry->placement;
    if (placement == NULL) {
        s32 centerX = static_cast<u16>(entry->x) + ((entry->width & 0x7FFF) >> 1);
        s32 centerY = static_cast<u16>(entry->y) + ((entry->height & 0x7FFF) >> 1);
        target->x = centerX;
        target->y = centerY;
    } else {
        s32 centerX = static_cast<u16>(entry->x) + placement->width / 2;
        s32 centerY = static_cast<u16>(entry->y) + placement->height / 2;
        target->x = centerX;
        target->y = centerY;
    }
}
