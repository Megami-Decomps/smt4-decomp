/* NON_MATCHING: render-stack zero constant is initialized after the readiness test rather than before it. */
#include "battle/btlUI.h"
#include "camp/RenderCtx.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "Model/MoriModelShadowMap.h"
#include "event/2dEvent/EventEffect.h"
#include "util/skinObjectUpdateMatrices.h"

extern "C" {
extern BtlUiGlobalsA g_btlUi;
u32 FUN_001692ac(u32, u32);
void FUN_0028cb88(BtlUiObjCA *);
void renderCtxResetColorScale(RenderCtxA *);

u32 FUN_00298674(void)
{
    BtlUiA *ui = g_btlUi.ui;
    if (ui) {
        s32 loaded = 0;
        for (s32 i = 0; i < 6; ++i)
            if (asdTMTexTableNodeIsLoaded(12, i))
                ++loaded;
        for (s32 i = 0; i < 5; ++i)
            if (asdTMTexTableNodeIsLoaded(13, i))
                ++loaded;
        if (loaded >= 11) {
            FUN_00157558(g_renderCtx);
            RenderCtxA *ctx = g_renderCtx;
            renderCtxPushA(ctx, FUN_001692ac(1, 0));
            if (FUN_00284e94())
                FUN_0028cb88(&ui->objC);
            renderStackPop(&g_renderCtx->stackA);
            skinObjectUpdateMatrices(reinterpret_cast<SkinObject *>(g_renderCtx));
            renderCtxResetColorScale(g_renderCtx);
            return 0;
        }
    }
    return 0;
}
}
