/* NON_MATCHING: instruction scheduling and register allocation differ; retail 45 vs built 45 rows, 27 diff lines. */
#include "AsdSDK/Source/Gfx/Effect/effMisc.h"
#include "camp/RenderCtx.h"

extern "C" {

void effectRestoreSavedRenderPairs(EffRenderState *ctx, u32 value);
void layoutApplyForState(EffRenderState *ctx);

extern EffMiscKind g_effMiscKinds[];
extern EffRenderState *g_titleScene;

/* Steps an effect object one frame, then draws it (see effMiscDraw). */
void effMiscUpdateAndDraw(EffMiscObject *obj)
{
    g_effMiscKinds[obj->kind].update(obj);
    obj->frame++;
    u8 mode = g_titleScene->mode;
    u32 saved;

    if (mode == 1) {
        g_effMiscKinds[obj->kind].lateUpdate(obj);
        return;
    }
    saved = g_titleScene->unk6f8;
    renderCtxSelectStereoLayout(reinterpret_cast<RenderCtx *>(g_titleScene));
    g_effMiscKinds[obj->kind].lateUpdate(obj);
    if (mode == 3 || mode == 4) {
        layoutApplyForState(g_titleScene);
    } else if (mode == 5) {
        effectRestoreSavedRenderPairs(g_titleScene, saved);
    }
}

} /* extern "C" */
