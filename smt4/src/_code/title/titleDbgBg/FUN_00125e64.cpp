/* NON_MATCHING: title debug labels and float coordinates restored; render-stack scheduling and common text-argument hoisting differ. */
#include "camp/RenderCtx.h"
#include "shard/TextureDrawCall.h"
#include "text/TextDraw.h"

namespace {
struct TitleDebugBackgroundView {
    u8 prefix[8];
    s32 state;
    u8 padding[4];
    u8 parameters[1];
};
}
extern "C" {
extern TitleDebugBackgroundView *DAT_0044e2e8;
extern RenderCtx *g_titleScene;
u32 FUN_002c5d80(u32 mode, u32 option);
void efctSetSpeed(f32 speed);
void FUN_002bed3c();
void *jyoucyuGetTableEntry(u32 index);
void FUN_002aed34(s32 layer, void *parameters, f32 x, f32 y);

// Draw the title debug background, PC/ROM loading indicator and the game title label.
u32 FUN_00125e64()
{
    TitleDebugBackgroundView *work = DAT_0044e2e8;
    if (work->state == 1) {
        RenderCtx *context = g_titleScene;
        renderCtxPushA(context, FUN_002c5d80(1, 0));
        efctSetSpeed(1.0f);
        FUN_002bed3c();
        FUN_002bf288(2, 0, 0, 0, 0, 0xB);
        renderStackPop(&g_titleScene->stackA);
        if (jyoucyuGetTableEntry(0) != NULL) {
            // Shift-JIS: full-width "PC load".
            FUN_002be5a4(3, 0xFFFFFFFF, "\x82\x6F\x82\x62\x83\x8D\x81\x5B\x83\x68", 296.0f, 194.0f, 0.0f, 1.0f, 1.0f);
        } else {
            // Shift-JIS: full-width "ROM load".
            FUN_002be5a4(3, 0xFFFFFFFF, "\x82\x71\x82\x6E\x82\x6C\x83\x8D\x81\x5B\x83\x68", 296.0f, 194.0f, 0.0f, 1.0f, 1.0f);
        }
        // Shift-JIS: the Japanese Shin Megami Tensei IV title.
        FUN_002be5a4(3, 0xFFFFFFFF, "\x90\x5E\x81\x45\x8F\x97\x90\x5F\x93\x5D\x90\xB6\x87\x57", 296.0f, 208.0f, 0.0f, 1.0f, 1.0f);
        FUN_002aed34(1, work->parameters, 228.0f, 228.0f);
    }
    return 0;
}
}
