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
    s32 firstArrow = firstActive != 0 ? 0xf3 : 0xf1;
    texDrawTableEntryAtStoredOrigin(2, 0x2e, firstArrow, position->x + x, y, 101);
    s32 secondArrow = secondActive != 0 ? 0xf4 : 0xf2;
    texDrawTableEntryAtStoredOrigin(2, 0x2e, secondArrow, position->x + x, y, 101);
    u32 thumb = trackActive != 0 ? 0xf7 : 0xf6;
    TexturePlacementPrefixIV *size = asdTMTexTableEntryAt(0x2e, thumb)->placement;
    s32 height = size->height;
    s32 step = height / subdivisions;
    texDrawTableEntrySized(2, 0x2e, thumb, position->x + x, step * firstRow + y,
                 size->width, height - step * hiddenRows, 101);
}
}
