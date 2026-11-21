/* NON_MATCHING: retail clears the last eight words through a this+2048 base and tests a zero once more (cmp r5, #0) before storing the id; the build clears all 16 words directly. */
#include "classes/Obj420e4c.h"
#include "nn/cec/ModuleState.h"

struct CecModuleView {
    CecModuleFlags prefix;
    u8 unk02;
    s8 inboxOwned;    /* 0x03 */
    s8 outboxOwned;   /* 0x04 */
};

extern "C" {
extern CecModuleView g_asdCecModuleFlags;
s32 FUN_003577ec(void);
s32 FUN_00239a54(void);
}

/* Clears the module's ownership flags and the box state; a box that is not deferred also stamps
 * its three index signatures and probes whether CEC is usable. */
Obj420e4c::Obj420e4c(u32 deferred)
{
    open = 0;
    g_asdCecModuleFlags.inboxOwned = 0;
    g_asdCecModuleFlags.outboxOwned = 0;
    unk0a = 0;
    unk0b = 0;
    for (s32 i = 0; i < 16; i++) {
        words[i] = 0;
    }
    if (!deferred) {
        inboxSignature = 0x6262;
        outboxSignature = 0x6262;
        messageSignature = 0x6767;
        id = 0;
        FUN_003577ec();
        if (FUN_00239a54() != 0)
            fallback = 1;
        else
            fallback = 0;
        open = 1;
    }
}
