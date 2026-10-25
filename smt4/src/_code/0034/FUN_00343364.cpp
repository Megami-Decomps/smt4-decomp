/* NON_MATCHING: register allocation: this build hoists the address of the stereo-mode field (one more live register, so the nibble spills to the stack) where retail reloads it from the context base */
#include "camp/RenderCtx.h"

extern "C" {
u32 FUN_002c15ac(u32 mode);
u32 asdGxPresetsGetByKind(u32 mode);
void FUN_002c1b64(RenderCtx *context, u32 preset);
s32 FUN_002c5d80(u32 kind, u8 enabled);
s32 FUN_002865c0(u32 kind, f32 value);
s32 flagsPackFourBooleans(u8 first, u8 second, u8 third, u8 fourth);
s32 packNibblesAndByte(u32 first, u32 second, u32 third);
s32 FUN_00310578(u32 kind, u32 value, u32 alpha);
s32 packThreeNibbles(u32 first, u32 second, u32 third);
void FUN_002b7638(u32 first, u32 second, u32 third, u32 fourth, f32 x, f32 y, f32 width, f32 height, f32 scale);

/* Fills the whole screen with `color` under a temporary render state: pushes the blend, mask and
   flag states on the draw context, draws the full-screen rectangle, and pops them again. */
void FUN_00343364(RenderCtx *context, u32 color, u32 alpha, u32 flags, f32 scale)
{
    u8 first = 0;
    u8 second = 0;
    u32 nibble = 0;
    u32 savedPreset = context->depthStacks.selectedPreset;
    f32 width = (f32)FUN_002c15ac(context->stereoMode);
    f32 height = (f32)asdGxPresetsGetByKind(context->stereoMode);
    if ((flags & 1) != 0) {
        first = 1;
    }
    if ((flags & 2) != 0) {
        second = 1;
    }
    if ((flags & 4) != 0) {
        nibble = 2;
    }
    FUN_002c1b64(context, 0);
    renderCtxPushA(context, FUN_002c5d80(1, second));
    renderCtxPushC(context, FUN_002865c0(1, 0.0f));
    renderCtxPushG(context, flagsPackFourBooleans(first, first, first, first));
    renderCtxPushB(context, packNibblesAndByte(1, 0, 0));
    renderCtxPushE(context, FUN_00310578(1, alpha, 0xff));
    renderCtxPushF(context, packThreeNibbles(nibble, nibble, nibble));
    FUN_002b7638(color, color, color, color, 0.0f, 0.0f, width, height, scale);
    renderStackPop(&context->depthStacks.stackF);
    renderStackPop(&context->depthStacks.stackE);
    renderStackPop(&context->stackB);
    renderStackPop(&context->additional.stackG);
    renderStackPop(&context->additional.stackC);
    renderStackPop(&context->stackA);
    FUN_002c1b64(context, savedPreset);
}

} /* extern "C" */
