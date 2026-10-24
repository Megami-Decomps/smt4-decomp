/* NON_MATCHING: identical except the push's second entry address, which retail forms in r3 and this build in ip. */
#include "camp/RenderCtx.h"

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

extern DrawHolder *DAT_00588e2c;
extern RenderCtxA *g_renderCtx;

u32 FUN_001692ac(u32 kind, bool enabled);
void efctSetSpeed(f32 speed);

/* Draw task of the save/load screen: draws the holder's target inside a pushed render state, then resets the effect speed. */
s32 FUN_002efa8c(u32 job)
{
    DrawHolder *holder = DAT_00588e2c;
    if (holder == NULL) {
        return 0;
    }
    RenderCtxA *context = g_renderCtx;
    renderCtxPushA(context, FUN_001692ac(1, false));
    holder->target->vtbl->draw(holder->target);
    renderStackPop(&g_renderCtx->stackA);
    efctSetSpeed(1.0f);
    return 0;
}

} /* extern "C" */
