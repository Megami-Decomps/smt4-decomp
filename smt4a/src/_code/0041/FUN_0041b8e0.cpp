/* NON_MATCHING: arithmetic and calls match; register allocation of the sprite frame/total/position differs and retail interleaves the frame field loads (x/y) differently. */
#include "common.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

struct TimeSource {
    /* 0x00 */ u8 unk00[0x50];
    /* 0x50 */ s32 seconds;
};


extern "C" {
void drawSetColorFromRGBA8(u32 color);
void FUN_00180310(u32 drawContext, s32 x, s32 y, u32 option0, u32 option1, u32 option2, const char *format, ...);
void FUN_00183bb0(void);

// Draw an elapsed time as hours:minutes:seconds, right-aligned against `position`.
void FUN_0041b8e0(u32 unused, TimeSource *source, s32 *position)
{
    TextureTableEntryIV *frame = asdTMTexTableEntryAt(43, 35);
    s32 time = source->seconds;
    drawSetColorFromRGBA8(0xb9d7d7ff);
    s32 hours = time / 3600;
    s32 rest = time % 3600;
    s32 minutes = rest / 60;
    s32 seconds = rest % 60;
    s32 x = position[0] + (frame->x + frame->placement->width);
    x -= 7;
    s32 y = position[1] + frame->y;
    FUN_00180310(0, x, y, 1, 1, 2, "%d", seconds % 10);
    x -= 7;
    FUN_00180310(0, x, y, 1, 1, 2, "%d", seconds / 10);
    x -= 4;
    FUN_00180310(0, x, y, 1, 1, 2, ":");
    x -= 7;
    FUN_00180310(0, x, y, 1, 1, 2, "%d", minutes % 10);
    x -= 7;
    FUN_00180310(0, x, y, 1, 1, 2, "%d", minutes / 10);
    x -= 4;
    FUN_00180310(0, x, y, 1, 1, 2, ":");
    x -= 28;
    FUN_00180310(0, x, y, 1, 4, 2, "%d", hours);
    FUN_00183bb0();
}

}
