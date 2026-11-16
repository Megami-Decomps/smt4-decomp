#include "common.h"
#include <stddef.h>

/* IV's navigation category selection work: the per-screen refresh requests sit at 0x5A8C. */
struct NaviCategorySelectionWorkIV {
    /* 0x0000 */ u8 unk0000[0x10];
    /* 0x0010 */ u32 flags;
    /* 0x0014 */ u8 unk0014[0x5A78];
    /* 0x5A8C */ u8 refresh[2]; /* one redraw request per screen */
};
typedef char NaviCategorySelectionWorkIVOffsets[
    offsetof(NaviCategorySelectionWorkIV, flags) == 0x10 &&
    offsetof(NaviCategorySelectionWorkIV, refresh) == 0x5A8C ? 1 : -1];

extern "C" {
void FUN_0039c57c(NaviCategorySelectionWorkIV *work, u32 category);

/* Selects the category, clears the 0x10 flag and requests a redraw of both screens. */
void naviMainSelectCategoryAndRefresh(NaviCategorySelectionWorkIV *work, u32 category)
{
    FUN_0039c57c(work, category);
    work->flags &= ~0x10u;
    for (s32 screen = 0; screen < 2; screen++) {
        work->refresh[screen] = 1;
    }
}
}
