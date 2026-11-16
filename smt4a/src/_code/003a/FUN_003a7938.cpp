#include "gfx/StereoParallax.h"
#include "camp/RenderCtx.h"
#include "shard/TextureDrawCall.h"
#include "saveLoadUI/SaveLoadState.h"
#include "Model/MoriModelShadowMap.h"

extern "C" {
extern SaveLoadProcessA g_saveLoadProcess;
s32 saveLoadThreadValueGet(void);
s32 saveLoadJobIsReady(void);
u32 FUN_001692ac(u32 state, u32 options);
void efctSetSpeed(f32 speed);
void FUN_00183bb0(void);

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
u32 FUN_003a7938(void)
{
    if (saveLoadThreadValueGet() || saveLoadJobIsReady()) {
        FUN_00157558(g_renderCtx);
        RenderCtxA *context = g_renderCtx;
        renderCtxPushA(context, FUN_001692ac(1, 0));
        efctSetSpeed(1.0f);
        FUN_00183bb0();
        s32 x = (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.27f);
        FUN_001835b4(2, 8, saveLoadActivityFrame() + 389, x, 0, 6);
        renderStackPop(&g_renderCtx->stackA);
        efctSetSpeed(1.0f);
        FUN_00183bb0();
    }
    return 0;
}
}
