/* NON_MATCHING: scroll-bar draw; retail keeps the list view pointer in r7 (built spills it) and reaches the render-state stack through base+0x1000+0x120 address arithmetic with a conditional restore; calls, float math and tail call efctSetSpeed match */
#include "camp/RenderCtx.h"

/* Sprite frame of the scroll bar's thumb: its offset and a pointer to its size. */
struct ScrollBarFrame {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s16 x;
    /* 0x0A */ s16 y;
    /* 0x0C */ s16 *size;      /* [0] width, [1] track height */
};

/* Retail's draw context carries three more render-state stacks past the shared prefix. */
struct ScrollBarStateStackView {
    u8 prefix[0x1318];
    RenderStateStack stacks[3];
};

extern "C" {
extern RenderCtxA *g_renderCtx;

f32 renderCtxCalculateStereoParallax(RenderCtxA *context, f32 depth);
void efctSetSpeed(f32 speed);
void FUN_001835b4(u32 layer, u32 bank, u32 sprite, s32 x, s32 y, u32 flags);
ScrollBarFrame *FUN_001834a4(u32 bank, u32 sprite);
s32 objectApplyIfUnblocked(void *view);
s32 uiSearchPrimary(void *view);
s32 resourceRunOperationIfUnblocked(void *view);
void FUN_00168e00(s32 x, s32 y, s32 width, s32 height);
u32 renderPopStateStacks(void);

/* Draws a list's scroll bar: the frame, then a thumb sized and placed by the visible fraction of
 * the list. */
void FUN_004042fc(u8 *list, s32 x, s32 y, f32 speed)
{
    void *view = list + 0x28;
    x += (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.26f);
    efctSetSpeed(speed);
    FUN_001835b4(2, 0x32, 0x2A, x, y, 0xC9);
    FUN_001835b4(2, 0x32, 0xC, x, y, 0xC9);

    s32 thumbOffset = 0;
    ScrollBarFrame *frame = FUN_001834a4(0x32, 0xD);
    s32 thumbHeight;
    if (objectApplyIfUnblocked(view) > uiSearchPrimary(view)) {
        f32 ratio = (f32)frame->size[1] / (f32)objectApplyIfUnblocked(view);
        thumbHeight = (s32)((f32)uiSearchPrimary(view) * ratio);
        if (thumbHeight < 1)
            thumbHeight = 1;
        thumbOffset = (s32)((f32)resourceRunOperationIfUnblocked(view) * ratio);
        if (resourceRunOperationIfUnblocked(view) + uiSearchPrimary(view) == objectApplyIfUnblocked(view)
            && thumbOffset + thumbHeight < frame->size[1])
            thumbOffset = frame->size[1] - thumbHeight;
    } else {
        thumbHeight = frame->size[1];
    }

    ScrollBarStateStackView *context = reinterpret_cast<ScrollBarStateStackView *>(g_renderCtx);
    bool restore = false;
    if (context->stacks[0].entries[context->stacks[0].count] == 3) {
        renderStackSet(&context->stacks[0], 0);
        restore = true;
    }
    FUN_00168e00(frame->x + x, frame->y + y + thumbOffset, frame->size[0], thumbHeight);
    FUN_001835b4(2, 0x32, 0xD, x, y, 0xCE);
    context = reinterpret_cast<ScrollBarStateStackView *>(g_renderCtx);
    if (restore)
        renderStackSet(&context->stacks[0], 3);
    renderPopStateStacks();
    efctSetSpeed(1.0f);
}

} /* extern "C" */
