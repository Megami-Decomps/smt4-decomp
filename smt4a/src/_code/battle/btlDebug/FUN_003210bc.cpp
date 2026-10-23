/* NON_MATCHING: overlay-relative addresses, saved registers and threshold-constant hoisting differ. */
#include "battle/btlUI.h"
#include "camp/RenderCtx.h"
#include "ui/UiSpriteState.h"
#include <stdlib.h>

extern "C" {
extern RenderCtx *g_renderCtx;
extern f32 DAT_00573c00;
void FUN_00157558(RenderCtx *context);
f32 renderCtxCalculateStereoParallax(RenderCtx *context, f32 depth);
void FUN_001634b4(UiSpriteState *sprite, f32 parallax);
s32 btlFloatingNumberComparePriorityDescending(const void *, const void *);

void FUN_003210bc(BtlUiA *ui, s32 eye)
{
    struct Number {
        UiSpriteState digits[5];
        u8 padding2BC[0x124];
        u8 active;
        s8 eye;
        u8 padding3E2[2];
        u32 priority;
        u8 padding3E8[0x10];
        s32 value;
        u8 padding3FC[4];
    };
    struct Label {
        UiSpriteState sprite;
        u8 padding8C[0xC];
        u8 active;
        s8 eye;
        u8 padding9A[6];
    };
    struct OverlayView {
        u8 prefix[0x75B4];
        Number numbers[16];
        Label labels[16];
    };
    typedef char OverlayOffsets[sizeof(Number) == 0x400 && sizeof(Label) == 0xA0 &&
        offsetof(OverlayView, labels) == 0xB5B4 ? 1 : -1];
    OverlayView *overlays = reinterpret_cast<OverlayView *>(ui);
    struct SortEntry { s8 index; u8 active; u8 priority; u8 padding; } order[16];
    FUN_00157558(g_renderCtx);
    s32 parallax = 0;
    if (eye != 0)
        parallax = (s32)renderCtxCalculateStereoParallax(g_renderCtx, DAT_00573c00);
    for (s32 index = 0; index < 16; ++index) {
        order[index].index = index;
        order[index].priority = overlays->numbers[index].priority;
        order[index].active = overlays->numbers[index].active != 0;
    }
    qsort(order, 16, sizeof(SortEntry), btlFloatingNumberComparePriorityDescending);
    for (s32 position = 0; position < 16; ++position) {
        s32 index = order[position].index;
        Number *number = &overlays->numbers[index];
        if (number->active && number->eye == eye) {
            if (number->value >= 10000) FUN_001634b4(&number->digits[4], (f32)parallax);
            if (number->value >= 1000) FUN_001634b4(&number->digits[3], (f32)parallax);
            if (number->value >= 100) FUN_001634b4(&number->digits[2], (f32)parallax);
            if (number->value >= 10) FUN_001634b4(&number->digits[1], (f32)parallax);
            FUN_001634b4(&number->digits[0], (f32)parallax);
        }
        Label *label = &overlays->labels[index];
        if (label->active && label->eye == eye)
            FUN_001634b4(&label->sprite, (f32)parallax);
    }
}
}
