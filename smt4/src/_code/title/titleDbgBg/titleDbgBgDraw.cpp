#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "ui/AnimatedMessage.h"
#include "camp/RenderCtx.h"
#include "shard/TextureDrawCall.h"
#include "text/TextDraw.h"
#include "AsdSDK/Source/Sys/Gx/AsdGxCommandList.h"
#include "camp/RenderCtxTitle.h"

namespace {
struct TitleDebugBackgroundView {
    u8 prefix[8];
    s32 state;
    u8 padding[4];
    u8 parameters[1];
};
}
extern "C" {
extern TitleDebugBackgroundView *g_titleDbgBg;
f32 asdTextDrawDebugSlotString(s32 layer, void *parameters, f32 x, f32 y);

// Draw the title debug background, PC/ROM loading indicator and the game title label.
u32 titleDbgBgDraw()
{
    TitleDebugBackgroundView *work = g_titleDbgBg;
    if (work->state != 1) {
        return 0;
    }
    RenderCtx *context = g_titleScene;
    renderCtxPushA(context, renderCtxPackPassFlags(1, 0));
    efctSetSpeed(1.0f);
    gxResetColorQuadToWhite();
    texDrawTableEntryAtStoredOrigin(2, 0, 0, 0, 0, 0xB);
    renderStackPop(g_titleScene->stacks + RENDER_STACK_A);
    if (jyoucyuGetTableEntry(0) != NULL) {
        // Shift-JIS: full-width "PC load".
        textDrawString(296.0f, 194.0f, 0.0f, 3, 1.0f, 0xFFFFFFFF, 1.0f, "\x82\x6F\x82\x62\x83\x8D\x81\x5B\x83\x68");
    } else {
        // Shift-JIS: full-width "ROM load".
        textDrawString(296.0f, 194.0f, 0.0f, 3, 1.0f, 0xFFFFFFFF, 1.0f, "\x82\x71\x82\x6E\x82\x6C\x83\x8D\x81\x5B\x83\x68");
    }
    // Shift-JIS: the Japanese Shin Megami Tensei IV title.
    textDrawString(296.0f, 208.0f, 0.0f, 3, 1.0f, 0xFFFFFFFF, 1.0f, "\x90\x5E\x81\x45\x8F\x97\x90\x5F\x93\x5D\x90\xB6\x87\x57");
    asdTextDrawDebugSlotString(1, work->parameters, 228.0f, 228.0f);
    return 0;
}
}
