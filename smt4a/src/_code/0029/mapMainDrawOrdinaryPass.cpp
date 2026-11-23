#include "map/mapMain.h"
#include "camp/RenderCtxA.h"
#include "camp/RenderCtx.h"

extern "C" {
extern MapMainA *g_mapMain;
s32 renderCtxPackPassFlags(s32 preset, s32 index);
void FUN_002b6f30(void);
void mapDrawTargetMarkerQuad(void);
void FUN_002443e4(void);
void mapEplUpdateEntriesIfAny(void);

// Draw the ordinary-map pass with its temporary render state, then update EPL entries.
s32 mapMainDrawOrdinaryPass(u32 job)
{
    s32 mode = g_mapMain->unk28;
    if (mode < 0x15) {
        return 0;
    }
    if (mode >= 0xB1) {
        return 0;
    }
    if ((u32)(mode - 0x8A) <= 0xB || mode == 0x18) {
        return 0;
    }
    RenderCtxA *context = g_renderCtx;
    s32 state = renderCtxPackPassFlags(5, 0);
    renderStackPush(context->stacks + RENDER_STACK_A, state);
    FUN_002b6f30();
    mapDrawTargetMarkerQuad();
    FUN_002443e4();
    renderStackPop(g_renderCtx->stacks + RENDER_STACK_A);
    mapEplUpdateEntriesIfAny();
    return 0;
}
}
