#include "shard/TextureDrawCall.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

namespace {
struct ItemDetailDrawView {
    u8 prefix[0x5C];
    s16 ids[3];
    u8 padding[9];
    u8 owned;
};
}
extern "C" {
void FUN_00169a1c(u32 sprite, s32 x, s32 y, s32 layer);
void uiDrawItemOrStatusIcon(s32 id, s32 x, s32 y, s32 style, s32 option);

/* Draws the item detail frame, the ownership indicator and up to three attached icons. */
void FUN_0041b204(u32 unused, const ItemDetailDrawView *item, const s32 position[2])
{
    for (s32 index = 0; index < 4; ++index)
        texDrawTableEntryAtStoredOrigin(2, 0x2B, index + 0x12, position[0], position[1], 0xB);
    TextureTableEntryIV *anchor = asdTMTexTableEntryAt(0x2B, 0x18);
    texDrawTableEntryAtStoredOrigin(2, 0x2B, 0x16, position[0] + anchor->x, position[1] + anchor->y, 0x15);
    if (item->owned == 0)
        FUN_00169a1c(0x25D, position[0] + anchor->x, position[1] + anchor->y, 2);
    else
        FUN_003ca87c(position[0] + anchor->x, position[1] + anchor->y, 2);
    for (s32 index = 0; index < 3; ++index) {
        if (item->ids[index] != 0) {
            TextureTableEntryIV *icon = asdTMTexTableEntryAt(0x2B, index + 0x19);
            texDrawTableEntryAtStoredOrigin(2, 0x2B, 0x16, position[0] + icon->x, position[1] + icon->y, 0xB);
            uiDrawItemOrStatusIcon(item->ids[index], position[0] + icon->x, position[1] + icon->y, 0x15, 0);
        }
    }
}
}
