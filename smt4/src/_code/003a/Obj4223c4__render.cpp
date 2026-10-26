#include "shard/W8Match1_CallbackSelection.h"
extern "C" {
void FUN_002bed3c(void);
void FUN_002c18e4(void*);
void renderCtxApplyTransforms(void*);
extern void* g_titleScene;

// Commits the current selection, invokes its member callback, and refreshes the scene.
void _ZN9Obj4223c46renderEv(CallbackSelectionWork* work)
{
    FUN_002bed3c();
    work->state = 0x1F;
    if (work->callbacks[work->selection] != NULL) {
        (work->*work->callbacks[work->selection])();
    }
    renderCtxApplyTransforms(g_titleScene);
    FUN_002c18e4(g_titleScene);
}
}
