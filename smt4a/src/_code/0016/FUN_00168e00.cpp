/* NON_MATCHING: the clamp computations are scheduled differently and the three render-state pushes use other registers. */
#include "camp/RenderCtx.h"
#include "camp/RenderCtxA.h"

extern "C" {
u32 FUN_00169d8c(u32 selector);
u32 FUN_00169db4(u32 selector);
u32 asdGxPresetsGetEnable(u32 selector);
s32 stateValuesGetBySelector(u32 selector);

u32 FUN_00168e00(s32 x, s32 y, s32 width, s32 height)
{
    u32 selector = renderCtxGetStereoMode(g_renderCtx);
    s32 maxX = FUN_00169d8c(selector) - 1;
    s32 maxY = FUN_00169db4(selector) - 1;
    switch (asdGxPresetsGetEnable(selector)) {
    case 0x500:
        break;
    case 0x501:
        if (stateValuesGetBySelector(selector) != 0) {
            y *= 2;
            height *= 2;
        } else {
            maxY /= 2;
        }
        break;
    }
    s32 lowerX = maxX - (x + width) + 1;
    s32 upperX = maxX - x;
    if (lowerX < 0) {
        lowerX = 0;
    }
    if (upperX < 0) {
        upperX = 0;
    }
    if (lowerX > maxX) {
        lowerX = maxX;
    }
    if (upperX > maxX) {
        upperX = maxX;
    }
    s32 lowerY = maxY - (y + height) + 1;
    s32 upperY = maxY - y;
    if (lowerY < 0) {
        lowerY = 0;
    }
    if (upperY < 0) {
        upperY = 0;
    }
    if (lowerY > maxY) {
        lowerY = maxY;
    }
    if (upperY > maxY) {
        upperY = maxY;
    }
    renderStackPush(g_renderCtx->stacks + RENDER_STACK_SCISSOR_MINIMUM, (u32)lowerY | ((u32)lowerX << 16));
    renderStackPush(g_renderCtx->stacks + RENDER_STACK_SCISSOR_MAXIMUM, (u32)upperY | ((u32)upperX << 16));
    renderStackPush(g_renderCtx->stacks + RENDER_STACK_SCISSOR, 3);
    return 1;
}
}
