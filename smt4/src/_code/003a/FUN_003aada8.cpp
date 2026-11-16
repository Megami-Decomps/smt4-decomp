#include "common.h"
#include "camp/RenderCtx.h"

/* A selection menu whose member-callback table sits at 0xA688 (CallbackSelectionWork's is at 0xA698). */
struct CallbackSelectionWorkA688 {
    typedef void (CallbackSelectionWorkA688::*Callback)();
    u8 unk0000[0x14];          // 0x0000
    s32 selection;             // 0x0014
    u8 unk0018[0x57C];         // 0x0018
    u32 state;                 // 0x0594
    u8 unk0598[0xA0F0];        // 0x0598
    Callback callbacks[1];     // 0xA688: trailing member-callback table
};

extern "C" {
extern RenderCtx *g_titleScene;
void gxResetColorQuadToWhite(CallbackSelectionWorkA688 *work);
void renderCtxResetColorScale(RenderCtx *scene);

// Commits the current selection, invokes its member callback, and refreshes the scene.
void FUN_003aada8(CallbackSelectionWorkA688 *work)
{
    gxResetColorQuadToWhite(work);
    work->state = 0x1F;
    if (work->callbacks[work->selection] != NULL) {
        (work->*work->callbacks[work->selection])();
    }
    renderCtxApplyTransforms(g_titleScene);
    renderCtxResetColorScale(g_titleScene);
}
}
