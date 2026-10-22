/* NON_MATCHING: instruction scheduling and register allocation differ; retail 36 vs built 36 rows, 27 diff lines. */
#include "AsdSDK/Source/Gfx/Effect/effMisc.h"

extern "C" {

void FUN_002c39a4(void);
void effectRestoreSavedRenderPairs(EffRenderState *ctx, u32 value);
void layoutApplyForState(EffRenderState *ctx);

extern EffMiscKind g_effMiscKinds[];
extern EffRenderState *g_titleScene;

/* Draws an effect object: the kind's late update, then the render context's mode handling. */
void effMiscDraw(EffMiscObject *obj)
{
    u8 mode = g_titleScene->mode;
    u32 saved;

    if (mode == 1) {
        g_effMiscKinds[obj->kind].lateUpdate(obj);
        return;
    }
    saved = g_titleScene->unk6f8;
    FUN_002c39a4();
    g_effMiscKinds[obj->kind].lateUpdate(obj);
    if (mode == 3 || mode == 4) {
        layoutApplyForState(g_titleScene);
    } else if (mode == 5) {
        effectRestoreSavedRenderPairs(g_titleScene, saved);
    }
}

} /* extern "C" */
