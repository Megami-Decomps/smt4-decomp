/* NON_MATCHING: corrected draw argument order; color copies, float setup scheduling, and global literal-pool order still differ. */
#include "common.h"
#include "camp/RenderCtx.h"
#include <stddef.h>

/* The overlay color lies beyond the currently recovered BtlMainState layout. */
struct BattleOverlayView {
    u8 unk0000[0x4A0C];
    u32 color;
};
typedef char BattleOverlayColorOffsetCheck[offsetof(BattleOverlayView, color) == 0x4A0C ? 1 : -1];

extern "C" {
extern BattleOverlayView *g_btlMainState;
extern RenderCtx *g_titleScene;
void forwardRecoveredCallback(void);
void FUN_002c0944(u32 topLeft, u32 topRight, u32 bottomLeft, u32 bottomRight,
                  f32 x, f32 y, f32 width, f32 height, f32 depth);
void FUN_002c1b64(RenderCtx *context, s32 mode);
s32 FUN_002c5d80(u32 mode, u32 enabled);

// Draw the battle's full-screen color overlay, preserving the current render state.
s32 FUN_001e4ac0(u32 job)
{
    u32 color = g_btlMainState->color;
    renderCtxPushA(g_titleScene, FUN_002c5d80(5, 1));
    renderCtxSelectStereoLayout(g_titleScene);
    FUN_002c1b64(g_titleScene, 0);
    FUN_002c0944(color, color, color, color, 0.0f, 0.0f, 400.0f, 240.0f, 0.0f);
    forwardRecoveredCallback();
    renderStackPop(&g_titleScene->stackA);
    return 0;
}
}
