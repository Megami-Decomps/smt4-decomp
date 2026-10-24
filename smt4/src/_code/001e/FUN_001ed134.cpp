#include "camp/RenderCtx.h"
#include "shard/W6_W6Match5_CommonBackground.h"

extern "C" {
extern RenderCtx *g_titleScene;
s32 FUN_002c5d80(u32 mode, u32 flags);
void efctSetSpeed(f32 opacity);
void FUN_002bf288(s32 layer, s32 resource, s32 sprite, s32 x, s32 y, s32 tag);

/* Draw the common background while its transition has a visible contribution. */
u32 FUN_001ed134(void)
{
    CommonBackgroundState *background = g_commonBg.background;
    if (background == NULL) {
        return 0;
    }
    if (background->state != 0 && background->progress > 0.0f) {
        efctSetSpeed(background->progress);
        renderCtxPushA(g_titleScene, FUN_002c5d80(1, 0));
        FUN_002bf288(2, 14, 268, 0, 0, 251);
        renderStackPop(&g_titleScene->stackA);
        efctSetSpeed(1.0f);
    }
    return 0;
}
}
