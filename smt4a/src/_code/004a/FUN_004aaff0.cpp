#include "ui/NumberAlignment.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

/* Centers a number using the digit width and the width of the surrounding label. */
s32 FUN_004aaff0(NumberAlignmentWindow *window, s32 index)
{
    s32 value = window->slots[index].value;
    TextureTableEntryIV *labelMetric = asdTMTexTableEntryAt(13, 1048);
    TextureTableEntryIV *digitMetric = asdTMTexTableEntryAt(13, 1054);
    f32 digitWidth = (f32)digitMetric->placement->width;
    f32 labelWidth = (f32)labelMetric->placement->width;
    f32 totalWidth = labelWidth + digitWidth * 5.0f;
    s32 digits = 1;
    for (s32 i = 0; i < 5; ++i) {
        value /= 10;
        if (value <= 0) {
            break;
        }
        ++digits;
    }
    f32 offset = -((f32)(5 - digits) * digitWidth);
    f32 center = (totalWidth - digitWidth * (f32)digits) * 0.5f;
    return (s32)(offset + center);
}

} /* extern "C" */
