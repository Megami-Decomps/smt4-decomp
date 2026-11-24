#include "camp/RenderCtx.h"
#include "shard/TextureDrawCall.h"
#include "shard/W6_W6Match5_CommonBackground.h"
#include "camp/RenderCtxTitle.h"

extern "C" {
void efctSetSpeed(f32 opacity);

/* Draw the common background while its transition has a visible contribution. */
u32 FUN_001ed134(void)
{
    CommonBackgroundState *background = g_commonBg.background;
    if (background == NULL) {
        return 0;
    }
    if (background->state != 0 && background->progress > 0.0f) {
        efctSetSpeed(background->progress);
        renderCtxPushA(g_titleScene, renderCtxPackPassFlags(1, 0));
        texDrawTableEntryAtStoredOrigin(2, 14, 268, 0, 0, 251);
        renderStackPop(g_titleScene->stacks + RENDER_STACK_A);
        efctSetSpeed(1.0f);
    }
    return 0;
}
}
