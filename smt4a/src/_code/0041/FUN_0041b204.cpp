/* NON_MATCHING: item detail sprites restored; common indicator coordinate loads and conditional branch placement differ. */
#include "shard/S1ListPanel.h"

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
void FUN_0018152c(s32 id, s32 x, s32 y, s32 style, s32 option);
SpriteInfo *FUN_001834a4(s32 group, s32 sprite);
void FUN_001835b4(s32 layer, s32 group, s32 sprite, s32 x, s32 y, s32 flags);
void FUN_003ca87c(s32 x, s32 y, s32 layer);

// Draw item detail framing, the ownership indicator and up to three attached icons.
void FUN_0041b204(u32 unused, const ItemDetailDrawView *item, const s32 position[2])
{
    for (s32 index = 0; index < 4; ++index)
        FUN_001835b4(2, 0x2B, index + 0x12, position[0], position[1], 0xB);
    SpriteInfo *anchor = FUN_001834a4(0x2B, 0x18);
    FUN_001835b4(2, 0x2B, 0x16, position[0] + anchor->x, anchor->y + position[1], 0x15);
    s32 indicatorX = position[0] + anchor->x;
    s32 indicatorY = position[1] + anchor->y;
    if (item->owned != 0)
        FUN_003ca87c(indicatorX, indicatorY, 2);
    else
        FUN_00169a1c(0x25D, indicatorX, indicatorY, 2);
    for (s32 index = 0; index < 3; ++index) {
        if (item->ids[index] != 0) {
            SpriteInfo *icon = FUN_001834a4(0x2B, index + 0x19);
            FUN_001835b4(2, 0x2B, 0x16, position[0] + icon->x, icon->y + position[1], 0xB);
            FUN_0018152c(item->ids[index], position[0] + icon->x, icon->y + position[1], 0x15, 0);
        }
    }
}
}
