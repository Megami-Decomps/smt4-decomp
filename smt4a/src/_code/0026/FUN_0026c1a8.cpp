#include "shard/Shard0033.h"
#include "shard/TextureDrawCall.h"
#include "camp/RenderCtx.h"

extern "C" {
extern ObjBRef g_gameGlobals;
extern RenderCtxA *g_renderCtx;
void FUN_00157558(RenderCtxA *context);
s32 FUN_001692ac(s32 kind, s32 value);
void unitGetStereoScreenPosition(s32 *x, s32 *y, s32 sprite, f32 scale);
void efctSetSpeed(f32 alpha);
f32 vec2GetSpeed(const void *object);

u32 FUN_0026c1a8(void)
{
    ObjB *work = g_gameGlobals.instance;
    s32 x = 0;
    s32 y = 0;
    if (work->unk2012 != 0 && (work->unk2018 == 3 || work->unk2018 == 10)) {
        FUN_00157558(g_renderCtx);
        RenderCtxA *context = g_renderCtx;
        s32 state = FUN_001692ac(1, 0);
        renderStackPush(&context->stackA, state);
        unitGetStereoScreenPosition(&x, &y, 10, 0.35f);
        efctSetSpeed(vec2GetSpeed(&work->spriteHeaders.headers[2]));
        FUN_001835b4(2, 0x12, 0, x, y, 1);
        efctSetSpeed(1.0f);
        unitGetStereoScreenPosition(&x, &y, 8, 0.35f);
        efctSetSpeed(vec2GetSpeed(&work->spriteHeaders.headers[0]));
        FUN_001835b4(2, 0x12, 1, x, y, 1);
        efctSetSpeed(1.0f);
        unitGetStereoScreenPosition(&x, &y, 9, 0.35f);
        efctSetSpeed(vec2GetSpeed(&work->spriteHeaders.headers[1]));
        FUN_001835b4(2, 0x12, 2, x, y, 1);
        renderStackPop(&g_renderCtx->stackA);
    }
    return 0;
}
}
