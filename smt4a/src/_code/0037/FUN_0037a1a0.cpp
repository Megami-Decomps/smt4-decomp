/* NON_MATCHING: render-stack push addressing and text-position conversion scheduling differ. */
#include "StaffRoll/StaffRollMain.h"
#include "camp/RenderCtx.h"

extern "C" {
extern StaffRollWork *g_staffRoll;
extern RenderCtxA *g_renderCtx;
void FUN_00183bb0(void);
void FUN_00157558(RenderCtxA *context);
s32 FUN_001692ac(u32 preset, u32 index);
void FUN_001835b4(s32 font, s32 text, u32 entry, s32 x, s32 y, s32 layer);
void efctSetSpeed(f32 speed);

// Draw twelve entries in the credits' secondary column with a temporary render preset.
u32 FUN_0037a1a0(void)
{
    // The x column straddles StaffRollWork's lineA/lineB boundary.
    struct SecondaryCreditsDrawView {
        u8 unk00[0x68];
        struct { f32 x, y; } lines[12];
    };
    SecondaryCreditsDrawView *credits = reinterpret_cast<SecondaryCreditsDrawView *>(g_staffRoll);
    FUN_00183bb0();
    FUN_00157558(g_renderCtx);
    RenderCtxA *context = g_renderCtx;
    s32 state = FUN_001692ac(1, 0);
    renderStackPush(&context->stackA, state);
    for (u32 index = 0; index < 12; ++index) {
        FUN_001835b4(2, 0x29, index * 1000, (s32)credits->lines[index].x,
                     (s32)credits->lines[index].y, 2);
    }
    FUN_00183bb0();
    efctSetSpeed(1.0f);
    renderStackPop(&g_renderCtx->stackA);
    return 0;
}
}
