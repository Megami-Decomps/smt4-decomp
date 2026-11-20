/* NON_MATCHING: retail loads the zero it stores into the stack's dirty flag and returns into r7 before the flag test (here after the push call), and keeps the popped top in r0 and the new state in r1 (copied to r0 for the callback); the build swaps them. */
/* Draws the active battle-effect overlay with a temporary title-scene render state. */
#include "battle/btlEffect.h"
#include "camp/RenderCtx.h"
#include "shard/JobWork.h"
#include "code/Code0028.h"
#include "camp/RenderCtxTitle.h"

extern "C" {
extern BtlEffectGlobals g_btlEffect;
void renderCtxResetColorScale(RenderCtx *context);

u32 btlEffectOverlayDraw(u32 process)
{
    struct DrawObject;
    struct DrawMethods {
        void *unk00[3];
        void (*draw)(DrawObject *object);
    };
    struct DrawObject { DrawMethods *methods; };
    struct EffectOverlayView {
        u8 unk0000[0x3028];
        u32 flags;
        u8 unk302C[8];
        DrawObject *object;
    };
    jobGetWork(process);
    EffectOverlayView *effect = (EffectOverlayView *)g_btlEffect.data;
    if (effect == NULL) {
        return 0;
    }
    if (!(effect->flags & 2) || effect->object == NULL) {
        return 0;
    }
    renderCtxPushC(g_titleScene, gxPackFadeKindAlphaWord(6, 0.0f));
    effect->object->methods->draw(effect->object);
    renderStackPop(&g_titleScene->additional.stackC);
    renderCtxApplyTransforms(g_titleScene);
    renderCtxResetColorScale(g_titleScene);
    return 0;
}
}
