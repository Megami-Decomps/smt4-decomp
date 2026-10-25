/* NON_MATCHING: render-stack push addressing and text-position conversion scheduling differ. */
#include "StaffRoll/StaffRollMain.h"
#include "shard/TextureDrawCall.h"
#include "camp/RenderCtx.h"

extern "C" {
extern StaffRollWork *g_staffRoll;
extern RenderCtx *g_titleScene;
void FUN_002bed3c(void);
void FUN_002c39a4(RenderCtx *context);
s32 FUN_002c5d80(u32 preset, u32 index);
void efctSetSpeed(f32 speed);

// Draw twelve entries in the credits' secondary column with a temporary render preset.
u32 FUN_002f4bc0(void)
{
    // The x column straddles StaffRollWork's lineA/lineB boundary.
    struct SecondaryCreditsDrawView {
        u8 unk00[0x68];
        struct { f32 x, y; } lines[12];
    };
    SecondaryCreditsDrawView *credits = reinterpret_cast<SecondaryCreditsDrawView *>(g_staffRoll);
    FUN_002bed3c();
    FUN_002c39a4(g_titleScene);
    RenderCtx *context = g_titleScene;
    renderCtxPushA(context, FUN_002c5d80(1, 0));
    for (u32 index = 0; index < 12; ++index) {
        FUN_002bf288(2, 0x34, index * 1000, (s32)credits->lines[index].x,
                     (s32)credits->lines[index].y, 2);
    }
    FUN_002bed3c();
    efctSetSpeed(1.0f);
    renderStackPop(&g_titleScene->stackA);
    return 0;
}
}
