#include "ui/NaviCategorySelection.h"

extern "C" {
void FUN_0048c09c(NaviCategorySelectionWork *work, u32 category);

/* Selects the category, clears the 0x10 flag and requests a redraw of both screens. */
void FUN_0048b86c(NaviCategorySelectionWork *work, u32 category)
{
    FUN_0048c09c(work, category);
    work->flags &= ~0x10u;
    for (s32 screen = 0; screen < 2; screen++) {
        work->refresh[screen] = 1;
    }
}
}
