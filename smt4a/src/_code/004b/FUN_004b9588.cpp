/* NON_MATCHING: stack base is calculated before the mode query and the new-entry address uses ip instead of r3. */
#include "camp/RenderCtx.h"

struct SkinDrawObject {
    u8 prefix[0x28];
    s32 kind;
    u8 padding2C[0x70];
    u32 skinState[1];
};
typedef char SkinDrawObjectOffsetsCheck[
    offsetof(SkinDrawObject, kind) == 0x28 &&
    offsetof(SkinDrawObject, skinState) == 0x9C ? 1 : -1];

extern "C" {
extern RenderCtxA *g_renderCtx;
void FUN_00157558(RenderCtxA *context);
void FUN_00183bb0(void);
s32 FUN_001692ac(s32 first, s32 second);
void FUN_004bade0(void *skinState);
void skinObjectUpdateMatrices(RenderCtxA *context);
void renderCtxResetColorScale(RenderCtxA *context);

void FUN_004b9588(SkinDrawObject *object)
{
    if (object->kind == 0x11) {
        return;
    }
    FUN_00157558(g_renderCtx);
    FUN_00183bb0();
    RenderCtxA *context = g_renderCtx;
    renderStackPush(&context->stackA, FUN_001692ac(1, 0));
    if (object->kind >= 3) {
        FUN_004bade0(object->skinState);
    }
    renderStackPop(&g_renderCtx->stackA);
    skinObjectUpdateMatrices(g_renderCtx);
    renderCtxResetColorScale(g_renderCtx);
}
}
