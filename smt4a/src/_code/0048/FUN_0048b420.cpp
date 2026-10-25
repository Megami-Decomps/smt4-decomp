/* NON_MATCHING: canonical stack replacement matches the frame and clear sequence; context pointer stays in r0 and its tail address is formed before the zero argument, unlike retail. */
/* Applies a panel-relative scissor rectangle, or clears its render-context scissor slot. */
#include "gfx/RenderStateStack.h"

extern "C" {
void words2Copy(const void *source, void *destination);
void renderSetClippedScissor(s32 x, s32 y, s32 width, s32 height);
extern void *g_renderCtx;

void FUN_0048b420(void *panel, s32 enabled)
{
    if (enabled) {
        s32 x, y, width, height;
        struct Point { f32 x, y; } offset;
        rectRecRead(19, 4004, &x, &y, reinterpret_cast<u32 *>(&width), reinterpret_cast<u32 *>(&height));
        words2Copy((u8 *)panel + 0x4D0, &offset);
        x = (s32)(offset.x + (f32)x);
        y = (s32)(offset.y + (f32)y);
        renderSetClippedScissor(x, y, width, height);
        return;
    }
    RenderStateStack *state = (RenderStateStack *)((u8 *)g_renderCtx + 0x1318);
    renderStackSet(state, 0);
}
}
