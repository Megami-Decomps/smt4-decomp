/* Callback-table view of the Bible menu object: its selected-entry index, state word and member-callback table. */
#include "common.h"

struct CallbackSelectionWorkA {
    typedef void (CallbackSelectionWorkA::*Callback)();
    u8 unk0000[0x14]; // 0x0000
    s32 selection; // 0x0014
    u8 unk0018[0x838]; // 0x0018
    s32 state; // 0x0850
    u8 unk0854[0xa124]; // 0x0854
    Callback callbacks[1]; // 0xA978: trailing member-callback table
};

extern "C" {
void FUN_00183bb0(void);
void renderCtxResetColorScale(void*);
void skinObjectUpdateMatrices(void*);
extern void* g_renderCtx;

// Commits the current selection, invokes its member callback, and refreshes the scene.
void _ZN9Obj55c89c6renderEv(CallbackSelectionWorkA* work)
{
    FUN_00183bb0();
    work->state = 0x1F;
    if (work->callbacks[work->selection] != NULL) {
        (work->*work->callbacks[work->selection])();
    }
    skinObjectUpdateMatrices(g_renderCtx);
    renderCtxResetColorScale(g_renderCtx);
}
}
