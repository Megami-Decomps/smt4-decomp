/* NON_MATCHING: prologue, early return, stack-address order and both label arms (via the drawDebugLabel inline) match retail; the build hoists the width move (vmov s3,s16) above the branch where retail repeats it inside each arm and copies the height from it last. */
#include "camp/RenderCtx.h"
#include "text/TextDraw.h"
#include "kernel/jyoucyuGetTableEntry.h"

struct TitleDebugBackground {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s32 state;
    /* 0x0c */ u8 unk0c[4];
    /* 0x10 */ u8 display[1];
};

extern "C" {
extern TitleDebugBackground *DAT_00589168;
extern RenderCtxA *g_renderCtx;
s32 FUN_001692ac(s32 mode, s32 flags);
void efctSetSpeed(f32 speed);
void FUN_00183bb0(void);
f32 FUN_00182884(s32 mode, void *display, f32 x, f32 y);

/* Draws a white debug label on the title background. */
static __inline void drawDebugLabel(const char *text, f32 x, f32 y)
{
    textDrawString(3, 0xffffffff, text, x, y, 0.0f, 1.0f, 1.0f);
}

// Draw the debug title background, loading-source label and game title.
u32 titleDbgBgDraw(void)
{
    TitleDebugBackground *background = DAT_00589168;
    if (background->state != 1) {
        return 0;
    }
    {
        RenderCtxA *context = g_renderCtx;
        renderCtxPushA(context, FUN_001692ac(1, 0));
        efctSetSpeed(1.0f);
        FUN_00183bb0();
        renderStackPop(&g_renderCtx->stackA);
        if (jyoucyuGetTableEntry(0) != NULL) {
            drawDebugLabel("\x82\x6f\x82\x62\x83\x8d\x81\x5b\x83\x68", 296.0f, 194.0f);
        } else {
            drawDebugLabel("\x82\x71\x82\x6e\x82\x6c\x83\x8d\x81\x5b\x83\x68", 296.0f, 194.0f);
        }
        drawDebugLabel("\x90\x5e\x81\x45\x8f\x97\x90\x5f\x93\x5d\x90\xb6\x87\x57\x82\x65", 268.0f, 208.0f);
        FUN_00182884(1, background->display, 228.0f, 228.0f);
    }
    return 0;
}
}
