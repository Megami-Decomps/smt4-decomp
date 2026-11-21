#include "StaffRoll/StaffRollMain.h"
#include "shard/TextureDrawCall.h"
#include "camp/RenderCtx.h"
#include "Model/MoriModelShadowMap.h"

extern "C" {
extern StaffRollWork *g_staffRoll;
void gxResetColorQuadToWhite(void);
s32 renderCtxPackPassFlags(u32 preset, u32 index);
void efctSetSpeed(f32 speed);

// Draw twelve entries in the credits' secondary column with a temporary render preset.
u32 staffRollDrawSecondaryColumn(void)
{
    // The x column straddles StaffRollWork's lineA/lineB boundary.
    struct SecondaryCreditsDrawView {
        u8 unk00[0x68];
        struct { f32 x, y; } lines[12];
    };
    SecondaryCreditsDrawView *credits = reinterpret_cast<SecondaryCreditsDrawView *>(g_staffRoll);
    gxResetColorQuadToWhite();
    renderCtxSelectDisplayAreaForStereoMode(g_renderCtx);
    RenderCtxA *context = g_renderCtx;
    s32 state = renderCtxPackPassFlags(1, 0);
    renderStackPushCountedDirect(context->stacks + RENDER_STACK_A, state);
    for (u32 index = 0; index < 12; ++index) {
        s32 x = (s32)credits->lines[index].x;
        s32 y = (s32)credits->lines[index].y;

        texDrawTableEntryAtStoredOrigin(2, 0x29, index * 1000, x, y, 2);
    }
    gxResetColorQuadToWhite();
    efctSetSpeed(1.0f);
    renderStackPop(g_renderCtx->stacks + RENDER_STACK_A);
    return 0;
}
}
