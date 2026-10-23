/* NON_MATCHING: cached render-state push/pop address scheduling and zero-register lifetime differ. */
#include "battle/btlUI.h"
#include "camp/RenderCtx.h"

extern "C" {
extern BtlUiGlobalsA g_btlUi;
extern RenderCtxA *g_renderCtx;
s32 asdTMTexTableNodeIsLoaded(u32, s32);
void FUN_00157558(RenderCtxA *);
u32 FUN_001692ac(u32, u32);
s32 FUN_00284e94(void);
void FUN_0028cb88(BtlUiObjCA *);
void skinObjectUpdateMatrices(RenderCtxA *);
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
            skinObjectUpdateMatrices(g_renderCtx);
            renderCtxResetColorScale(g_renderCtx);
            return 0;
        }
    }
    return 0;
}
}
