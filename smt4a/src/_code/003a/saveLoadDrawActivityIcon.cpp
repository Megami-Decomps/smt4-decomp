#include "gfx/StereoParallax.h"
#include "camp/RenderCtx.h"
#include "shard/TextureDrawCall.h"
#include "saveLoadUI/SaveLoadState.h"
#include "Model/MoriModelShadowMap.h"

extern "C" {
extern SaveLoadProcessA g_saveLoadProcess;
s32 saveLoadThreadValueGet(void);
s32 saveLoadJobIsReady(void);
void efctSetSpeed(f32 speed);
void gxResetColorQuadToWhite(void);

// Animation frame follows the established six-byte save-process prefix.
struct SaveLoadActivityView {
    u8 prefix[6];
    u16 frame;
};
typedef char SaveLoadActivityViewOffsetCheck[offsetof(SaveLoadActivityView, frame) == 6 ? 1 : -1];

/* The activity icon's animation frame. */
static __inline u32 saveLoadActivityFrame(void)
{
    return ((const SaveLoadActivityView *)&g_saveLoadProcess)->frame;
}

// Draw the animated save/load activity icon while its worker or job is active.
u32 saveLoadDrawActivityIcon(void)
{
    if (saveLoadThreadValueGet() || saveLoadJobIsReady()) {
        renderCtxSelectDisplayAreaForStereoMode(g_renderCtx);
        RenderCtxA *context = g_renderCtx;
        renderCtxPushA(context, renderCtxPackPassFlags(1, 0));
        efctSetSpeed(1.0f);
        gxResetColorQuadToWhite();
        s32 x = (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.27f);
        texDrawTableEntryAtStoredOrigin(2, 8, saveLoadActivityFrame() + 389, x, 0, 6);
        renderStackPop(g_renderCtx->stacks + RENDER_STACK_A);
        efctSetSpeed(1.0f);
        gxResetColorQuadToWhite();
    }
    return 0;
}
}
