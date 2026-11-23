#include "shard/TextureDrawCall.h"
#include "saveLoadUI/SaveSlotRow.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {
void FUN_00169a1c(u32 sprite, s32 x, s32 y, s32 layer);
void uiDrawItemOrStatusIcon(s32 id, s32 x, s32 y, s32 style, s32 option);

/* Draws the item detail frame, the ownership indicator and up to three attached icons. */
void saveSlotRowDrawIcons(const SaveSlotRow *, const SaveSlotRecord *item, const UiScaledDrawPosition *position)
{
    for (s32 index = 0; index < 4; ++index)
        texDrawTableEntryAtStoredOrigin(2, 0x2B, index + 0x12, position->x, position->y, 0xB);
    TextureTableEntryIV *anchor = asdTMTexTableEntryAt(0x2B, 0x18);
    texDrawTableEntryAtStoredOrigin(2, 0x2B, 0x16, position->x + anchor->x, position->y + anchor->y, 0x15);
    if (item->owned == 0)
        FUN_00169a1c(0x25D, position->x + anchor->x, position->y + anchor->y, 2);
    else
        FUN_003ca87c(position->x + anchor->x, position->y + anchor->y, 2);
    for (s32 index = 0; index < 3; ++index) {
        if (item->iconIds[index] != 0) {
            TextureTableEntryIV *icon = asdTMTexTableEntryAt(0x2B, index + 0x19);
            texDrawTableEntryAtStoredOrigin(2, 0x2B, 0x16, position->x + icon->x, position->y + icon->y, 0xB);
            uiDrawItemOrStatusIcon(item->iconIds[index], position->x + icon->x, position->y + icon->y, 0x15, 0);
        }
    }
}
}
