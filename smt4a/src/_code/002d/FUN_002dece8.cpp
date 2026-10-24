/* NON_MATCHING: same logic as the other render-state push/pop users; the inlined renderStackPush/Pop helpers schedule their index arithmetic differently and the effect null checks branch differently */
#include "camp/RenderCtx.h"

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
extern RenderCtxA *g_renderCtx;

void *jobGetWork(void);
s32 FUN_00387580(u32 kind, f32 value);
void skinObjectUpdateMatrices(RenderCtxA *context);
void renderCtxResetColorScale(RenderCtxA *context);

/* Draws the battle effect's child object inside its own render state. */
u32 FUN_002dece8(void)
{
    jobGetWork();
    BtlEffectObject *effect = g_btlEffect.object;
    if (effect != NULL && (effect->flags & 2) != 0 && effect->child != NULL) {
        RenderCtxA *context = g_renderCtx;
        s32 state = FUN_00387580(6, 0.0f);
        renderStackPush(&context->additional.stackC, state);
        effect->child->vtable->draw(effect->child);
        renderStackPop(&g_renderCtx->additional.stackC);
        skinObjectUpdateMatrices(g_renderCtx);
        renderCtxResetColorScale(g_renderCtx);
    }
    return 0;
}
}
