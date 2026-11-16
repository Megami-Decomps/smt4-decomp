/* NON_MATCHING: first indicator state spills; retail retains it in fp, changing the remaining register allocation. */
#include "gfx/UiControlDraw.h"
#include "shard/TextureDrawCall.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {
void texDrawTableEntrySized(s32 layer, u32 group, u32 sprite, s32 x, s32 y, s32 width, s32 height, s32 priority);

/* Draw a scroll control with a caller-selected number of track subdivisions. */
void FUN_0039a1b8(UiControlDrawPosition *position, s32 x, s32 y,
                 u32 firstActive, u32 secondActive, u32 trackActive, u32 unused,
                 s32 firstRow, s32 rowCount, s32 subdivisions)
{
    s32 hiddenRows = rowCount - 11;
    texDrawTableEntryAtStoredOrigin(2, 0x2e, 0xf8, position->x + x, y, 100);
    texDrawTableEntryAtStoredOrigin(2, 0x2e, 0xf5, position->x + x, y, 100);
    texDrawTableEntryAtStoredOrigin(2, 0x2e, firstActive ? 0xf3 : 0xf1, position->x + x, y, 101);
    texDrawTableEntryAtStoredOrigin(2, 0x2e, secondActive ? 0xf4 : 0xf2, position->x + x, y, 101);
    u32 sprite = trackActive ? 0xf7 : 0xf6;
    TexturePlacementPrefixIV *size = asdTMTexTableEntryAt(0x2e, sprite)->placement;
    s32 height = size->height;
    s32 rowHeight = height / subdivisions;
    texDrawTableEntrySized(2, 0x2e, sprite, position->x + x, firstRow * rowHeight + y,
                 size->width, height - rowHeight * hiddenRows, 101);
}
}
