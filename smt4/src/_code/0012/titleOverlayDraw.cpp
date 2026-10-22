/* NON_MATCHING: final render-state pop becomes a tail call; retail keeps a shared VFP/register epilogue after BL. */
#include "common.h"
#include "camp/RenderCtx.h"
#include "shard/W6_W6Match8_TitleOverlay.h"


extern "C" {
extern RenderCtx *g_titleScene;
u32 FUN_002c5d80(u32 slot, u32 flags);
void FUN_002bee04(RenderCtx *context, s32 stack, u32 value);
void efctSetSpeed(f32 speed);
void FUN_002bed3c();
f32 FUN_002ba12c(RenderCtx *context, f32 scale);
s32 packNibblesAndByte(u32 high, u32 low, u32 byte);
void effectRenderTransformedInstance(TitleDrawElement *element, f32 value);
s32 FUN_002bedb0(RenderCtx *context, s32 stack);
}

static __inline void setTitleRenderState(RenderCtx *context, s32 state)
{
    RenderStateStack *stack = &context->stackB;
    s32 previous = stack->entries[stack->count];
    stack->entries[stack->count] = state;
    if (stack->dirty || previous != state) {
        stack->apply(state);
        stack->dirty = 0;
    }
}

// Draw the visible title overlay, using a separate render state for its special-mode element.
extern "C" void titleOverlayDraw(TitleOverlay *overlay)
{
    if (overlay->visible) {
        u32 value = FUN_002c5d80(1, 0);
        FUN_002bee04(g_titleScene, 3, value);
        efctSetSpeed(1.0f);
        FUN_002bed3c();
        s32 frame = static_cast<s32>(FUN_002ba12c(g_titleScene, 0.27f));
        if (overlay->mode == 7 || overlay->mode == 8 || overlay->mode == 9) {
            RenderCtx *context = g_titleScene;
            setTitleRenderState(context, packNibblesAndByte(6, 1, 0));
            effectRenderTransformedInstance(&overlay->elements[6], static_cast<f32>(frame));
            context = g_titleScene;
            setTitleRenderState(context, packNibblesAndByte(6, 7, 0));
        }
        effectRenderTransformedInstance(&overlay->elements[0], static_cast<f32>(frame));
        effectRenderTransformedInstance(&overlay->elements[1], static_cast<f32>(frame));
        effectRenderTransformedInstance(&overlay->elements[2], static_cast<f32>(frame));
        effectRenderTransformedInstance(&overlay->elements[3], static_cast<f32>(frame));
        effectRenderTransformedInstance(&overlay->elements[5], static_cast<f32>(frame));
        FUN_002bedb0(g_titleScene, 3);
    }
}
