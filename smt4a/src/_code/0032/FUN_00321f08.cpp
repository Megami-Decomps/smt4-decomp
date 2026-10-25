/* NON_MATCHING: callbacks and render restoration recovered; late-update callback addressing and tail block placement still differ. */
#include "AsdSDK/Source/Gfx/Effect/effMisc.h"
#include "camp/RenderCtx.h"
#include "Model/MoriModelShadowMap.h"

extern "C" {
extern EffMiscKind g_effMiscKinds[];
void FUN_00145e24(RenderCtxA* context, u32 resource);
void uiSpriteRefreshMode(RenderCtxA* context);
s32 effGetFrameStep(void);

// Run an effect's update phases while preserving the enclosing render mode.
void FUN_00321f08(EffMiscObject* object)
{
    g_effMiscKinds[object->kind].update(object);
    object->frame += effGetFrameStep();
    u8 mode = g_renderCtx->unk5F8;
    if (mode == 1) {
        g_effMiscKinds[object->kind].lateUpdate(object);
        return;
    }
    u32 resource = g_renderCtx->unk6FC;
    FUN_00157558(g_renderCtx);
    g_effMiscKinds[object->kind].lateUpdate(object);
    if (mode == 3 || mode == 4) {
        uiSpriteRefreshMode(g_renderCtx);
    } else if (mode == 5) {
        FUN_00145e24(g_renderCtx, resource);
    }
}
}
