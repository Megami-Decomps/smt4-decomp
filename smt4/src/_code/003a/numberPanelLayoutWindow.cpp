#include "ui/NumberPanelWork.h"

struct ScreenPoint {
    f32 x;
    f32 y;
};

extern "C" {
s16 numberPanelGetValue(const NumberPanelWork *panel);
s16 numberPanelGetFirst(const NumberPanelWork *panel);
s16 numberPanelGetSecond(const NumberPanelWork *panel);
void pairCopy(u32 source, ScreenPoint *point);
void FUN_00290994(u32 window, s32 x, s32 y, s32 style, s32 frame0, s32 frame1, s32 frame2, s32 frame3,
                  s32 frame4, s32 frame5, s32 frame6, s32 value, s32 first, s32 second, u32 arg14, s32 arg15);

/* Lays out the panel's window at its stored position with the 0x566-0x56C frame set. */
void numberPanelLayoutWindow(NumberPanelWork *panel, u32 arg)
{
    if (panel->sprite != 0) {
        ScreenPoint point;

        pairCopy(panel->position, &point);
        FUN_00290994(panel->sprite, (s32)point.x, (s32)point.y, 0x1D, 0x56A, 0x56B, 0x56C, 0x566, 0x568, 0x567,
                     0x569, numberPanelGetValue(panel), numberPanelGetFirst(panel), numberPanelGetSecond(panel), arg, 0);
    }
}

} /* extern "C" */
