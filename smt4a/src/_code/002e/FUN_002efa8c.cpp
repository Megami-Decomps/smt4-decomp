#include "camp/RenderCtx.h"
#include "camp/RenderCtxA.h"

struct DrawTarget;
struct DrawTargetVtbl {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ void (*draw)(DrawTarget *target);
};
struct DrawTarget {
    /* 0x00 */ const DrawTargetVtbl *vtbl;
};
struct DrawHolder {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ DrawTarget *target;
};

extern "C" {
extern DrawHolder *g_saveLoadRunner;

u32 renderCtxPackPassFlags(u32 kind, bool enabled);
void efctSetSpeed(f32 speed);

/* Draw task of the save/load screen: draws the holder's target inside a pushed render state, then resets the effect speed. */
s32 FUN_002efa8c(u32 job)
{
    DrawHolder *holder = g_saveLoadRunner;
    if (holder == NULL) {
        return 0;
    }
    RenderCtxA *context = g_renderCtx;
    renderCtxPushA(context, renderCtxPackPassFlags(1, false));
    holder->target->vtbl->draw(holder->target);
    renderStackPop(g_renderCtx->stacks + RENDER_STACK_A);
    efctSetSpeed(1.0f);
    return 0;
}

} /* extern "C" */
