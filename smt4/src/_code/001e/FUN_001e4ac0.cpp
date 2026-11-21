/* NON_MATCHING: 6 lines, only the literal pool order: retail pools g_btlMainState ahead of g_titleScene (the code is the same). */
#include "common.h"
#include "gfx/ColoredQuad.h"
#include "camp/RenderCtx.h"
#include <stddef.h>
#include "camp/RenderCtxTitle.h"

/* The overlay color lies beyond the currently recovered BtlMainState layout. */
struct BattleOverlayView {
    u8 unk0000[0x4A0C];
    u32 color;
};
typedef char BattleOverlayColorOffsetCheck[offsetof(BattleOverlayView, color) == 0x4A0C ? 1 : -1];

extern "C" {
extern BattleOverlayView *g_btlMainState;
void forwardRecoveredCallback(void);
s32 renderCtxPackPassFlags(u32 mode, u32 enabled);

// Draw the battle's full-screen color overlay, preserving the current render state.
s32 FUN_001e4ac0(u32 job)
{
    u32 color = g_btlMainState->color;
    renderCtxPushA(g_titleScene, renderCtxPackPassFlags(5, 1));
    renderCtxSelectStereoLayout(g_titleScene);
    renderCtxSelectTexture(g_titleScene, 0);
    gxSubmitDrawZeroExtraParams(0.0f, 0.0f, 400.0f, 240.0f, color, color, color, 0.0f, color);
    forwardRecoveredCallback();
    renderStackPop(g_titleScene->stacks + RENDER_STACK_A);
    return 0;
}
}
