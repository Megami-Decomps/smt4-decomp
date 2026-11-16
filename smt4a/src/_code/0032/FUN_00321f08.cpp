#include "AsdSDK/Source/Gfx/Effect/effMisc.h"
#include "camp/RenderCtx.h"
#include "Model/MoriModelShadowMap.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers.h"

extern "C" {
extern EffMiscKind g_effMiscKinds[];
void effectRestoreSavedRenderPairs(RenderCtxA* context, u32 resource);
void uiSpriteRefreshMode(RenderCtxA* context);

/* Runs the kind's late update (its drawing pass). */
static __inline void effMiscLateUpdate(EffMiscObject* object)
{
    g_effMiscKinds[object->kind].lateUpdate(object);
}

// Run an effect's update phases while preserving the enclosing render mode.
void FUN_00321f08(EffMiscObject* object)
{
    g_effMiscKinds[object->kind].update(object);
    object->frame += effGetFrameStep();
    u8 mode = g_renderCtx->unk5F8;

    if (mode != 1) {
        u32 resource = g_renderCtx->unk6FC;
        renderCtxSelectDisplayAreaForStereoMode(g_renderCtx);
        effMiscLateUpdate(object);
        if (mode == 3 || mode == 4) {
            uiSpriteRefreshMode(g_renderCtx);
        } else if (mode == 5) {
            effectRestoreSavedRenderPairs(g_renderCtx, resource);
        }
    } else {
        effMiscLateUpdate(object);
    }
}
}
