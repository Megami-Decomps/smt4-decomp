#include "ui/NumberPanelWork.h"

extern "C" {
void words2Copy(u32, FloatPoint *);
s32 numberPanelGetValue(NumberPanelWork *work);
s32 numberPanelGetFirst(NumberPanelWork *work);
s32 numberPanelGetSecond(NumberPanelWork *work);
void FUN_004934ac(u32, u32, s32, s32, u32);
void FUN_00344cd0(u32 sprite, s32 x, s32 y, s32 style,
    s32 firstDigit, s32 secondDigit, s32 thirdDigit, s32 leading,
    s32 separator, s32 alternateSeparator, s32 trailing, s32 value,
    s32 first, s32 second, u32 flags, s32 mode);

/* Render the numeric panel using the normal or alternate glyph set. */
void FUN_004941fc(NumberPanelWork *work, u32 flags)
{
    FloatPoint position;
    words2Copy(work->position, &position);
    if (work->kind != 9) {
        FUN_004934ac(work->position, 0x103, (s32)position.x, (s32)position.y, flags);
        FUN_00344cd0(work->sprite, (s32)position.x, (s32)position.y, 0x20,
            0x3D, 0x3E, 0x3F, 0x39, 0x3B, 0x3A, 0x3C,
            numberPanelGetValue(work), numberPanelGetFirst(work), numberPanelGetSecond(work), flags, 0);
    } else {
        FUN_004934ac(work->position, 0x104, (s32)position.x, (s32)position.y, flags);
        FUN_00344cd0(work->sprite, (s32)position.x, (s32)position.y, 0x20,
            0x44, 0x45, 0x46, 0x40, 0x42, 0x41, 0x43,
            numberPanelGetValue(work), numberPanelGetFirst(work), numberPanelGetSecond(work), flags, 0);
    }
}
}
