/* NON_MATCHING: Surface-selector load register, one clamp move and the three render-state push register schedules differ. */
#include "camp/RenderCtx.h"

/* Scissor stacks follow the shared rendering-context prefix. */
struct ScissorContextView {
    u8 unk0000[0x1318];
    RenderStateStack mode;
    RenderStateStack lower;
    RenderStateStack upper;
};
typedef char ScissorOffsetsCheck[offsetof(ScissorContextView, lower) == 0x1338 &&
    offsetof(ScissorContextView, upper) == 0x1358 && sizeof(ScissorContextView) == 0x1378 ? 1 : -1];


extern "C" {
extern RenderCtxA *g_renderCtx;
u32 FUN_00169d8c(u32 selector);
u32 FUN_00169db4(u32 selector);
s32 asdGxPresetsGetEnable(u32 selector);
s32 stateValuesGetBySelector(u32 selector);

u32 FUN_00168e00(s32 x, s32 y, s32 width, s32 height)
{
    u32 selector = g_renderCtx->stereoMode;
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
    renderStackPush(&((ScissorContextView *)g_renderCtx)->lower, (u32)lowerY | ((u32)lowerX << 16));
    renderStackPush(&((ScissorContextView *)g_renderCtx)->upper, (u32)upperY | ((u32)upperX << 16));
    renderStackPush(&((ScissorContextView *)g_renderCtx)->mode, 3);
    return 1;
}
}
