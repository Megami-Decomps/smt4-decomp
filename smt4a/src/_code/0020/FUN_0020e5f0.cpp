/* NON_MATCHING: retail keeps the constants 0, 1 and 2 in callee-saved registers across the second allocation (push {r4-r7, lr}); the real BootState constructor/new expression and virtual setMode call now match everything else. */
#include "common.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

class HolderView {
public:
    virtual void unk00();
    virtual void unk04();
    virtual void setMode(s32 mode, s32 enabled); // 0x08
    u8 unk04_[8]; // 0x04
};

struct BootStateView {
    BootStateView() { holder = 0; unk04 = 0; }
    static void* operator new(u32 bytes) throw() { return asdOperatorNew(bytes); }
    void* process; // 0x00
    u8 unk04; // 0x04
    u8 unk05[3]; // 0x05
    HolderView* holder; // 0x08
    u8 unk0C; // 0x0C
    u8 unk0D[3]; // 0x0D
};

extern "C" {
void runnerShutdown();
void FUN_002ef9ec();
HolderView* vtblHolderInit557bbc(HolderView* self);
extern BootStateView* DAT_00588e2c;

// Create the boot process and its holder, then initialize the holder's mode.
void FUN_0020e5f0(void)
{
    BootStateView* state = new BootStateView;

    DAT_00588e2c = state;
    state->process = reinterpret_cast<void*>(asdProcessCreateSimple(reinterpret_cast<const s8 *>("BOOT C"), 4, 0, 0, reinterpret_cast<AsdProcUpdateFunc>(runnerShutdown), reinterpret_cast<AsdProcFunc>(FUN_002ef9ec), 0));

    HolderView* holder = static_cast<HolderView*>(asdOperatorNew(12));
    if (holder != 0) {
        holder = vtblHolderInit557bbc(holder);
    }
    state->holder = holder;
    holder->setMode(2, 1);
    state->unk04 = 0;
    state->unk0C = 0;
}
}
