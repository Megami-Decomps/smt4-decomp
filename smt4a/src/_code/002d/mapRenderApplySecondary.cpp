/* NON_MATCHING: retail emits 'ldr r1, [r0, #124]'; compiler emits 'ldr r1, [r0, #308]' at the first differing instruction. */
#include "common.h"
extern "C" {
extern struct { void *active; struct { u8 unk00[0x134]; void *value; } *work; } g_mapIf;
extern void *g_renderCtx;
void FUN_0016c4b8(void *context, void *value);
void mapRenderApplySecondary(void) {
    if (g_mapIf.active) FUN_0016c4b8(g_renderCtx, g_mapIf.work->value);
}
}
