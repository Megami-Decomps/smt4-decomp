#include "common.h"
#include "camp/RenderCtx.h"
extern "C" {
extern struct { void *active; struct { u8 unk00[0x7C]; void *value; } *work; } g_mapIf;
extern RenderCtxA *g_renderCtx;
void mapRenderApplySecondary(void) {
    if (g_mapIf.active) renderCtxSelectTexture(g_renderCtx, reinterpret_cast<AsdTexture *>(g_mapIf.work->value));
}
}
