/* NON_MATCHING: camp menu switch lowering and render-state stack register scheduling differ. */
#include "camp/CampState.h"
#include "camp/RenderCtx.h"

extern "C" {
extern CampStateA *g_camp;
extern RenderCtxA *g_renderCtx;
void FUN_00157558(RenderCtxA *context);
s32 FUN_001692ac(u32 enabled, u32 mode);
u32 FUN_002a4878(const void *selection);
s32 FUN_003da8f4(s32 kind, u32 selected);
void FUN_00227294(s32 first, s32 second, s32 enabled);
void skinObjectUpdateMatrices(RenderCtxA *context);
void renderCtxResetColorScale(RenderCtxA *context);

/* Draw the special camp-menu pass under a temporary render state, then restore transforms and color. */
u32 FUN_0025ec04(void)
{
    CampStateA *camp = g_camp;
    FUN_00157558(g_renderCtx);
    RenderCtxA *context = g_renderCtx;
    renderCtxPushA(context, FUN_001692ac(1, 0));
    s32 menu = camp->menu.current;
    if (menu == 0x47)
        menu = camp->menu.previous;
    switch (menu) {
    case 0x24:
        if (FUN_003da8f4(camp->unkA4, FUN_002a4878(camp->block40)) != 0x1B)
            break;
        // This menu shares the pass only for the selected special entry.
    case 4: case 5: case 10: case 15: case 16: case 17: case 19: case 29:
    case 0x25: case 0x26: case 0x27: case 0x28: case 0x29: case 0x2B: case 0x2C:
    case 0x2E: case 0x2F: case 0x50: case 0x51: case 0x52:
        FUN_00227294(0, 0, 1);
        break;
    }
    renderStackPop(&g_renderCtx->stackA);
    skinObjectUpdateMatrices(g_renderCtx);
    renderCtxResetColorScale(g_renderCtx);
    return 0;
}
}
