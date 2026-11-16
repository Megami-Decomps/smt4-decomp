#include "AsdSDK/Source/Gfx/Effect/effMisc.h"
#include "camp/RenderCtx.h"

extern "C" {

void effectRestoreSavedRenderPairs(EffRenderState *ctx, u32 value);
void layoutApplyForState(EffRenderState *ctx);

extern EffMiscKind g_effMiscKinds[];
extern EffRenderState *g_titleScene;

/* Runs the kind's late update (its drawing pass). */
static __inline void effMiscLateUpdate(EffMiscObject *obj)
{
    g_effMiscKinds[obj->kind].lateUpdate(obj);
}

/* Steps an effect object one frame, then draws it (see effMiscDraw). */
void effMiscUpdateAndDraw(EffMiscObject *obj)
{
    g_effMiscKinds[obj->kind].update(obj);
    obj->frame++;
    u8 mode = g_titleScene->mode;

    if (mode != 1) {
        u32 saved = g_titleScene->unk6f8;
        renderCtxSelectStereoLayout(reinterpret_cast<RenderCtx *>(g_titleScene));
        effMiscLateUpdate(obj);
        if (mode == 3 || mode == 4) {
            layoutApplyForState(g_titleScene);
        } else if (mode == 5) {
            effectRestoreSavedRenderPairs(g_titleScene, saved);
        }
    } else {
        effMiscLateUpdate(obj);
    }
}

} /* extern "C" */
