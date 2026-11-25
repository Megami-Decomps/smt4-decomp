#include "camp/RenderCtx.h"
#include "camp/RenderCtxA.h"

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
void gxResetColorQuadToWhite(void);
void FUN_004bade0(void *skinState);
void skinObjectUpdateMatrices(RenderCtxA *context);
void renderCtxResetColorScale(RenderCtxA *context);

void mikadoCameraDrawView(SkinDrawObject *object)
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
    renderStackPop(g_renderCtx->stacks + RENDER_STACK_A);
    skinObjectUpdateMatrices(g_renderCtx);
    renderCtxResetColorScale(g_renderCtx);
}
}
