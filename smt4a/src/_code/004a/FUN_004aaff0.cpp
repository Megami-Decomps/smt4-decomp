/* NON_MATCHING: float conversion/division scheduling and final multiply-subtract contraction differ. */
#include "ui/NumberAlignment.h"
extern "C" {
NumberAlignmentMetric *FUN_001834a4(u32 file, u32 index);

// Center a number using the digit width and the width of the surrounding label.
s32 FUN_004aaff0(NumberAlignmentWindow *window, s32 index)
{
    s32 value = window->slots[index].value;
    NumberAlignmentMetric *labelMetric = FUN_001834a4(13, 1048);
    NumberAlignmentMetric *digitMetric = FUN_001834a4(13, 1054);
    f32 digitWidth = (f32)*digitMetric->value;
    f32 labelWidth = (f32)*labelMetric->value;
    f32 totalWidth = labelWidth + digitWidth * 5.0f;
    s32 digits = 1;
    for (; digits < 6; ++digits) {
        value /= 10;
        if (value <= 0)
            break;
    }
    return (s32)(-((f32)(5 - digits) * digitWidth) +
        (totalWidth - digitWidth * (f32)digits) * 0.5f);
}
}
