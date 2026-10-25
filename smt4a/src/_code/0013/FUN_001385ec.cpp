/* NON_MATCHING: register choice only: retail zeroes the field through r1 (mov r1, #0; ldr r0, [r4]), built through r0/r1 swapped */
#include "common.h"

extern "C" {

typedef struct RenderCtx {
    /* 0x000 */ u8 unk000[0x52C];
    /* 0x52C */ u32 unk52C;
} RenderCtx;

extern RenderCtx *g_renderCtx;

extern void FUN_00144ab4(void);
extern void FUN_0017dd80(void);
extern void renderTargetClear(s32 a, s32 b);
extern void FUN_001575cc(RenderCtx *ctx);
extern void FUN_00157558(RenderCtx *ctx);

s32 FUN_001385ec(void)
{
    FUN_00144ab4();
    g_renderCtx->unk52C = 0;
    FUN_0017dd80();
    renderTargetClear(0, 0);
    FUN_001575cc(g_renderCtx);
    FUN_00157558(g_renderCtx);
    return 0;
}

} /* extern "C" */
