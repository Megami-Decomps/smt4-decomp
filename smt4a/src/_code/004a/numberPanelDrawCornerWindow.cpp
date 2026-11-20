#include "ui/NumberPanelWork.h"

extern "C" {
void words2Copy(u32, FloatPoint *); // declcheck: local (NumberPanelWork holds the position as a u32 handle, as in FUN_004941fc)
s16 windowRegionGetLeft(const void *region);
s16 windowRegionGetTop(const void *region);
s16 windowRegionGetWidth(const void *region);
void uiDrawTableTextureAtRectCorner(u32, u32, s32, s32, u32); // declcheck: local (as in FUN_004941fc)
void uiDrawListScrollBar(u32 sprite, s32 x, s32 y, s32 style,
    s32 firstDigit, s32 secondDigit, s32 thirdDigit, s32 leading,
    s32 separator, s32 alternateSeparator, s32 trailing, s32 value,
    s32 first, s32 second, u32 flags, s32 mode);

/* Draws the panel's corner texture and scroll bar at its stored position. */
void numberPanelDrawCornerWindow(NumberPanelWork *panel, u32 color)
{
    if (panel->sprite != 0) {
        FloatPoint position;
        words2Copy(panel->position, &position);
        uiDrawTableTextureAtRectCorner(panel->position, 0x5D5, (s32)position.x, (s32)position.y, color);
        uiDrawListScrollBar(panel->sprite, (s32)position.x, (s32)position.y,
                     20, 0x56A, 0x56B, 0x56C, 0x566, 0x568, 0x567, 0x569,
                     windowRegionGetWidth(panel), windowRegionGetLeft(panel), windowRegionGetTop(panel), color, 0);
    }
}

} /* extern "C" */
