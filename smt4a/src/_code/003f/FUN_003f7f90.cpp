/* NON_MATCHING: inline push addresses, positioned-work/coordinate registers and member-relative speed load differ; render restoration and repeated speed resets are preserved. */
#include "camp/RenderCtx.h"
#include "ui/UiSpriteState.h"

struct PositionedMenuDrawWork {
    u8 unk000[0x14];
    u32 state;
    u8 unk018[0x154];
    UiSpriteState position;
};
extern "C" {
extern RenderCtxA *g_renderCtx;
void FUN_00157558(RenderCtxA *context);
s32 FUN_001692ac(u32 first, u32 second);
s32 packNibblesAndByte(u32 first, u32 second, u32 third);
s32 vec2GetXInt(const UiSpriteState *position);
s32 vec2GetYInt(const UiSpriteState *position);
void FUN_003f66dc(PositionedMenuDrawWork *work, s32 x, s32 y, f32 speed);
void efctSetSpeed(f32 speed);
void FUN_001835b4(u32 layer, u32 bank, u32 sprite, s32 x, s32 y, u32 flags);
void skinObjectUpdateMatrices(RenderCtxA *context);
void renderCtxResetColorScale(RenderCtxA *context);

u32 FUN_003f7f90(PositionedMenuDrawWork *work)
{
    if (work->state == 0 || work->state == 1)
        return 0;
    FUN_00157558(g_renderCtx);
    RenderCtxA *context = g_renderCtx;
    s32 state = FUN_001692ac(1, 0);
    renderStackPush(&context->stackA, state);
    s32 x = vec2GetXInt(&work->position);
    s32 y = vec2GetYInt(&work->position);
    f32 speed = work->position.unk20;
    FUN_003f66dc(work, x, y, speed);
    switch (work->state) {
    case 0: case 1: case 2: case 3: case 9: case 10: case 11:
        break;
    default:
        efctSetSpeed(speed);
        FUN_001835b4(2, 0x31, 0xAC, x, y, 0x33);
        efctSetSpeed(1.0f);
        break;
    }
    efctSetSpeed(1.0f);
    efctSetSpeed(1.0f);
    context = g_renderCtx;
    renderStackPop(&context->stackA);
    context = g_renderCtx;
    state = packNibblesAndByte(6, 7, 0);
    renderStackSet(&context->stackB, state);
    skinObjectUpdateMatrices(g_renderCtx);
    renderCtxResetColorScale(g_renderCtx);
    return 0;
}
}
