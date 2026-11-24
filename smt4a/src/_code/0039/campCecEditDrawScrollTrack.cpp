/* NON_MATCHING: 17 lines: with the track's table entry kept (as IV's FUN_00309ec8) and the track sprite chosen by an
 * if/else, the indicator states and the track allocate as retail; what remains is the row offset and the visible
 * height, which retail multiplies and adds separately (mul; add) where the build fuses them into mla. Naming the
 * offset and the height as locals (each used once) is IDENTICAL (wave 90); rejected as single-use names that only
 * break the mla. */
#include "gfx/UiControlDraw.h"
#include "shard/TextureDrawCall.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {
void texDrawTableEntrySized(s32 layer, u32 group, u32 sprite, s32 x, s32 y, s32 width, s32 height, s32 priority);

/* Draw a scroll control with a caller-selected number of track subdivisions. */
void campCecEditDrawScrollTrack(UiControlDrawPosition *position, s32 x, s32 y,
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
    u32 thumb;
    if (trackActive != 0) {
        thumb = 0xf7;
    } else {
        thumb = 0xf6;
    }
    TextureTableEntryIV *track = asdTMTexTableEntryAt(0x2e, thumb);
    s32 height = track->placement->height;
    s32 step = height / subdivisions;
    texDrawTableEntrySized(2, 0x2e, thumb, position->x + x, firstRow * step + y,
                           track->placement->width, height - step * hiddenRows, 101);
}

} /* extern "C" */
