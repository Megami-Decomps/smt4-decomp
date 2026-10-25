/* NON_MATCHING: armcc hoists the address of context->stereoMode into a callee-saved register (retail reloads [r4,#0x52c] twice), which pushes `mode` and `fade` onto the stack */
#include "camp/RenderCtx.h"

extern "C" {

u32 asdGxPresetsGetHeightByKind(u32 kind);
u32 asdGxPresetsGetByKind(u32 kind);
void FUN_0016c4b8(RenderCtxA *context, void *preset);
u32 FUN_001692ac(u32 value, bool enabled);
u32 FUN_00387580(u32 kind, f32 value);
u32 flagsPackFourBooleans(s32 first, s32 second, s32 third, s32 fourth);
u32 packNibblesAndByte(s32 a, s32 b, u32 byte);
u32 FUN_003a48dc(s32 a, s32 b, s32 c, u32 d);
u32 packThreeFields(u32 a, s32 b, s32 c);
void FUN_00164034(u32 first, u32 second, u32 third, u32 fourth, f32 value0, f32 value1, f32 value2,
                  f32 value3, f32 value4);

/* Draws one effect quad with its render-state stacks temporarily set from `flags`, then restores them. */
void FUN_004097b4(RenderCtxA *context, u32 color, u32 fade, u32 flags, f32 alpha)
{
    s32 first = 0;
    s32 second = 0;
    u32 mode = 0;
    void *savedPreset = context->depthStacks.selectedPreset;
    f32 height = (f32)asdGxPresetsGetHeightByKind(context->unk052C);
    f32 width = (f32)asdGxPresetsGetByKind(context->unk052C);

    if ((flags & 1) != 0) {
        first = 1;
    }
    if ((flags & 2) != 0) {
        second = 1;
    }
    if ((flags & 4) != 0) {
        mode = 2;
    }
    FUN_0016c4b8(context, NULL);
    renderStackPush(&context->stackA, FUN_001692ac(1, second));
    renderStackPush(&context->additional.stackC, FUN_00387580(1, 0.0f));
    renderStackPush(&context->additional.stackG, flagsPackFourBooleans(first, first, first, first));
    renderStackPush(&context->stackB, packNibblesAndByte(1, 0, 0));
    renderStackPush(&context->depthStacks.stackE, FUN_003a48dc(1, fade, 255, 255));
    renderStackPush(&context->depthStacks.stackF, packThreeFields(mode, mode, mode));
    FUN_00164034(color, color, color, color, 0.0f, 0.0f, height, width, alpha);
    renderStackPop(&context->depthStacks.stackF);
    renderStackPop(&context->depthStacks.stackE);
    renderStackPop(&context->stackB);
    renderStackPop(&context->additional.stackG);
    renderStackPop(&context->additional.stackC);
    renderStackPop(&context->stackA);
    FUN_0016c4b8(context, savedPreset);
}

} /* extern "C" */
