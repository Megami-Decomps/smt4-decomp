/* NON_MATCHING: callback-table address registers and the mode-tail block order differ. */
#include "AsdSDK/Source/Gfx/Effect/effMisc.h"
#include "camp/RenderCtx.h"

extern "C" {
extern RenderCtxA *g_renderCtx;
extern EffMiscKind g_effMiscKinds[];
void FUN_00145e24(RenderCtxA *context, u32 state);
void FUN_00157558(RenderCtxA *context);
void uiSpriteRefreshMode(RenderCtxA *context);

void FUN_002322c4(EffMiscObject *object)
{
    u8 mode = g_renderCtx->unk5F8;
    if (mode == 1) {
        g_effMiscKinds[object->kind].lateUpdate(object);
        return;
    }
    u32 state = g_renderCtx->unk6FC;
    FUN_00157558(g_renderCtx);
    g_effMiscKinds[object->kind].lateUpdate(object);
    if (mode == 3 || mode == 4) {
        uiSpriteRefreshMode(g_renderCtx);
    } else if (mode == 5) {
        FUN_00145e24(g_renderCtx, state);
    }
}
}
