#include "AsdSDK/Source/Gfx/Effect/effMisc.h"

extern "C" {

void renderCtxSelectStereoLayout(void);
void effectRestoreSavedRenderPairs(EffRenderState *ctx, u32 value);
void layoutApplyForState(EffRenderState *ctx);

extern EffMiscKind g_effMiscKinds[];
extern EffRenderState *g_titleScene;

static __inline void effMiscLateUpdate(EffMiscObject *obj)
{
    g_effMiscKinds[obj->kind].lateUpdate(obj);
}

/* Draws an effect object: the kind's late update, then the render context's mode handling. */
void effMiscDraw(EffMiscObject *obj)
{
    u8 mode = g_titleScene->mode;

    if (mode != 1) {
        u32 saved = g_titleScene->unk6f8;
        renderCtxSelectStereoLayout();
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
