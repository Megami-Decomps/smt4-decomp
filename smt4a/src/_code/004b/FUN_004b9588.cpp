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
void renderCtxSelectDisplayAreaForStereoMode(RenderCtxA *context);
void gxResetColorQuadToWhite(void);
s32 renderCtxPackPassFlags(s32 first, s32 second);
void FUN_004bade0(void *skinState);
void skinObjectUpdateMatrices(RenderCtxA *context);
void renderCtxResetColorScale(RenderCtxA *context);

void FUN_004b9588(SkinDrawObject *object)
{
    if (object->kind == 0x11) {
        return;
    }
    renderCtxSelectDisplayAreaForStereoMode(g_renderCtx);
    gxResetColorQuadToWhite();
    RenderCtxA *context = g_renderCtx;
    renderCtxPushA(context, renderCtxPackPassFlags(1, 0));
    if (object->kind >= 3) {
        FUN_004bade0(object->skinState);
    }
    renderStackPop(&g_renderCtx->stackA);
    skinObjectUpdateMatrices(g_renderCtx);
    renderCtxResetColorScale(g_renderCtx);
}
}
