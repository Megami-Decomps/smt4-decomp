/* NON_MATCHING: scissor state caching saves an extra register and changes the stack frame and slot-clear sequence. */
/* Applies a panel-relative scissor rectangle, or clears its render-context scissor slot. */
#include "common.h"

extern "C" {
void rectRecRead(u32 table, u32 id, s32 *x, s32 *y, s32 *width, s32 *height);
void words2Copy(const void *source, void *destination);
void renderSetClippedScissor(s32 x, s32 y, s32 width, s32 height);
extern void *g_renderCtx;

void FUN_0048b420(void *panel, s32 enabled)
{
    if (enabled) {
        s32 x, y, width, height;
        struct Point { f32 x, y; } offset;
        rectRecRead(19, 4004, &x, &y, &width, &height);
        words2Copy((u8 *)panel + 0x4D0, &offset);
        x = (s32)(offset.x + (f32)x);
        y = (s32)(offset.y + (f32)y);
        renderSetClippedScissor(x, y, width, height);
        return;
    }
    struct ScissorState {
        u32 index;
        u32 unk04;
        u32 slots[4];
        u8 active;
        u8 unk19[3];
        void (*refresh)(u32 enabled);
    };
    /* This render-context tail is beyond the currently shared context prefix. */
    ScissorState *state = (ScissorState *)((u8 *)g_renderCtx + 0x1318);
    u32 previous = state->slots[state->index];
    state->slots[state->index] = 0;
    if (state->active || previous != 0) {
        state->refresh(0);
        state->active = 0;
    }
}
}
