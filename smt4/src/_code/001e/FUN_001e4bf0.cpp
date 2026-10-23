/* NON_MATCHING: cached draw-state push uses IP rather than R3 and schedules the dirty-clear zero later. */
#include "battle/btlUI.h"
#include "camp/RenderCtx.h"

extern "C" {
void FUN_001e071c(BtlUiObjC *);
void FUN_002c18e4(RenderCtx *);
void FUN_002c198c(RenderCtx *);
void FUN_002c39a4(RenderCtx *);
extern RenderCtx *g_titleScene;
extern BtlUiGlobals g_btlUi;
s32 FUN_0028a318(void);
s32 asdTMTexTableNodeIsLoaded(u32, s32);
s32 FUN_002c5d80(u32, u32);

// Draw the lower battle UI only after both texture sets have finished loading.
u32 FUN_001e4bf0(void)
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
            FUN_002c39a4(g_titleScene);
            RenderCtx *context = g_titleScene;
            s32 state = FUN_002c5d80(1, 0);
            renderStackPush(&context->stackA, state);
            if (FUN_0028a318())
                FUN_001e071c(&ui->objC);
            renderStackPop(&g_titleScene->stackA);
            FUN_002c198c(g_titleScene);
            FUN_002c18e4(g_titleScene);
            return 0;
        }
    }
    return 0;
}
}
