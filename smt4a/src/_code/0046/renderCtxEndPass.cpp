/* Ends a draw pass on the draw context once the owner has gone past state 2. */
#include "common.h"
#include "camp/RenderCtx.h"

extern "C" {

typedef struct DrawOwner {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ s32 state;
} DrawOwner;

int renderCtxResetColorScale(RenderCtxA *ctx);
int skinObjectUpdateMatrices(RenderCtxA *ctx);

extern RenderCtxA *g_renderCtx;

void renderCtxEndPass(DrawOwner *owner)
{
    if (owner->state > 2) {
        skinObjectUpdateMatrices(g_renderCtx);
        renderCtxResetColorScale(g_renderCtx);
    }
}

} /* extern "C" */
