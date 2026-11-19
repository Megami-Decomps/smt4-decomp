/* NON_MATCHING: the render-stack dirty-clear zero is materialized later than in retail. */
#include "battle/BtlUiGlobal.h"
#include "camp/RenderCtx.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "camp/CommonBg/CommonBg.h"
#include "camp/RenderCtxTitle.h"

extern "C" {
void btlUiPartyDisplayDraw(BtlUiObjC *);
void renderCtxResetColorScale(RenderCtx *);
void renderCtxSelectStereoLayout(RenderCtx *);
s32 renderCtxPackPassFlags(u32, u32);

// Draw the lower battle UI only after both texture sets have finished loading.
s32 FUN_001e4bf0(u32 job)
{
    BtlUi *ui = g_btlUi.ui;
    if (ui) {
        s32 loaded = 0;
        for (s32 index = 0; index < 5; ++index) {
            if (asdTMTexTableNodeIsLoaded(20, index))
                ++loaded;
        }
        for (s32 index = 0; index < 4; ++index) {
            if (asdTMTexTableNodeIsLoaded(21, index))
                ++loaded;
        }
        if (loaded >= 9) {
            renderCtxSelectStereoLayout(g_titleScene);
            renderCtxPushA(g_titleScene, renderCtxPackPassFlags(1, 0));
            if (FUN_0028a318())
                btlUiPartyDisplayDraw(&ui->objC);
            renderStackPop(&g_titleScene->stackA);
            renderCtxApplyTransforms(g_titleScene);
            renderCtxResetColorScale(g_titleScene);
            return 0;
        }
    }
    return 0;
}
}
