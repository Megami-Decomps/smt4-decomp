/* NON_MATCHING: Sprite-opacity accessors fold to direct field loads and a shared base; initial loads and render-stack push registers differ. */
#include "shard/Shard0033.h"
#include "camp/RenderCtx.h"

extern "C" {
extern ObjBRef g_gameGlobals;
extern RenderCtxA *g_renderCtx;
void FUN_00157558(RenderCtxA *context);
s32 FUN_001692ac(s32 kind, s32 value);
void FUN_00230a50(s32 *x, s32 *y, s32 sprite, f32 scale);
void efctSetSpeed(f32 alpha);
void FUN_001835b4(s32 layer, u32 texture, u32 frame, s32 x, s32 y, s32 mode);

u32 FUN_0026c1a8(void)
{
    s32 x = 0;
    s32 y = 0;
    ObjB *work = g_gameGlobals.instance;
    if (work->unk2012 != 0 && (work->unk2018 == 3 || work->unk2018 == 10)) {
        FUN_00157558(g_renderCtx);
        RenderCtxA *context = g_renderCtx;
        s32 state = FUN_001692ac(1, 0);
        renderStackPush(&context->stackA, state);
        FUN_00230a50(&x, &y, 10, 0.35f);
        efctSetSpeed(work->spriteHeaders.headers[2].unk20);
        FUN_001835b4(2, 0x12, 0, x, y, 1);
        efctSetSpeed(1.0f);
        FUN_00230a50(&x, &y, 8, 0.35f);
        efctSetSpeed(work->spriteHeaders.headers[0].unk20);
        FUN_001835b4(2, 0x12, 1, x, y, 1);
        efctSetSpeed(1.0f);
        FUN_00230a50(&x, &y, 9, 0.35f);
        efctSetSpeed(work->spriteHeaders.headers[1].unk20);
        FUN_001835b4(2, 0x12, 2, x, y, 1);
        renderStackPop(&g_renderCtx->stackA);
    }
    return 0;
}
}
