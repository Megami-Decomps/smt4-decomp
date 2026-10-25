/* NON_MATCHING: caption VFP/load scheduling and cached-state push/pop register allocation differ. */
#include "shard/S1ListPanel.h"
#include "text/TextDraw.h"

extern "C" {
extern RenderCtxA* g_renderCtx;
extern const void* DAT_0056fd38;
extern const u8 DAT_0056df38[][60];
u32 FUN_001692ac(u32 mode, u32 options);

u32 FUN_003161b4(void)
{
    struct TerminalView {
        u8 unk00[9];
        u8 selection;
        u8 unk0A[6];
        u32 state;
    };
    const TerminalView* work = static_cast<const TerminalView*>(DAT_0056fd38);
    if (work->state - 1 >= 17) {
        return 1;
    }
    if (work->state == 1) {
        textDrawString(3, 0xFFFFFFFF, (const char *)(DAT_0056df38[work->selection] + 7),
                      150.0f, 0.0f, 0.0f, 1.0f, 1.0f);
    }
    RenderCtxA* context = g_renderCtx;
    u32 value = FUN_001692ac(1, 0);
    renderCtxPushA(context, value);
    renderStackPop(&g_renderCtx->stackA);
    return 0;
}
}
