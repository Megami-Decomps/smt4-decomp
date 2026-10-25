/* NON_MATCHING: render-stack push registers and text-position VFP conversion scheduling differ. */
#include "StaffRoll/StaffRollMain.h"
#include "shard/TextureDrawCall.h"
#include "camp/RenderCtx.h"

/* The x column straddles the existing StaffRollWork padding/lineA boundary. */
struct StaffRollDrawView {
    u8 unk00[8];
    struct { f32 x, y; } lines[12];
};

extern "C" {
extern StaffRollWork *g_staffRoll;
extern RenderCtx *g_titleScene;
void FUN_002bed3c(void);
void FUN_002c39a4(RenderCtx *context);
s32 FUN_002c5d80(u32 type, u32 flags);
void efctSetSpeed(f32 speed);

/* Draw the twelve scrolling credit entries with a temporary render state. */
u32 FUN_002e0820(void)
{
    StaffRollDrawView *credits = (StaffRollDrawView *)g_staffRoll;
    FUN_002bed3c();
    FUN_002c39a4(g_titleScene);
    RenderCtx *context = g_titleScene;
    renderCtxPushA(context, FUN_002c5d80(1, 0));
    for (u32 i = 0; i < 12; ++i)
        FUN_002bf288(2, 0x34, i * 1000, (s32)credits->lines[i].x, (s32)credits->lines[i].y, 2);
    FUN_002bed3c();
    efctSetSpeed(1.0f);
    renderStackPop(&g_titleScene->stackA);
    return 0;
}
}
