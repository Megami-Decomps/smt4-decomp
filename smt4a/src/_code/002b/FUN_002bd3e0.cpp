#include "common.h"
extern "C" {
struct DrawOwner { u32 unk00; s32 state; };
extern struct { u32 unk00; struct { u8 unk00[0x1C]; DrawOwner *owner; } *work; } g_qcMain;
void renderCtxEndPass(DrawOwner *owner);
/* Ends an active draw pass, if the owner reached state one. */
s32 FUN_002bd3e0(void) {
    if (g_qcMain.work != NULL && g_qcMain.work->owner != NULL)
        renderCtxEndPass(g_qcMain.work->owner);
    return 0;
}
}
