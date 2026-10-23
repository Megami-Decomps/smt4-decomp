/* NON_MATCHING: early guards shrink-wrap the prologue; render-state push uses an extra address register. */
#include "map/mapMain.h"
#include "camp/RenderCtx.h"

extern "C" {
extern MapMainA *g_mapMain;
extern RenderCtxA *g_renderCtx;
s32 FUN_001692ac(s32 preset, s32 index);
void FUN_002b6f30(void);
void FUN_002cfb18(void);
void FUN_002443e4(void);
void mapEplUpdateEntriesIfAny(void);

// Draw the ordinary-map pass with its temporary render state, then update EPL entries.
s32 FUN_0029ee68(void)
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
    s32 state = FUN_001692ac(5, 0);
    renderStackPush(&context->stackA, state);
    FUN_002b6f30();
    FUN_002cfb18();
    FUN_002443e4();
    renderStackPop(&g_renderCtx->stackA);
    mapEplUpdateEntriesIfAny();
    return 0;
}
}
