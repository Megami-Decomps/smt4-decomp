#include "StaffRoll/StaffRollMain.h"
#include "shard/TextureDrawCall.h"
#include "camp/RenderCtx.h"
#include "camp/RenderCtxTitle.h"

/* The x column straddles the existing StaffRollWork padding/lineA boundary. */
struct StaffRollDrawView {
    u8 unk00[8];
    struct { f32 x, y; } lines[12];
};

/* Pushes the evaluated state on the scene's first stack (the stack is located after the state is evaluated). */
static __inline void titleScenePushA(RenderCtx *scene, int state)
{
    renderStackPushCounted(scene->stacks + RENDER_STACK_A, state);
}

extern "C" {
extern StaffRollWork *g_staffRoll;
void gxResetColorQuadToWhite(void);
s32 renderCtxPackPassFlags(u32 type, u32 flags);
void efctSetSpeed(f32 speed);

/* Draw the twelve scrolling credit entries with a temporary render state. */
u32 FUN_002e0820(void)
{
    StaffRollDrawView *credits = (StaffRollDrawView *)g_staffRoll;
    gxResetColorQuadToWhite();
    renderCtxSelectStereoLayout(g_titleScene);
    RenderCtx *context = g_titleScene;
    titleScenePushA(context, renderCtxPackPassFlags(1, 0));
    for (u32 i = 0; i < 12; ++i) {
        s32 x = (s32)credits->lines[i].x;
        s32 y = (s32)credits->lines[i].y;
        texDrawTableEntryAtStoredOrigin(2, 0x34, i * 1000, x, y, 2);
    }
    gxResetColorQuadToWhite();
    efctSetSpeed(1.0f);
    renderStackPop(g_titleScene->stacks + RENDER_STACK_A);
    return 0;
}
}
