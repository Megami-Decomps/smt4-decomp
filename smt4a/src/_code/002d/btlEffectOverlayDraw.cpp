/* NON_MATCHING: retail loads the zero it stores into the stack's dirty flag and returns into r7 before the flag test (here after the push call), and keeps the popped top in r0 and the new state in r1 (copied to r0 for the callback); the build swaps them. */
#include "camp/RenderCtx.h"
#include "camp/RenderCtxA.h"
#include "shard/JobWork.h"
#include "code/Code0038.h"

/* A battle effect part that draws a child object through the render state stack. */
struct EffectChildVtable {
    void *unk00[3];
    void (*draw)(void *child); /* +0x0C */
};
struct EffectChild {
    const EffectChildVtable *vtable;
};

struct BtlEffectObject {
    /* 0x0000 */ u8 unk0000[0x339C];
    /* 0x339C */ u32 flags;
    /* 0x33A0 */ u8 unk33A0[8];
    /* 0x33A8 */ EffectChild *child;
};

struct BtlEffectGlobals {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ BtlEffectObject *object;
};

extern "C" {
extern BtlEffectGlobals g_btlEffect;

void skinObjectUpdateMatrices(RenderCtxA *context);
void renderCtxResetColorScale(RenderCtxA *context);

/* Draws the battle effect's child object inside its own render state. */
s32 btlEffectOverlayDraw(u32 job)
{
    jobGetWork(job);
    BtlEffectObject *effect = g_btlEffect.object;
    if (effect == NULL) {
        return 0;
    }
    if ((effect->flags & 2) == 0 || effect->child == NULL) {
        return 0;
    }
    renderCtxPushC(g_renderCtx, renderCtxPackPassFlagsWithAlpha(6, 0.0f));
    effect->child->vtable->draw(effect->child);
    renderStackPop(&g_renderCtx->additional.stackC);
    skinObjectUpdateMatrices(g_renderCtx);
    renderCtxResetColorScale(g_renderCtx);
    return 0;
}
}
