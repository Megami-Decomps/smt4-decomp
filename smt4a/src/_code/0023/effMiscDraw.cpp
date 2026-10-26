#include "AsdSDK/Source/Gfx/Effect/effMisc.h"
#include "camp/RenderCtx.h"
#include "code/Code0014.h"

extern "C" {
extern RenderCtxA *g_renderCtx;
extern EffMiscKind g_effMiscKinds[];
void FUN_00157558(RenderCtxA *context);
void uiSpriteRefreshMode(RenderCtxA *context);

static __inline void effMiscLateUpdate(EffMiscObject *object)
{
    g_effMiscKinds[object->kind].lateUpdate(object);
}

/* Draws an effect object: the kind's late update, then the render context's mode handling. */
void effMiscDraw(EffMiscObject *object)
{
    u8 mode = g_renderCtx->unk5F8;

    if (mode != 1) {
        u32 state = g_renderCtx->unk6FC;
        FUN_00157558(g_renderCtx);
        effMiscLateUpdate(object);
        if (mode == 3 || mode == 4) {
            uiSpriteRefreshMode(g_renderCtx);
        } else if (mode == 5) {
            effectRestoreSavedRenderPairs(g_renderCtx, reinterpret_cast<void *>(state));
        }
    } else {
        effMiscLateUpdate(object);
    }
}
}
