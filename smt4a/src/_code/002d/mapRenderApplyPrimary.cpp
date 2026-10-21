#include "common.h"
extern "C" {
extern struct { void *active; struct { u8 unk00[0x70]; void *value; } *work; } g_mapIf;
extern void *g_renderCtx;
void FUN_0016c4b8(void *context, void *value);
void mapRenderApplyPrimary(void) {
    if (g_mapIf.active) FUN_0016c4b8(g_renderCtx, g_mapIf.work->value);
}
}
